#include <stdio.h>
#include <string.h>

int main(){
  char a[20], t;
  fgets(a, 20, stdin);
  int n = strlen(a);
  int l = 0;
  int r = n-2;
  while(l<r){
    if(a[l]!=' ' && a[r]!=' '){
      t = a[l];
      a[l] = a[r];
      a[r] = t;
      l++; r--;
    }
    else{
      if(a[l]==' ') l++;
      if(a[r]==' ') r--;
    }
  }
  fputs(a, stdout);
}
