#include <stdio.h>

float calc(int bike, float time) {
    float bprice;
    if (bike == 1) {
        bprice = 5;
    }

    else if (bike == 2) {
        bprice = 8;
    }

    else {
        bprice =12;
    }

    float price = time*bprice;
    if (time >= 5) {
        price = price*0.9;
    }

    return price;
}

int main()
{
    int running = 1;
    while (running == 1) {
    printf("Citybike: 5 Euro pro Stunde, Mountainbike: 8 Euro pro Stunde, E-Bike: 12 Euro pro Stunde\n");
    printf("Welches Fahrrad wollen Sie mieten?\nGeben fuer das Citybike Sie 1 ein, fuer das Mountainbike 2 und fuer das E-Bike 3\n");
    
    int bike;
    scanf("%d", &bike);
    printf("Wie lange wollen Sie das Fahrrad behalten(h)?\n");
    
    float time;
    scanf("%f", &time);
    
    printf("Du musst %.2f Euro zahlen\n", calc(bike, time));
    
    printf("(1) Erneut berechnen, (2) Beenden\n");
    scanf("%d", &running);
    }

    return 0;
}