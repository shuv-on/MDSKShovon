#include<stdio.h>
#include<limits.h>
#include<float.h>
#include<math.h>
int main ()
{
    //int MAX/MIN value
    printf("int's size is : %d\n",CHAR_BIT);
    printf("int's size is : %d\n",CHAR_BIT*sizeof(int));
    printf("int's NAX value is : %d\n",INT_MAX);
    printf("int's MIN value is : %d\n",INT_MIN);
    //float MAX/MIN value
    printf("int's size is : %d\n",CHAR_BIT);
    printf("float's size is : %d\n",CHAR_BIT*sizeof(float));
    printf("float's MAX value is : %f\n",FLT_MAX);
    printf("float's MIN value is : %f\n",FLT_MIN);
    //double MAX/MIN value
    printf("int's size is : %d\n",CHAR_BIT);
    printf("double's size is : %d\n",CHAR_BIT*sizeof(double));
    printf("double's MAX value is : %f\n",DBL_MAX);
    printf("double's MIN value is : %f\n",DBL_MIN);
    //char size
    printf("char's size is : %d\n",CHAR_BIT);
    printf("char's size is : %d\n",CHAR_BIT*sizeof(char));
    printf("char's MAX value is : %d\n",CHAR_MAX);
    printf("char's MIN value is : %d\n",CHAR_MIN);
    return 0;
}
