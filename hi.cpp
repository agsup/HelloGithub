#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

void sayHi(string name) {
    cout << "hi, " + name + "!" << endl;
}
int main() {
    string name;
    cin >> name;
    sayHi(name);
}
