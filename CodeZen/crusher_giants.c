#include <stdio.h>
#include <string.h>

int main(){
  int n, i, t=0;
  char a[20];
  scanf("%s", a);
  n = strlen(a);
  int c = 2;
  int g = 0;
  for(i=0; i<n; i++){
    if(a[i]=='G'){
      c++;
      g++;
    }
    else if(a[i]=='C'){
      if(c>4)
        t+=c-4;
      c=0;
    }
  }
  printf("%d\n", g-t);
}
