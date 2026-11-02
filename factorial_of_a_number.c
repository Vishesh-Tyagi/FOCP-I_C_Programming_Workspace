#include <stdio.h>
int main() {

    int n;
    long long int factorial=1;

    printf("Enter a nubmer: ");
    scanf("%d", &n);

    if(n>=0)
    {
        for(int i=1; i<=n; i++)
        {
            factorial=factorial*i;
        }

        printf("%lld", factorial);
    }

    else
        printf("Invalid input");

    return 0;
}