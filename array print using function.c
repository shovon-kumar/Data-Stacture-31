#include<stdio.h>
int main()
{
    int a[100];
    int i,n;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    array_print( a, n-1);
    return 0;
}
void array_print(int a[],int n)
{

if(n<0)
    return;
array_print(a,n-1);
printf("%d ", a[n]);

}
