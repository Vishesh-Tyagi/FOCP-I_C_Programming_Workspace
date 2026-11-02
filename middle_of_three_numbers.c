#include <stdio.h>
int main() {
    int a,b,c;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter another number: ");
    scanf("%d", &b);

    printf("Enter one last number: ");
    scanf("%d", &c);

    if(a>b && a>c)
    {
        if(b>c)
        {
            printf("%d", b);
        }

        else
        {
            printf("%d", c);
        }
    }

    else if(b>a && b>c)
    {
        if(a>c)
        {
            printf("%d", a);
        }

        else
        {
            printf("%d", c);
        }
    }

    else if(a>b)
    {
        printf("%d", a);
    }

    else
    {
        printf("%d", b);
    }
    
    return 0;
}