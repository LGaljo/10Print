#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randChar() {
    int m = rand()%2;

    if (m) {
        return 92;
    } else {
        return 47;
    }
}

int main() {
    time_t t;

    srand((unsigned) time(&t));

    for (int i = 0; i < 40; i++) {
        for (int j = 0; j < 100; j++) {
            printf("%c", randChar());
        }
        printf("\n");
    }

    system("pause");
    
    return 0;
}
