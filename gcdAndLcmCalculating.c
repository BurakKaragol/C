#include <stdio.h>

int main()
{
    int sayi1, sayi2, ebob, ekok;
    printf("Lutfen en buyuk ortak bolenlerini\n"
                   "veya en kucuk ortak katlarini ogrenmek\n"
                   "iki sayiyi girin:");
    scanf("%d %d", &sayi1, &sayi2);
    ekok= (sayi1 > sayi2) ? sayi1: sayi2;
    for (int i = 1; (i <= sayi1) && (i <= sayi2); ++i)
    {
        if ((sayi1 % i == 0) && (sayi2 % i == 0))
        {
            ebob= i;
        }
    }
    printf("Bu iki sayinin ebob'lari: %d\n", ebob);
    while (1)
    {
        if((ekok % sayi1 == 0) && (ekok % sayi2 == 0))
        {
            printf("Bu iki sayinin ekok'lari: %d\n", ekok);
            break;
        }
        ++ekok;
    }
    if (ebob == 1)
    {
        printf("Bu iki sayi aralarinda asaldir!!!\n");
    }
    return 0;
}
