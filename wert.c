#include <stdio.h>

int main(void)
{
    printf("S1 ist : ");
    int s1;
    scanf("%d", &s1);
    
    printf("S2 ist : ");
    int s2;
    scanf("%d", &s2);

    printf("S3 ist : ");
    int s3;
    scanf("%d", &s3);
     
    if ((s1 || s2) && s3 == 1)
    {
        printf("Strom");
    }    
    else 
    {
        printf("kein Strom");
    }

    return 0;
}