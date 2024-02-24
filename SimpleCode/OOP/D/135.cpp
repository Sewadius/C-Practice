// Реализация односвязного списка - часть 3
#include <iostream>
using std::cout;

template <typename T1>
class List {
public:
    List();
    ~List();
    void push_back(T1);
    void pop_front();
    void clear();
    int getSize() const { return size; }
    T1& operator[](const int);
    void push_front(T1);
    void insert(T1, int);
    void removeAt(int);
    void pop_back();
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
    
    list.push_front(5);
    list.push_front(7);

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
    cout << "Вызвался деструктор\n";
    clear();
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
void List<T>::pop_front() {
    Node<T> *temp = head;

    head = head->pNext;
    delete temp;

    --size;
}

template <typename T>
void List<T>::clear() {
    while (size) {
        pop_front();
    }
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

template <typename T>
void List<T>::push_front(T data) {
    head = new Node<T>(data, head); 
    ++size;
}

template <typename T>
void List<T>::insert(T data, int index) {
    if (index == 0) {
        push_front(data);
    } else {

        Node<T> *previous = this->head;

        for (int i = 0; i < index - 1; ++i) {
            previous = previous->pNext;
        }

        Node<T> *newNode = new Node<T>(data, previous->pNext);
        previous->pNext = newNode;
        ++size;
    }
}

template <typename T>
void List<T>::removeAt(int index) {
    if (index == 0) {
        pop_front();
    } else {
        Node<T> *previous = this->head;

        for (int i = 0; i < index - 1; ++i)
            previous = previous->pNext;

        Node<T> *toDelete = previous->pNext;
        previous->pNext = toDelete->pNext;

        delete toDelete;
        --size;
    }
}

template <typename T>
void List<T>::pop_back() {
    removeAt(size - 1);
}
