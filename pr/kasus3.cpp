#include <cstdio>

short int sum, total;

int main(void) {
    printf("Masukkan nilai sum: ");
    scanf("%hd", &sum);

    printf("Masukkan nilai total: ");
    scanf("%hd", &total);

    if (sum == 10 && total < 20)
    {
        printf("Tidak sesuai!\n");
    } else {
        printf("Sesuai hehehe\n");
    }
    
    return 0;
}