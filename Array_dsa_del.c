#include <stdio.h>
void algodel(int a[],  int *m, int k)
{
   int i;
   if (*m == -1)
   {
      printf("Array is empty deletion not possible");
   }
   else if (k < 0 || k >= *m + 1)
   {
      printf("Invalid index\n ");
   }

   else
   {
      for (i = k + 1; i <= *m; i++)
      {
         a[i - 1] = a[i];
      }
      *m = *m - 1;
   }
}

int main()
{
   int a[20] = {34, 56, 32, 345, 67, 32, 1112, 6, 8, 0};
   int m = 9, k, i;
   printf("Enter index(0 based index) from where u delete item: ");
   scanf("%d", &k);
   algodel(a, &m, k);
   printf("Array after deletion\n");
   for (i = 0; i <= m ; i++)
   {
      printf(" %d", a[i]);
   }

   return 0;
}