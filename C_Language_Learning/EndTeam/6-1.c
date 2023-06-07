
#include <stdio.h>

int Unique_Int(int a[], int n);

int main()
{

  int a[100], n, k, count;

  scanf("%d", &n);
  for (k = 0; k < n; k++)
    scanf("%d", &a[k]);
  count = Unique_Int(a, n);
  printf("%d ", count);
  for (k = 0; k < count; k++)
    printf("%d ", a[k]);

  return 0;
}

int Unique_Int(int a[], int n)
{
  int i, j, k, count = 0;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < count; j++)
    {
      if (a[i] == a[j])
        break;
    }
    if (j == count)
    {
      a[count] = a[i];
      count++;
    }
  }
  return count;
}