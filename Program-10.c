#include <stdio.h>
int main()
{
   int arr1[25], i,n;
   printf("Input the number of elements to store in the array :");
   scanf("%d",&n);
   printf("Input elements of the array :\n");
   for(i=0;i<n;i++)
      {
	   scanf(" %d",&arr1[i]);
	  }
   printf("The elements you entered are : \n");
   for(i=0;i<n;i++)
      {
        printf("%d ",arr1[i]);
	 //print the array elements
	  }
	   return 0;
}
