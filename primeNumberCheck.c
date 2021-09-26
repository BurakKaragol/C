#include <stdio.h>

int main()
{
    int n, i, bayrak= 0;
    printf("Lutfen pozitif bir tamsayi giriniz:");
    scanf("%d", &n);
        for(i= 2; i <= n/2; ++i)
        {
            //asal olmama sarti
            if(n % i == 0)
            {
                bayrak= 1;
                break;
            }
        }
        if(n == 1)
            printf("%d sayisi asal degildir.", n);
        else if(bayrak == 0)
            printf("%d sayisi asaldir.", n);
        else
            printf("%d sayisi asal degildir.", n);
    return 0;
}
