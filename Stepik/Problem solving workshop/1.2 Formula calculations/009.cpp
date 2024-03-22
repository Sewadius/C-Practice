#include <iostream>
using std::cout;

class Auto {
    public:
        Auto(size_t, size_t, size_t);
        int getTimeMinutes() const;
    private:
        size_t _v1, _v2, _s;
};

Auto::Auto(size_t v1, size_t v2, size_t s) {
    this->_v1 = v1;
    this->_v2 = v2;
    this->_s = s;
}

int Auto::getTimeMinutes() const {
    return this->_s / (this->_v1 + this->_v2) * 60;
}

int main() {
    size_t v1, v2, s;
    std::cin >> v1 >> v2 >> s;

    Auto auto_ = Auto(v1, v2, s);
    int minutes = auto_.getTimeMinutes();
    cout << minutes << '\n';

    cout << "Через " << minutes / 60 << " часов, " << minutes % 60 << " минут";
    return 0;
}
