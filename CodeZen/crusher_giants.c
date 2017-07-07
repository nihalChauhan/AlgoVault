#include <stdio.h>
#include <string.h>

int main(){
  int n, i;
  char a[20];
  scanf("%s", a);
  n = strlen(a);
  int c = 0;
  for(i=0; i<n; i++){
    if(a[i]=='C'){
      if(i-2>=0 && a[i-2]=='G'){
        a[i-2]='_';
        c++;
      }
      if(i-1>=0 && a[i-1]=='G'){
        a[i-1]='_';
        c++;
      }
      if(i+2<n && a[i+2]=='G'){
        a[i+2]='_';
        c++;
      }
      if(i+1<n && a[i+1]=='G'){
        a[i+1]='_';
        c++;
      }
    }
  }
  printf("%d\n", c);
  return 0;
}
