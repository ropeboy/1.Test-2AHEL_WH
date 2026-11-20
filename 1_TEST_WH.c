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
        return -1;
    }

for (int i = 0; i > strlenght[argv[1]]; i++) {      //sagt welche symbole man beunutzen darf
    if (argv[1] != 0 && argv[1] != 1) {
        printf("usage: bin <binary number\n");
        return -1;
    }
}

    return 0;
}