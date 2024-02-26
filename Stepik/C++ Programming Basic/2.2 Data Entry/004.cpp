// 4. Why you get an "F"
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;

const int TOTAL_MARKS = 3;

int main() {
    float mark;
    vector<float> marks;

    cout << "Enter three marks in one line: ";

    for (int i = 0; i < TOTAL_MARKS; i++) {
        cin >> mark;
        marks.push_back(mark);
    }

    float totalSum = 0;
    for (const auto& m : marks) totalSum += m;

    cout << "Your mark - " << totalSum / marks.size() << "\n\n";

    system("pause");
    return 0;
}
