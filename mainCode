#include <stdio.h>
int toplama(int, int);
int cikartma(int, int);
int carpma(int, int);
float bolme(float, float);
int modAlma(int, int);

int main()
{
    int sayi1, sayi2;
    printf("Lutfen uzerinde islem yapilmasini istediginiz iki \ntamsayiyi aralarinda bosluk olacak sekilde giriniz\n");
    scanf("%d %d", &sayi1, &sayi2);
    printf("Girdiginiz sayilar: %d ve %d\n", sayi1, sayi2);
    int toplam= toplama(sayi1, sayi2);
    int cikart= cikartma(sayi1, sayi2);
    int carp= carpma(sayi1, sayi2);
    float bol= bolme((float)sayi1, (float)sayi2);
    int modAl= modAlma(sayi1, sayi2);
    printf("Bu iki sayinin toplamlari      : %d\n", toplam);
    printf("Bu iki sayinin farklari        : %d\n", cikart);
    printf("Bu iki sayinin carpimlari      : %d\n", carp);
    printf("Bu iki sayinin oranlari        : %f\n", bol);
    printf("Bu iki sayinin bolumunden kalan: %d\n", modAl);
}

int toplama(int a, int b)
{
    int cevap= a + b;
    return cevap;
}

int cikartma(int a, int b)
{
    int cevap= a - b;
    return cevap;
}

int carpma(int a, int b)
{
    int cevap= a * b;
    return cevap;
}

float bolme(float a, float b)
{
    float cevap= a / b;
    return cevap;
}

int modAlma(int a, int b)
{
    int cevap= a % b;
    return cevap;
}
