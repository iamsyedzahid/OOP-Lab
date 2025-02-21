#include <iostream>
using namespace std;

class DayOfYear {
    int day;

public:
    DayOfYear(int dayNum) {
        day = dayNum;
    }

    void print() {
        string months[] = { "January", "February", "March", "April", "May", "June", 
                             "July", "August", "September", "October", "November", "December" };
        int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        int month = 0;
        while (day > daysInMonth[month]) {
            day -= daysInMonth[month];
            month++;
        }

        cout << months[month] << " " << day << endl;
    }
};

int main() {
    DayOfYear date1(2);
    date1.print();

    DayOfYear date2(365);
    date2.print();

    return 0;
}
