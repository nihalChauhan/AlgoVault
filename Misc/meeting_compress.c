#include <stdio.h>
#include <stdbool.h>

struct meet{
  int a, b;
};

int main(){
  struct meet m[20];
  struct meet mc[20];

  int i, n, k, j;
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d %d", &m[i].a, &m[i].b);

  int x[20]={0};
  for(i=0; i<n; i++){
    x[m[i].a]++;
    for(j=m[i].a+1; j<m[i].b; j++)
        x[j]+=2;
    x[m[i].b]++;
  }
  for(i=0; i<20; i++){
    printf("%d ", x[i]);
  }

  k=0; i=0;
  int flag=0;
  while(i<=20){
    if(x[i]==1){
      if(!flag){
        mc[k].a=i;
        flag=1;
      }
      else{
        mc[k++].b=i;
        flag=0;
      }
    }
    i++;
  }
  for(i=0; i<k; i++)
    printf("(%d, %d) ", mc[i].a, mc[i].b);
  return 0;
}
