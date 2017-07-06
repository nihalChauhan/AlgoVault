#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int temp;
    int i, j, k, prev;
    temp = n;
    i=0;
    while(temp){
        temp/=10;
        i++;
    }
    int a[i];
    for(j=0; j<i; j++)
      a[i]=0;
    i=0;
    temp = n;
    while(temp){
        a[i]=temp%10;
        temp/=10;
        i++;
    }

    if(a[0]!=0)
        a[0]--;
    else{
        a[0]=9;
        if(a[1]!=0)a[1]--;
    }
    prev = a[0];
    for(j=1; j<i; j++){
        if(a[j]>prev){
            for(k=j-1; k>=0; k--)
                a[k]=9;
            if(a[j]!=0)
                a[j]--;
        }
        prev = a[j];
    }
    temp = 0;
    for(j=i; j>=0; j--){
        temp *= 10;
        temp += a[j];
    }
    printf("%d\n", temp);
  }
