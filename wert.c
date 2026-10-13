#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int raten;
    int ZAHL = rand() % 7 + 1;
    
    for (int i = 0; i < 10; i++ )
    {
        printf("Errate meine Zahl: ");
        scanf("%d", &raten);
        
        if (raten == ZAHL)
        {
            printf("Du hast meine Zahl erraten\n");
            i = 10;
        }
        else if (raten < ZAHL)
        {
            printf("Zu klein\n");
        }
        else if (raten > ZAHL)
        {
            printf("Zu gross\n");
        }
        else 
        {
            printf("Dieser Fall kann nicht passieren %d %d", raten, ZAHL);
        }
    }
    return 0;
}