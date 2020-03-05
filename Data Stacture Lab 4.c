#include<stdio.h>
int main()
{   //Main Function,
    int n;
    printf("Enter the value of N : ");
    scanf("%d", &n);
    int i=0;
    print1Ton(n); //call the function.
    printnTo1(n);//call the function.
    Sum(n);
    Factorial(n);
}
//A program which help to print 1 to n.
void print1Ton(int n)
{
    int i;
    printf("Print 1 to n : ");
    for (i=1; i<=n; i++)
    {
        printf("%d ", i);
    }
}
//A program which help to print n to 1.
void printnTo1(int n)
{
    int i;
    printf("\n");
    printf("Print n to 1 : ");
    for(i=n; i>=1; i--)
    {
        printf("%d ", i);
    }
}
int Sum(int n) //A function to sum of all element.
{
    int sum=0;
    int i;
    printf("\n");
    printf("Sum of total numbers : ");
    for(i=0;i<=n;i++)
    {
        sum = sum + i;
    }
    printf("%d ", sum);

}
int Factorial(int n) //A function to multiplication of all element.
{
    int fac = 1;
    int i;
    printf("\n");
    printf("Factorial : ");
    for(i = 1; i<=n; i++)
    {
        fac = fac * i;
    }
    printf("%d", fac);
}

