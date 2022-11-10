#include<stdio.h>
void main()
 { int a[50],item,n,temp,i;
  printf("Enter size of array:");
  scanf("%d",&n);
  printf("Enter array elements:");
  for(i=0;i<n;i++)
  {scanf("%d",&a[i]);}
  printf("Array elements:\n");
  for(i=0;i<n;i++)
  {printf("%d\t",a[i]);}
   printf("\n");

  for (int step = 0; step < n - 1; ++step)  
 for(i=0;i<n-1;i++)
 {if(a[i]>a[i+1])
  {temp=a[i];
  a[i]=a[i+1];
  a[i+1]=temp;
  }
}
 printf("Array elements after Sorting:\n");
  for(i=0;i<n;i++)
  {printf("%d\t",a[i]);}
   printf("\n");

}
