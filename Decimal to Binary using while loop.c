//shuvon
#include<stdio.h>
int main ()
{
    int num,arr[10];
    printf("Enter any Decimal number : ");
    scanf("%d",&num);
    int i=0;
    while (num!=0)
    {
        arr[i]=num%2;
        num=num/2;
        i++;
    }
    printf("%d Decimal to Binary is : ",num);
    for (i=i-1; i>=0; i--)
    {
        printf("%d",arr[i]);
    }
}
