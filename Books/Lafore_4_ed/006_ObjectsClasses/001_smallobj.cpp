// Page 217 - простой небольшой объект
#include <iostream>
using namespace std;

class SmallObj {
public:
    void setdata(int d) 
        { _somedata = d; }

    void showdata() const 
        { cout << "Значение поля равно " << _somedata << endl; }

private:
    int _somedata;
};

int main() {
    SmallObj obj1, obj2;
    obj1.setdata(1066);
    obj2.setdata(1776);

    obj1.showdata();
    obj2.showdata();

    return 0;
}

