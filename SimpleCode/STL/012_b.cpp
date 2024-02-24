// priority queue, адаптеры контейнеров
#include <iostream>
#include <queue>
using std::priority_queue;
using std::cout;

int main() {
    priority_queue<int> q;

    q.push(10);
    q.emplace(-10);
    q.emplace(-782);
    q.push(55);

    // Сортировка от большего к меньшему
    while (!q.empty()) {
        cout << q.top() << ' ';
        q.pop();
    }

    cout << '\n';
    
    return 0;
}
