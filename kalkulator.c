#include <stdio.h>
#include <stdlib.h>

float pangkat (float a, float b)
{
    float i, d;
    if (b == 0) 
    {
        return 1;
    }
    else if (b>=1)
    {
        d=1;
        for(i = 0; i < b; ++i)
        {
            d=d*a;
        }
        return d;
    }
}

float main () {
    float  a, b, dx, hasil, *arr, f;
    int orde, i, n;
    printf("KALKULATOR\n");
    printf("Pilih Operasi :\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Perpangkatan\n");
    printf("6. Integral Tentu (Riemann kanan)\n");
    scanf("%d", &n);

    if(n == 1)
    {
        printf("Operasi Penjumlahan\n");
        printf("bilangan pertama\n");
        scanf("%f", &a);
        printf("bilangan kedua\n");
        scanf("%f", &b);
        printf("%f" ,a+b);
        exit(0);
    }

    if(n == 2)
    {
        printf("Operasi Pengurangan\n");
        printf("bilangan pertama\n");
        scanf("%f", &a);
        printf("bilangan kedua\n");
        scanf("%f", &b);
        printf("%f" ,a-b);
        exit(0);
    }
    if(n == 3)
    {
        printf("Operasi Perkalian\n");
        printf("bilangan pertama\n");
        scanf("%f", &a);
        printf("bilangan kedua\n");
        scanf("%f", &b);
        printf("%f" ,a*b);
        exit(0);
    }
    if(n == 4)
    {
        printf("Operasi Pembagian\n");
        printf("bilangan pertama\n");
        scanf("%f", &a);
        printf("bilangan kedua\n");
        scanf("%f", &b);
        printf("%f" ,a/b);
        exit(0);
    }
    if(n == 5)
    {
        printf("Operasi Perpangkatan\n");
        printf("bilangan pertama\n");
        scanf("%f", &a);
        printf("bilangan kedua\n");
        scanf("%f", &b);
        hasil = pangkat(a,b);
        printf("%f" ,hasil);
        exit(0);
    }
    if(n == 6)
    {
        printf("Operasi Integral Tentu\n");
        printf("Integral dari fungsi dengan orde ");
        scanf("%d", &orde);

        arr = (float*) malloc(orde * sizeof(float));

        for (i = 0; i <= orde ; ++i)
        {
            printf("Koefisien orde ke %d", (orde-i));
            printf(" : ");
            scanf("%f", &arr[i]);
        }

        printf("pada selang dari : ");
        scanf("%f", &a);
        printf("hingga : ");
        scanf("%f", &b);
        printf("dengan delta x : ");
        scanf("%f", &dx);

        a = a + dx;
        while (a<=b)
        {
            f=0;
            for(i = 0; i <= orde; ++i)
            {
                f = f + (pangkat(a, (orde-i)) * arr[i]);
                
            }
            hasil = hasil + f * dx;
            a = a + dx;
        }
        
        printf("%f",hasil);
        exit(0);
    }

    return 0;
}