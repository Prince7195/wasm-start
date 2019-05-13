#include <stdio.h>
#include <string.h>

int main() {
    printf("WASM Ready\n");
    return 1;
}

int getNum() {
    return 22;
}

int getDoubleNum(int x) {
    return x*2;
}

char * greet() {
    return "Hello";
}

char * greetings(char * name) {
    char * greeting = "Hello ";
    strcat(greeting, name);
    return greeting;
}