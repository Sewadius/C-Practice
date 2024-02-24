// Map, multimap, ассоциативные контейнеры
#include <iostream>
#include <map>
using std::string;
using std::map;
using std::pair;
using std::cout;

int main() {
    pair<int, string> p(1, "телефон");

    cout << p.first << '\n';
    cout << p.second << '\n';

    map<int, string> myMap;

    myMap.insert(std::make_pair(1, "телефон"));
    myMap.insert(pair<int, string>(2, "ноутбук"));

    myMap.emplace(3, "монитор");

    auto it = myMap.find(3);

    // Элемент найден
    if (it != myMap.end())
        cout << "Элемент под ключом 3: " << it->second << '\n';

    cout << myMap[1] << '\n';

    myMap.erase(1); // Удаление по ключу
    
    return 0;
}
