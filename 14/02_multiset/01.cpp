#include <set>
#include <string>
#include "printer.h"

using namespace std;

int main() {
    set<int> a = {1, 1, 2, 2, 3};
    multiset<int> b = {1, 1, 2, 2, 3};

    cout << "set: " << a << endl;
    cout << "multiset: " << b << endl;
    cout << std::string("1") << endl;

    return 0;
}
