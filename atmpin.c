#include <stdio.h>

int main()
{
    int a = 7599;   
    int b;
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Enter your ATM pin: ");
        scanf("%d", &b);

        if(a == b)
        {
            printf("Access granted. Your pin is correct.\n");
            return 0;
        }
        else
        {
            printf("Incorrect pin. Attempts left: %d\n", 2 - i);
        }
    }

    printf("Card is blocked. You've entered three incorrect pins.\n");

    return 0;
}