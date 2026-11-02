#include <stdio.h>
int main() {

    int n;
    
    printf("Enter electricity bill: ");
    scanf("%d", &n);

    if(n<=100)
    {
        printf("%d", n*2);
    }

    else if(n<=200)
    {
        printf("%d", n*3);
    }
    
    else
    {
        printf("%d", n*5);
    }

    return 0;
}