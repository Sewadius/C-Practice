// Notes
#include <iostream>
using std::cout;
using std::cin;

constexpr const char* NOTES[7] = {
    "do", "re", "mi", "fa", "sol", "la", "si"
};

int main() {
    size_t note;

    cout << "Enter the number for note (1 - 7): ";
    cin >> note;

    cout << "The note is: " << NOTES[note - 1] << "\n\n";
    
    system("pause");
    return 0;
}
