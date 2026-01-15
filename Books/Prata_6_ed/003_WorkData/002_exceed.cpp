// Page 95 - выход за пределы
#include <iostream>
#include <climits>
using namespace std;

const short ZERO = 0;

void printInfo(short, unsigned short);

int main() {
    short sam = SHRT_MAX;           // Знаковый тип
    unsigned short sue = sam;       // Беззнаковый тип

    printInfo(sam, sue);

    cout << "Add $1 to each account.\n";

    sam += 1; sue += 1;

    printInfo(sam, sue);
    cout << "Poor Sam!\n";

    sam = ZERO; sue = ZERO;
    printInfo(sam, sue);

    cout << "Take $1 from each account.\n";
    sam -= 1; sue -= 1;

    printInfo(sam, sue);
    cout << "Lucky Sue!\n";

    return 0;
}

// Отображение информации о балансе
void printInfo(short sam, unsigned short sue) {
    cout << "Sam has " << sam << " dollars and Sue has "
        << sue << " dollars deposited.\n";
}

