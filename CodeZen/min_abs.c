#include <stdio.h>
#include <stdlib.h>

void quickSort(int a[], int beg, int end);
int partition(int a[], int beg, int end);
void swap(int *x, int *y);

int main(){
  int a[20], n, i;
  scanf("%d", &n);
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);

	quickSort(a,0,n-1);
  int min = abs(a[0]-a[1]);
  for(i=1; i<n-1; i++)
    min = abs(a[i]-a[i+1])<min ? abs(a[i]-a[i+1]) : min;
  printf("%d\n", min);
}

void quickSort(int a[], int beg, int end){
  if(beg<end){
    int p = partition(a, beg, end);
    quickSort(a, beg, p-1);
    quickSort(a, p+1, end);
  }
}
int partition(int a[], int beg, int end){
  int i;
  int pivot = a[end];
  int j = beg - 1;
  for(i=beg; i<end; i++){
    if(a[i] <= pivot){
      j++;
      swap(&a[j], &a[i]);
    }
  }
  swap(&a[j+1], &a[end]);
  return j+1;
}

void swap(int *x, int *y)
{
  int t = *x;
  *x = *y;
  *y = t;
}
