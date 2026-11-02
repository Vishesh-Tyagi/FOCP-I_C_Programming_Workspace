#include <stdio.h>
int main() {

    int n;
    long long int sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n>0)
    {
        for(int i=1; i<=n; i++)
        {
            sum=sum+(i*i);
        }

        printf("%lld", sum);
    }

    else
    printf("Invalid input");

    return 0;
}