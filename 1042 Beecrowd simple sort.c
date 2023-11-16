#include<stdio.h>
int main ()
{
    int i,j,k,temp;
    int ar[3],sortar[3];
    
    for (i=0; i<3; i++) {
        scanf("%d",&ar[i]);
        sortar[i]=ar[i];
    }
    

    for (i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            if (ar[j]>ar[j+1]) {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    for (i=0; i<3; i++) {
        printf("%d\n",ar[i]);
    }
    printf("\n");
    for (i=0;i<3;i++)
    {
        printf("%d\n",sortar[i]);
    }
    return 0;

}
