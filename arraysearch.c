#include<stdio.h>
void main()
 { int a[50],item,n,flag,temp;
  printf("Enter size of array:");
  scanf("%d",&n);
  printf("Enter array elements:");
  for(int i=0;i<n;i++)
  {scanf("%d",&a[i]);}
  printf("Array elements:\n");
  for(int i=0;i<n;i++)
  {printf("%d\t",a[i]);}
   printf("\n");
  printf("\nEnter item to be searched:");
  scanf("%d",&item);
 for(int i=0;i<n;i++)
  {if(a[i]==item)
   temp=i;
  flag=-1;
  }
if(flag==-1)
printf("\nItem found at location: %d\n",temp);
else
   printf("\nItem not found\n");
}
