#include<stdio.h>
int main()
{
    int a[100];
    int maximum;
    int i;
    printf("Enter the array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[0]<a[i]){
        a[0]=a[i];}
    }
    printf("Largest number : ");
    printf("%d", a[0]);
    return 0;
}
