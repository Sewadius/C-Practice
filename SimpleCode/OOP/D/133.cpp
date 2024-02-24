// Реализация односвязного списка
#include <iostream>
using std::cout;

template <typename T1>
class List {
public:
    List();
    ~List();
    void push_back(T1);
    int getSize() const { return size; }
    T1& operator[](const int);
private:
    template <typename T>
    class Node {
    public:
        Node *pNext;
        T data;
        
        Node (T data = T(), Node *pNext = nullptr) {
            this->data = data;
            this->pNext = pNext;
        }
    };

    int size;
    Node<T1> *head;
};

int main() {
    List<int> list;

    list.push_back(5);
    list.push_back(10);
    list.push_back(22);

    cout << "Третий элемент: " << list[2] << '\n';

    cout << "Размер списка: " << list.getSize() << '\n';

    cout << "Все элементы списка: ";

    for (int i = 0; i < list.getSize(); ++i)
        cout << list[i] << ' ';

    cout << '\n';
    
    return 0;
}

template <typename T>
List<T>::List() {
    size = 0;
    head = nullptr;
}

template <typename T>
List<T>::~List() {

}

template <typename T>
void List<T>::push_back(T data) {
    if (head == nullptr) {          // Пустой список
        head = new Node<T>(data);
    
    } else {                        // Есть элементы
        Node<T> *current = this->head;

        // Поиск последнего элемента
        while (current -> pNext != nullptr) {
            current = current->pNext;
        }

        current->pNext = new Node<T>(data);
    }

    ++size;                         // Увеличение размера списка
}

template <typename T>
T& List<T>::operator[](const int index) {
    int counter = 0;

    Node<T> *current = this->head;
    while (current != nullptr) {
        if (counter == index)
            return current->data;
        
        current = current->pNext;
        ++counter;
    } 

    return head->data; 
}
