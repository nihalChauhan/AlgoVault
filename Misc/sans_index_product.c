#include <stdio.h>

int main(){
  int a[20], n, i, r=1, c=0;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  for(i=0; i<n; i++){
    if(a[i]!=0)
      r*=a[i];
    else
      c++;
  }

  for(i=0; i<n; i++){
    if(!c)
      printf("%d ", r/a[i]);
    else if(c==1 && a[i]==0){
      printf("%d", r);
    }
    else
      printf("0 ");
  }
  printf("\n");
  return 0;
}
