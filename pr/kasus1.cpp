#include <cstdlib>
#include <cstdio>

short int sum;
int main(void) {

    awal:
    printf("Masukkan nilai sum: ");
    scanf("%hu", &sum);

    printf("\n");

    if (sum < 65)
    {
        printf("Maaf, Anda harus mencoba lagi!\n\n");
        goto awal;
    } 
    else if (sum >= 65)
    {
        printf("Selamat Anda tidak harus mengulang!\n\n");
    } else
    {
        printf("Input salah dimasukkan\n\n");
    }
    
    return 0;
}