#include <stdio.h>

int main() {
    int not; // Kullanýcýnýn notunu tutacak deðiþken

    // Kullanýcýdan not giriþi alýyoruz
    printf("Notunuzu girin (0-100): ");
    scanf("%d", &not);

    // Notun geçerli bir aralýkta olup olmadýðýný kontrol ediyoruz
    if (not < 0 || not > 100) {
        printf("Geçersiz bir not girdiniz. Lütfen 0 ile 100 arasýnda bir deðer girin.\n");
    }
    else {
        // Geçme ve kalma durumunu kontrol ediyoruz
        if (not >= 60) {
            printf("Tebrikler, dersten geçtiniz!\n");
        }
        else {
            printf("Maalesef, dersten kaldýnýz.\n");
        }
    }

    return 0;
}
