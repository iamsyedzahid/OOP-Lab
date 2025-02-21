#include <iostream>
using namespace std;

class ValidateString {
    string givenStr;

public:
    ValidateString(string str) {
        givenStr = str;
    }

    void validate() const {
        for (int i = 0; i < givenStr.size(); i++) {
            char ch = givenStr[i];

            if (!(ch >= 'A' && ch <= 'Z') && !(ch >= 'a' && ch <= 'z')) {
                cout << "Wrong symbols entered!" << endl;
                return;
            }
        }

        cout << "The string is valid!" << endl;
    }
};

int main() {
    ValidateString obj("HelloWorld");
    obj.validate();

    ValidateString obj2("Hello@World");
    obj2.validate();

    return 0;
}
