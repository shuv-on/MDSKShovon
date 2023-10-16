#include<stdio.h>
int main ()
{
int N;
scanf("%d",&N);
printf("%d\",N);
int note100;
note100=N/100;
printf("%d nota(s) de R$ 100,00\",note100);
int rem1;
rem1=N%100;
int note50;
note50=rem1/50;
printf("%d nota(s) de R$ 50,00\",note50);
int rem2;
rem2=rem1%50;
int note20;
note20=rem2/20;
printf("%d nota(s) de R$ 20,00\",note20);
int rem3;
rem3=rem2%20;
int note10;
note10=rem3/10;
printf("%d nota(s) de R$ 10,00\",note10);
int rem4;
rem4=rem3%10;
int note5;
note5=rem4/5;
printf("%d nota(s) de R$ 5,00\",note5);
int rem5;
rem5=rem4%5;
int note2;
note2=rem5/2;
printf("%d nota(s) de R$ 2,00\",note2);
int rem6;
rem6=rem5%2;
int note1;
note1=rem6/1;
printf("%d nota(s) de R$ 1,00\",note1);
return 0;
}
