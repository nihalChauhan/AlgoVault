#include <stdio.h>

struct dif{
  int s;
  int e;
  int d;
};

void find_max(int a[], int n);

int main(){
  int n, a[100];
  scanf("%d ",&n);
  for(int i=0; i<n; i++)
    scanf("%d", &a[i]);
  find_max(a, n);
  return 0;
}

void find_max(int a[], int n){
  struct dif x;
  int min, max, i;
  min = max = 0;
  for(i=1; i<n; i++){
    if(a[min] > a[i]){
      if(a[max]-a[min]){
        x.s = min;
        x.e = max;
        x.d = a[max]-a[min];
      }
      min = max = i;
    }
    else{
      if(a[max]<a[i])
        max = i;
    }
  }
  if(a[max]-a[min]){
    x.s = min;
    x.e = max;
    x.d = a[max]-a[min];
  }
  printf("%d to %d : %d\n", x.s, x.e, x.d);
}
