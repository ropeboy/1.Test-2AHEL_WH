#include <stdio.h>

int strlenght(char* bin) {      // das zählt nach wie viele Stellen die bin Zahl hat
    int i = 0;
    int n = 0;
    for (; bin[i] != '\0'; i++);
    return n;
}


int power(int base, int exp) {      //das ist die Potenzenfunk.
    int i = 1;
    for (; i != exp; i++) {
        base = base * base;
    }
    return base;
}

int main(int argc, char* argv) {
    if(argc != 2) {
        printf("usage: bin <binary number\n");      //hier gibt man aus welche Zahlen man benutzen darf
        return -1;
    }

    return 0;
}