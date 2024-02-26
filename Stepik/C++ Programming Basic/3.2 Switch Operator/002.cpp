// 2. Seasons
#include <iostream>
#include <string>
using std::cout;
using std::string;

const string SEASONS[] = {
    "winter", "spring", "summer", "autumn"
};

int main() {
    int month;
    string result = "This is ";

    cout << "Enter the month's number: ";
    std::cin >> month;

    switch (month) {
        case 12: case 1: case 2:
            result += SEASONS[0]; break;
        case 3: case 4: case 5:
            result += SEASONS[1]; break;
        case 6: case 7: case 8:
            result += SEASONS[2]; break;
        case 9: case 10: case 11:
            result += SEASONS[3]; break;
        default:
            result = "No such month";
    }

    cout << result << "\n\n";
    system("pause");
    return 0;
}
