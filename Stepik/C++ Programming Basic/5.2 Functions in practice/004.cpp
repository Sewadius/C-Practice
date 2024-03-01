// 4. Functional framework
#include <iostream>
using std::cout;

void print(size_t, size_t);
void print_hor(size_t);
void print_vert(size_t);

int main() {
    size_t width, height;
    cout << "Enter width and height: ";
    std::cin >> width >> height;

    print(width, height);
    
    cout << '\n';
    system("pause");
    return 0;
}

void print(size_t width, size_t height) {
    print_hor(width);

    for (size_t i = 2; i < height; i++)
        print_vert(width);

    print_hor(width);
}

void print_hor(size_t width) {
    for (size_t i = 0; i < width; i++)
        cout << '#';
    cout << '\n';
}

void print_vert(size_t width) {
    for (size_t i = 0; i < width; i++)
        i == 0 || i == width - 1 ? cout << '#' : cout << ' ';
    cout << '\n';
}
