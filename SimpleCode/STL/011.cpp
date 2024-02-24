// Stack, адаптеры контейнеров
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st;
    
    st.push(2);
    st.push(4);
    st.push(3);
    st.emplace(9);

    cout << "Верхний элемент: " << st.top() << endl;

    st.pop();   // Удаление верхнего элемента

    cout << "Верхний элемент после удаления: " << st.top() << '\n';

    // Извлечение элементов из стека
    while (!st.empty()) {
        cout << st.top() << ' ';
        st.pop();
    }

    cout << '\n';
    
    return 0;
}
