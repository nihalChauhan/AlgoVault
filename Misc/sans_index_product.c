#include <stdio.h>

int main(){
  int a[20], p[20], n, i;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  for(i=0; i<n; i++)
    p[i] = 1;
  int temp=1;
  for(i=0; i<n; i++){
    p[i] = temp;
    temp *= a[i];
  }
  temp=1;
  for(i=n-1; i>=0; i--){
    p[i] *= temp;
    temp *= a[i];
  }
  for(i=0; i<n; i++)
    printf("%d ", p[i]);
}

//With division method
/*
int main(){
  int a[20], n, i;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  int r=1, c=0;
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
*/
