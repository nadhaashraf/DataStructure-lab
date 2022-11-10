
#include <stdio.h>
int main()
{
    int arr1size = 5, arr2size = 5, arr_resultsize, i, j;
    int a[5] = { 1, 2, 3, 4, 5 };
  
    int b[5] = { 6, 7, 8, 9, 10 };
  
    arr_resultsize = arr1size + arr2size;
    int c[arr_resultsize];
    printf("First Array:");
     for (i = 0; i < arr1size; i++) 
      {
        printf("%d ", a[i]); }
       printf("\n");

printf("Second Array:");
 for (i = 0; i < arr2size ; i++) {
        printf("%d ", b[i]);}
         printf("\n");
   
    for (i = 0; i < arr1size; i++) {
        c[i] = a[i];
    }
  
    
    for (i = 0, j = arr1size;
         j < arr_resultsize && i < arr2size; i++, j++) {
        c[j] = b[i];
    }
  
   printf("Array after merging:");
    for (i = 0; i < arr_resultsize; i++) {
        printf("%d ", c[i]);
    }
printf("\n");
    return 0;
}







































