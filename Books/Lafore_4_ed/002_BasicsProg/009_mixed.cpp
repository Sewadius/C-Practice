// Page 75 - использование смешанных выражений
#include <iostream>
using namespace std;

int main() {
    int count = 7;
    float avgWeight = 155.5F;
    double totalWeight = count * avgWeight;

    // "Вес равен 1088.5"
    cout << "Вес равен " << totalWeight << endl;

    return 0;
}

