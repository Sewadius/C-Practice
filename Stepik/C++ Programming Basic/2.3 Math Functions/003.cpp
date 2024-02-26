// 3. Monitors
#include <iostream>
using std::cout;
using std::cin;

const char* 
    TEXT = "This monitor has a side ";

int main() {
    int pixels;
    cout << "Enter the number of pixels: ";
    cin >> pixels;

    for (int i = 1; i < pixels; i++)
        if (i * i == pixels) {
            cout << TEXT << i << " pixels\n\n";
            break;
        }

    system("pause");
    return 0;
}
