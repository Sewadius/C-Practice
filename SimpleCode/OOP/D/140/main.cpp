// Защита от повторного включения
#include "bar.h"
#include "foo.h"

int main() {
    bar();
    foo();
    
    return 0;
}
