#include<stdio.h>
int main ()
{
    int i,n;
    int arr[10];
    scanf("%d",&n);
    for(i=0; n>0; i++)
    {

        arr[i]=n%2;
        n=n/2;
    }
    for (i=i-1; i>=0; i--)
    {
        printf("%d",arr[i]);
    }


}
