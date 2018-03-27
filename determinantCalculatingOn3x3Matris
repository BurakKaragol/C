#include <stdio.h>

int main()
{
    int satir= 3;
    int matris[3][3];
    for (int i = 0; i < satir; ++i)
    {
        for (int j = 0; j < satir; ++j)
        {
            printf("Lutfen matrisinizin %d,%d elemanini giriniz:", i+1, j+1);
            scanf("%d", &matris[i][j]);
        }
    }
    printf("Matris tanimlama islemi tamamlandi...");
    printf("Tanimlamis oldugunuz matris:\n");
    for (int k = 0; k < satir; ++k)
    {
        for (int l = 0; l < satir; ++l)
        {
            printf("%d\t", matris[k][l]);
        }
        printf("\n");
    }
    int det1, det2, det3, det;
    det1= matris[0][0]*((matris[1][1]*matris[2][2])-(matris[1][2]*matris[2][1]));
    det2= -1*matris[0][1]*((matris[1][0]*matris[2][2])-(matris[1][2]*matris[2][0]));
    det3= matris[0][2]*((matris[1][0]*matris[2][1])-(matris[1][1]*matris[2][0]));
    det= det1 + det2 + det3;

    printf("Bu matrisin determinanti: %d dir...", det);
    return 0;
}
