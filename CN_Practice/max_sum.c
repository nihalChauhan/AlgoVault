#include <stdio.h>
#include <limits.h>

int main(){
	int n, m, a[300000], i;
	scanf("%d", &n);
	scanf("%d", &m);
	for(i=0;i<n;i++)
	    scanf("%d", &a[i]);
	int sum = a[0];
  int prev = 0;
  int ci = 0;
	for(i=1;i<n;i++){
    if(sum+a[i] > m){
      if(sum>prev)
        prev = sum;
      sum += a[i];
      while(sum>m){
        sum-=a[ci++];
      }
    }
    else
    sum+=a[i];
	}
	 printf("%d\n",sum>prev?sum:prev);
	return 0;
}
