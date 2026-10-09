#include <stdio.h>

int main(void)
{
    int raten;
    int ZAHL = 33;
    
    for (int i = 0; i < 10; i++ )
    {
        printf("Errate meine Zahl: ");
        scanf("%d", &raten);
        if (raten == ZAHL)
        {
            printf("Du hast meine Zahl erraten\n");
            i = 10;
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