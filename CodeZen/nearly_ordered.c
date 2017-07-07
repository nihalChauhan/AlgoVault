#include <stdio.h>

int main(){
  int n, i, a[10];
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  int k = 2;
  for(i=1; i<n; i++){
    if(a[i]<a[i-1])
      k--;
    if(k==0)break;
  }
  if(k) printf("true\n");
  else  printf("false\n");
  return 0;
}
