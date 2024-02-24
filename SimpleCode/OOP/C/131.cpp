// auto_ptr, unique_ptr, shared_ptr - умные указатели
#include <iostream>
#include <memory>
using std::auto_ptr;
using std::unique_ptr;
using std::shared_ptr;
using std::cout;

int main() {
    auto_ptr<int> ap1(new int(5));  // Deprecated!
    auto_ptr<int> ap2(ap1);         // Deprecated!

    unique_ptr<int> up1(new int(5));
    unique_ptr<int> up2;

    up2 = std::move(up1);     // Смена владельца
    cout << *up2 << '\n';

    up1.swap(up2);
    cout << *up1 << '\n';

    int *ptr = up1.get();
    cout << ptr << '\n';  

    shared_ptr<int> sp1(new int(5));
    shared_ptr<int> sp2(sp1);  

    return 0;
}
