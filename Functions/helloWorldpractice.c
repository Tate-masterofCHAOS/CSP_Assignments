#include <stdio.h>

void hello(const char* name) {
    printf("hello%s\n", name);
}

int main() {
    hello(" maria");
    hello(" jonathan");
    hello(" bob the naked mole rat");
    hello(" jared");
    hello(" bread bro");
    return 0;
}
