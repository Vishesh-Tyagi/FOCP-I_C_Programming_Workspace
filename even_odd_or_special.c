#include <stdio.h>
int main(){
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n%5==0 && n%2==0)
    {
        printf("Special");
    }

    else if(n%5==0)
    {
        printf("Five");
    }

    else if(n%2==0)
    {
        printf("even");
    }

    else
    {
        printf("Odd/Other");
    }

    return 0;
}