#include<stdio.h>
#include<math.h>
int main ()
{
    int n,rem,dec=0;
    scanf("%d",&n);
    int i=0;
    while (n>0) {
        rem=n%10;
        n=n/10;
        dec=dec+rem*pow(2,i);
        i++;
    }
    printf("%d",dec);
}
