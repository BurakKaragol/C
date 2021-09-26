#include <stdio.h>

int main()
{
    int girdi;
    printf("Lutfen fibonacci dizisi icin bir ust sinir belirleyiniz:");
    scanf("%d", &girdi);
    printf("Fibonacci dizisi olusturuluyor...\n");
    int ilkDeger= 1;
    int araDeger= 1;
    int sonDeger= 2;
    printf("%d\t%d\t", ilkDeger, araDeger);
    while(sonDeger < girdi)
    {
        printf("%d\t", sonDeger);
        ilkDeger= araDeger;
        araDeger= sonDeger;
        sonDeger= ilkDeger + araDeger;
    }
}
