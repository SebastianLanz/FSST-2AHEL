#include <stdio.h>

int pace(int dis, int time)
{
    return time/dis;
}

int dur(int route, int pace1)
{
    return route*pace1;
}

int main()
{
    printf("for pace-calculation press 1 or for duration-calculation press 2\n");
    int erg;
    scanf("%d", &erg);

    if (erg == 1)
    {
        printf("Enter your distance(km)\n");
        int dis;
        scanf("%d", &dis);
        printf("Enter your time(min)\n");
        int time;
        scanf("%d", &time);
        printf("Your pace is %d min/km", pace(dis, time));
    }

    else if (erg == 2)
    {
        printf("Enter your route(km)\n");
        int route;
        scanf("%d", &route);
        printf("Enter your pace(min/km)\n");
        int pace1;
        scanf("%d", &pace1);
        printf("The duration is %d min", dur(route, pace1));
    }

    else
    {
        printf("Usage: for pace-calculation press 1 or for duration-calculation press 2");
        return -1;
    }

    return 0;
}