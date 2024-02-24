// 1791. Find Center of Star Graph
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

class Solution {
public:
    int findCenter(vector<vector<int>>&);
};

int main() {
    Solution solution;
    int edges, first, second;
    vector<vector <int>> node;

    cout << "Введите количество узлов: ";
    std::cin >> edges;

    while (edges--) {
        cout << "Введите элемент через пробел: ";
        std::cin >> first >> second;
        node.push_back({first, second});
    }

    cout << "Итоговый граф: [ ";

    for (const auto& vec : node) {
        cout << '[' << vec[0] << ',' << vec[1] << "] ";
    }

    cout << "]\n";

    cout << "Результат: " << solution.findCenter(node) << '\n';
    
    return 0;
}

int Solution::findCenter(vector<vector<int>> &edges) {
    return (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1] ? 
        edges[0][0] : edges[0][1]);
}
