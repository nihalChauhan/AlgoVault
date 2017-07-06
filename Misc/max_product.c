#include <stdio.h>
#include <limits.h>

int main(){
  int a[20], n, i, r;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  int k[5];
  k[4]=k[3]=k[2]=INT_MIN;
  k[0]=k[1]=0;
  for(i=0; i<n; i++){
    if(a[i]>=k[4]){
      k[2]=k[3];
      k[3]=k[4];
      k[4]=a[i];
    }
    else if(a[i]>=k[3]){
      k[2]=k[3];
      k[3]=a[i];
    }
    else if(a[i]>=k[2])
      k[2]=a[i];

    if(a[i]<k[0]){
      k[1]=k[0];
      k[0]=a[i];
    }

    else if(a[i]<k[1])
      k[1]=a[i];
  }
  r = k[0]*k[1] > k[2]*k[3] ? k[4]*k[0]*k[1] : k[4]*k[3]*k[2];
  printf("Max : %d\n", r);
  return 0;
}
