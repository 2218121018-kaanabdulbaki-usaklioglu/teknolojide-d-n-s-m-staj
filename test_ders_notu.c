#include <stdio.h>
#include <assert.h>

void test_not_kontrolu() {
    int not;
    // Test dosyas�na k���k bir de�i�iklik


    // Test 1: Ge�erli bir not, ge�me durumu
    not = 85;
    if (not >= 60) {
        printf("Test 1 ge�ti: Not 85, sonu�: Ge�ti\n");
        assert(1);
    } else {
        printf("Test 1 ba�ar�s�z: Not 85, sonu�: Kald�\n");
        assert(0);
    }

    // Test 2: Ge�erli bir not, kalma durumu
    not = 45;
    if (not >= 60) {
        printf("Test 2 ba�ar�s�z: Not 45, sonu�: Ge�ti\n");
        assert(0);
    } else {
        printf("Test 2 ge�ti: Not 45, sonu�: Kald�\n");
        assert(1);
    }

    // Test 3: Ge�ersiz not
    not = 105;
    if (not > 100 || not < 0) {
        printf("Test 3 ge�ti: Not 105, sonu�: Ge�ersiz\n");
        assert(1);
    } else {
        printf("Test 3 ba�ar�s�z: Not 105, sonu�: Ge�erli\n");
        assert(0);
    }
    // Test 4: Ge�ersiz not
    not = -15;
    if (not > 100 || not < 0) {
        printf("Test 3 ge�ti: Not -15, sonu�: Ge�ersiz\n");
        assert(1);
    } else {
        printf("Test 3 ba�ar�s�z: Not -15, sonu�: Ge�erli\n");
        assert(0);
    }
}

int main() {
    test_not_kontrolu();
    return 0;
}
