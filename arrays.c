#include <stdio.h>
int main()
{
    int a[5];
    int sum=0;
    int len=sizeof(a)/sizeof(int);

    for(int i=0; i<len; i++)
    {
        printf("Enter marks of %dth student: ", i+1);
        scanf("%d", &a[i]);

        sum+=a[i];
    }

    printf("\nsum= %d", sum);
    printf("\nAverage= %d", sum/len);

    for(int i=len-1; i>=0; i--) 
    {
        printf("\n%d", a[i]);
    }

    return 0;
}