#include <stdio.h>

int main()
{
    int a[10];
    int len=sizeof(a)/sizeof(int);
    int fifty=0;
    int zero=0;

    for(int i=0; i<len; i++)
    {
        printf("Enter marks of %dth student: ", i+1);
        scanf("%d", &a[i]);

        if(a[i]>=50)
        {
            fifty++;
        }
        else if(a[i]==0)
        {
            zero++;
        }
    }

    printf("\n%d students scored more than or equal to 50", fifty);
    printf("\n%d students scored 0 marks", zero);

    return 0;
}