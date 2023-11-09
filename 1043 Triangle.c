#include<stdio.h>
int main ()
{
    float a,b,h;
    scanf("%f %f %f",&a,&b,&h);
    if (a+b>h&&a+h>b&&b+h>a)
    {
        printf("Perimetro = %.1f\n",a+b+h);
    }
    else 
    {
        printf("Area = %.1f\n",((a+b)/2)*h);
    }
    return 0;
}
