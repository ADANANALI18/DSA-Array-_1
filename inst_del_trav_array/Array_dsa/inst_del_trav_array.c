#include <stdio.h>
void algoinsert(int a[], int n, int *m, int item, int k)
{
    int i;
    if (*m == (n - 1))
    {
        printf("Array is full");
    }

    else if (k < 0 || k > (*m + 1))
        printf("Invalid index");
    else
    {
        for (i = *m; i >= k; i--)
            a[i + 1] = a[i];

        a[k] = item;
        
        *m = *m + 1;
    }
}

void algodel(int a[], int *m, int k)
{
    int i;
    if (*m == -1)
    {
        printf("Array empty, deletion not possible\n");
    }
    else if (k < 0 || k >= (*m + 1))
        printf("Invalid index\n");
    else
    {
        for (i = k + 1; i <= *m; i++)
            a[i - 1] = a[i];

        *m = *m - 1;
    }
}

void algodisp(int a[], int n, int m)
{
    int i;
    if (m == -1)
    {
        printf("Array empty(NO traversal can be done\n)");
        return;
    }
    
    printf("Contents of array");
    for (i = 0; i <= m; i++)
        printf(" %d", a[i]);
    printf("\n");
}

int main()
{
    const int n = 25;
    int a[n];
    int i, item, choice, mid, index;
    int m = -1;
    do {
    printf("\nMenu Operations:- ");
    printf("1.insertion at the beggining\n");
    printf("2.insertion at the end\n");
    printf("3.insertion at middle\n");
    printf("4.insertion at any chosen index\n");
    printf("5.deletion at the beggining\n");
    printf("6.deletion at middle\n");
    printf("7.deletion at the end\n");
    printf("8.deletion at any chosen index\n");
    printf("9.traversal of array\n");
    printf("10.Exit\n");
    printf("Enter your choice? ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter item for insertion at beggining: ");
        scanf("%d", &item);
        algoinsert(a, n, &m, item, 0);
        break;
    case 2:
        printf("Enter item for insertion at the end: ");
        scanf("%d", &item);
        algoinsert(a, n, &m, item, m + 1);
        break;
    case 3:
        printf("Enter item for insertion at middle: ");
        scanf("%d", &item);
        mid = (m + 1) / 2;
        algoinsert(a, n, &m, item, mid);
        break;
    case 4:
        printf("Enter item for insertion at any index u want: ");

        scanf("%d", &item);
        printf("Enter index no. : ");
        scanf("%d", &index);
        algoinsert(a, n, &m, item, index);
        break;
    case 5:
        algodel(a, &m, 0);
        break;
    case 6:
        if (m == -1)
        {
            printf("Array empty\n");
        }
        else
        {
            mid = (m + 1) / 2;
            algodel(a, &m, mid);
        }
        break;
    case 7:
        printf("deletion at the end ");
        algodel(a, &m, m);
        break;
    case 8:
        printf("deletion at any chosen index ");
        printf("(Enter index no.) : ");
        scanf("%d", &index);
        algodel(a, &m, index);
        break;
    case 9:
        algodisp(a, n, m);
        break;

    }

}
    while (choice != 10);
        

    return 0;
}