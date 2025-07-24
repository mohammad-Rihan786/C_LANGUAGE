#include<stdio.h>
int main()
{
  int row,temp,n;
  printf("enter number of elements in array=\n");
  scanf("%d",&n);
  int a[n+1];
  printf(" enter array =\n");
  for( row = 0; row<n ; row++)
    {
      scanf("%d", &a[row]);
    }
  printf(" enter location you want to delete = \n");
  scanf("%d", &temp);
  for( row = temp; row<n-1 ; row++)
    {
     a[row] = a[row+1];
   }
  printf(" \n final array is = \n");
  for( row = 0; row<n-1; row++)
   {
    printf(" %d ",a[row]);
}
}