#include<stdio.h>
int main()
{
  int row,colm,location,num,n,temp,i;
  printf("enter number of elements in array=\n");
  scanf("%d",&n);
  int a[n+1];

  printf(" enter array =\n");
  for( i = 0; i<n ; i++)
    {
      scanf("%d", &a[i]);
    }
      for( i = 0; i<n; i++)
   {
    printf(" %d ", a[i]);
   }

  printf(" enter element you want to add and position = \n");
  scanf("%d%d", &location,&num);
    for( i = n; i>=location; i--)
   {
  
  a[i]=a[i-1];
   }
   a[location-1]=n;
   n++;
   printf("updated array ");
   for(i=0;i<n;i++){
   printf("%d\n",a[i]);
   }

}