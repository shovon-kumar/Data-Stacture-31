#include<stdio.h>
int main()
{
    int n,i,j,temp;
    int a[100];
    printf("Enter the size of array : ");
    scanf("%d", &n);
    printf("Enter the elements of array : ");
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
        {
            if(a[j]>a[j+1])
               {
                   temp = a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;
               }
        }
    }
    printf("\n");
    printf("The sorting array : ");
    for(i=0;i<n;++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
