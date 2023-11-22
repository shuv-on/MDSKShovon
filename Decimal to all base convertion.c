#include<stdio.h>
void decimalToBase (int n,int x);
int main ()
{
    int decimal;
    printf("Enter a Dcimal Number : ");
    scanf("%d",&decimal);
    int x;
    printf("Enter base : ");
    scanf("%d",&x);
    printf("%d Decoimal To equivalenbt %d base is : ",decimal,x);
    decimalToBase(decimal,x);
}
void decimalToBase (int n,int x)
{
    
    int i=0;
    int base_arr[10];
    while (n>0)
    {
        base_arr[i]=n%x;
        n/=x;
        i++;
    }
    for (i=i-1;i>=0;i--)
    {
        printf("%d",base_arr[i]);
    }
}
