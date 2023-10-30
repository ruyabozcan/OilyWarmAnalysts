#include <stdio.h>

int main(void) {
  int n=21;
  int a[n];
  for(int i=0;i<n;i++)
    a[i]=i*i;  
  for(int i=0;i<n;i++)
    printf("%d ",a[i]);
  printf("\n");
    
  return 0;
}