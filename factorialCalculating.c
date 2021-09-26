#include <stdio.h>

int main() {
    float a;
    printf("Girilen sayilarin karelerini bulma programi.\n");
    printf("Programdan cikmak için 0 girmeniz yeterlidir.\n");

    do {
        printf("Bir sayi giriniz:\n");
        scanf("%f", &a);
        if (a == 0)
            break;
        printf("Sayinin karesi:%0.2f \n\n", (a*a));
    } while (a != 0);
    return 0;
}
