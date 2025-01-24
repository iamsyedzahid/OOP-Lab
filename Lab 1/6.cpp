#include <iostream>

using namespace std;

int main() {
    int min, max;
    int evenCount = 0;

    cout << "Enter the starting number: ";
    cin >> min;
    cout << "Enter the ending number: ";
    cin >> max;

    for (int i = min; i <= max; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            evenCount++;

            if (evenCount == 5) {
                cout << i + 1 << " ";
                evenCount = 0;
            }
        }
    }

    cout << endl;
    return 0;
}
