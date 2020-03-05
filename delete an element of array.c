#include<stdio.h>
int main()
{
    int array[100];
    int i,j,position,n;
    printf("Enter the length of array : ");
    scanf("%d", &n);
    printf("Enter the elements of array : ");
    scanf("%d", &array[i]);
    printf("Enter the position you want to remove : ");
    scanf("%d", &position);
    if(position>=n+1)
    {
        printf("Not possible");
    }
    else
    {
        for(i=position-1;i<n-1;i++)
        {
            array[i]=array[i+1];
        }
    }

    printf("\n");
    printf("After removing the array : ");
    for(i=0;i<n-1;i++){

        printf("%d ", array[i]);}

    return 0;
}


