// queue, priority queue, адаптеры контейнеров
#include <iostream>
#include <queue>
using std::queue;
using std::cout;

int main() {
    queue<int> q;
    
    q.push(56);
    q.push(4);
    q.push(7);
    q.push(99);

    cout << "Поледний элемент очереди: " << q.back() << '\n';
    cout << "Первый элемент в очереди: " << q.front() << '\n';

    // Извлечение всех элементов
    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }

    cout << "\nКоличество элементов: " << q.size() << '\n';
    
    return 0;
}
