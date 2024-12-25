#include <stdio.h>
#include <assert.h>

void test_not_kontrolu() {
    int not;
    // Test dosyasýna küçük bir deðiþiklik


    // Test 1: Geçerli bir not, geçme durumu
    not = 85;
    if (not >= 60) {
        printf("Test 1 geçti: Not 85, sonuç: Geçti\n");
        assert(1);
    } else {
        printf("Test 1 baþarýsýz: Not 85, sonuç: Kaldý\n");
        assert(0);
    }

    // Test 2: Geçerli bir not, kalma durumu
    not = 45;
    if (not >= 60) {
        printf("Test 2 baþarýsýz: Not 45, sonuç: Geçti\n");
        assert(0);
    } else {
        printf("Test 2 geçti: Not 45, sonuç: Kaldý\n");
        assert(1);
    }

    // Test 3: Geçersiz not
    not = 105;
    if (not > 100 || not < 0) {
        printf("Test 3 geçti: Not 105, sonuç: Geçersiz\n");
        assert(1);
    } else {
        printf("Test 3 baþarýsýz: Not 105, sonuç: Geçerli\n");
        assert(0);
    }
}

int main() {
    test_not_kontrolu();
    return 0;
}
