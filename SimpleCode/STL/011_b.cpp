// Stack, использование контейнеров
#include <iostream>
#include <stack>
#include <list>
using std::stack;
using std::list;

int main() {
    stack<int, list<int>> st;

    st.emplace(9);

    std::cout << "Верхний элемент: " << st.top() << '\n';
    
    return 0;
}
