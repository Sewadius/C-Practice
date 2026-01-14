// Page 95 - выход за пределы
#include <iostream>
#include <climits>
using namespace std;

#define ZERO 0

int main() {
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars and Sue has "
        << sue << " dollars deposited.\n";

    cout << "Add $1 to each account.\n";

    sam += 1; sue += 1;

    cout << "Now Sam has " << sam << " dollars and Sue has "
        << sue << " dollars deposited. \nPoor Sam!\n";

    return 0;
}

