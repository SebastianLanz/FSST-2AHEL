#include <stdio.h>

int main(void)
{
    int a = 1;
    int raten;
    int ZAHL = 33;
    while (a == 1)
    {
        printf("Errate meine Zahl: ");
        scanf("%d", &raten);
        if (raten == ZAHL)
        {
            printf("Du hast meine Zahl erraten\n");
            a = 0;
        }
        if (raten < ZAHL)
        {
            printf("Zu klein\n");
        }
        if (raten > ZAHL)
        {
            printf("Zu gross\n");
        }
    }
    return 0;
}