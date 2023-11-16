#include<stdio.h>
int main ()
{
    float salary;
    scanf("%f",&salary);
    if (salary<=400)
    {
    printf("Novo salario: %.2f\n",(salary+salary*.15));
    printf("Reajuste ganho: %.2f\n",(salary+salary*.15)-salary);
    printf("Em percentual: 15 %\n");
    }
    else if (salary>400&&salary<=800)
    {
    printf("Novo salario: %.2f\n",(salary+salary*.12));
    printf("Reajuste ganho: %.2f\n",(salary+salary*.12)-salary);
    printf("Em percentual: 12 %\n");
    }
    else if (salary>800&&salary<=1200)
    {
    printf("Novo salario: %.2f\n",(salary+salary*.10));
    printf("Reajuste ganho: %.2f\n",(salary+salary*.10)-salary);
    printf("Em percentual: 10 %\n");
    }
    else if (salary>1200&&salary<=2000)
    {
    printf("Novo salario: %.2f\n",(salary+salary*.07));
    printf("Reajuste ganho: %.2f\n",(salary+salary*.07)-salary);
    printf("Em percentual: 7 %\n");
    }
    else if (salary>2000)
    {
    printf("Novo salario: %.2f\n",(salary+salary*.04));
    printf("Reajuste ganho: %.2f\n",(salary+salary*.04)-salary);
    printf("Em percentual: 4 %\n");
    }
    return 0;
}
