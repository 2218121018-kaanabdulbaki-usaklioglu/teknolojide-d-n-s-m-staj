#include <stdio.h>

int main() {
    int not; // Kullan�c�n�n notunu tutacak de�i�ken

    // Kullan�c�dan not giri�i al�yoruz
    printf("Notunuzu girin (0-100): ");
    scanf("%d", &not);

    // Notun ge�erli bir aral�kta olup olmad���n� kontrol ediyoruz
    if (not < 0 || not > 100) {
        printf("Ge�ersiz bir not girdiniz. L�tfen 0 ile 100 aras�nda bir de�er girin.\n");
    }
    else {
        // Ge�me ve kalma durumunu kontrol ediyoruz
        if (not >= 60) {
            printf("Tebrikler, dersten ge�tiniz!\n");
        }
        else {
            printf("Maalesef, dersten kald�n�z.\n");
        }
    }

    return 0;
}
