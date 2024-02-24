// Многопоточность, потоки, thread
#include <iostream>
#include <thread>
#include <chrono>
using std::cout;
using std::this_thread::get_id;

int main() {
    cout << "Идентификатор потока: " << get_id() << '\n';
    
    return 0;
}
