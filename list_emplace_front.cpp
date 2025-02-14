#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> ls = {5, 2, 4};

    ls.emplace_front();  // Default-initialized int will be inserted (0)

    for (int num : ls) {
        cout << num << " ";
    }

    return 0;
}
