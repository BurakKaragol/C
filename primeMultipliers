#include <stdio.h>

int main()
{
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    printf("%d sayisinin asal carpanlari:\n", sayi);
    for(int i= 2; sayi > 1; i++)
    {
        while(sayi%i==0)
        {
            printf("%d ", i);
            sayi /= i;
        }
    }
    return 0;
}
