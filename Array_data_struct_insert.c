#include <stdio.h>
void alginsert(int a[], int n, int *m, int item, int k)
{
  int i;
  if (*m == (n - 1))
  {
    printf("Array is full insertion is not possible\n");
  }
  else if (k < 0 || k > *m + 1)
  {
    printf("Invalid location of index ");
  }
  else
  {
    for (i = *m; i >= k; i--)
      a[i + 1] = a[i];

    a[k] = item;

    *m = *m + 1;
  }
}
int main()
{
  int i;
  int a[15] = {4, 56, 2, 55, 90, 21, 234};
  int n = 15;
  int item = 100, k, m = 6;
  printf("Enter index(0 based index) where u want to insert item: ");
  scanf("%d", &k);
  alginsert(a, n, &m, item, k);
  printf("Array after insertion of new item\n");
  for (i = 0; i < m + 1; i++)
  {
    printf(" %d", a[i]);
  }

  return 0;
}