#include <stdio.h>

int main()
{
    int ilkAdim= 1;
    int artisMiktari;
    int adimSayisi;
    int sonuc= 1;
    int i= 1;
    printf("Lutfen hesaplanmasini istediginiz fraktalin artis miktarini giriniz:");
    scanf("%d", &artisMiktari);
    printf("Lutfen kacinci adimi hesaplamak istediginizi belirtiniz:");
    scanf("%d", &adimSayisi);
    printf("%d'nci adim:%d\n", i, sonuc);
    for (i; i < adimSayisi; i++)
    {
        ilkAdim *= artisMiktari;
        sonuc += ilkAdim;
        printf("%d'nci adim:%d\n", i+1, sonuc);
    }
    return 0;
}
