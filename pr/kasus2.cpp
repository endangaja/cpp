#include <cstdio>
#include <cstdlib>

short int tebak, total;

int main(void) {
    
    awal:
    printf("Masukkan nilai total: ");
    scanf("%hu", &total);
    printf("Masukkan nilai tebak: ");
    scanf("%hu", & tebak);
    printf("\n");

    if (total == tebak) {
        printf("Nilai variabel total adalah %hu\n\n", total);
    } else if (total != tebak) {
        printf("Nilai dari variabel tebak adalah %hu\n\n", tebak);
    } else {
        printf("Input yang dimasukkan salah\n\n");
    }
    
    return 0;
}