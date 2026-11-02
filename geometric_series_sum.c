#include <stdio.h>
int main() {
    int a, r, n;

    printf("Enter first term: ");
    scanf("%d", &a);

    printf("Enter common ratio: ");
    scanf("%d", &r);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    long long int sum=a, term=a*r;

    for(int i=1; i<n; i++)
    {
       sum=sum+term;
       term=term*r;
    }
    
    printf("%lld", sum);

    return 0;
}