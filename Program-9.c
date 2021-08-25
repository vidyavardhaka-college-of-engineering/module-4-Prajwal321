// Input:5                                                                                 
 //  Output:value=5


#include <stdio.h>
int main()
{
  int var;
  int *ptr;
  ptr = &var;
//Initialize the pointer variable
  printf("Enter the value:");
  scanf("%d",&var);
  printf("value=%d",*ptr);
  return 0;
}
