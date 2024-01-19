#include <iostream>
#include <iomanip>
using namespace std;

bool isLeapYear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

void printCalendar(int year)
{
    for (int month = 1; month <= 12; ++month)
    {
        cout << "\n\n" << setw(24) << setfill('-') << "\n";
        cout << setw(11) << setfill(' ') << left << "| " << right << year << " - " << setw(2) << setfill('0') << month << " |\n";
        cout << setw(24) << std::setfill('-')<< "\n";
        cout << "| Sun | Mon | Tue | Wed | Thu | Fri | Sat |\n";
        cout << setw(24) << setfill('-') << "\n";
    }
}

int main()
{
    int year;
    cout << "Enter the year for the calendar: ";
    cin >> year;

    printCalendar(year);

    return 0;
}
