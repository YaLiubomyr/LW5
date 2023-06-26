#include "TDate.h"
#include "TTime.h"
#include <iostream>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int n, m;
    std::cout << "Enter the number of dates: ";
    std::cin >> n;
    std::cout << "Enter the number of times: ";
    std::cin >> m;

    TDate* dates = new TDate[n];
    TTime* times = new TTime[m];

    // Generate random dates
    for (int i = 0; i < n; i++) {
        int day = std::rand() % 31 + 1;
        int month = std::rand() % 12 + 1;
        int year = std::rand() % 100;
        dates[i] = TDate(day, month, year);
    }

    // Generate random times
    for (int i = 0; i < m; i++) {
        int hours = std::rand() % 24;
        int minutes = std::rand() % 60;
        int seconds = std::rand() % 60;
        times[i] = TTime(hours, minutes, seconds);
    }

    std::cout << std::endl << "Randomly generated dates:" << std::endl;
    for (int i = 0; i < n; i++) {
        dates[i].Print();
    }

    std::cout << std::endl << "Randomly generated times:" << std::endl;
    for (int i = 0; i < m; i++) {
        times[i].Print();
    }

    std::cout << std::endl << "Dates that can be interpreted as valid times:" << std::endl;
    bool hasValidDates = false;
    for (int i = 0; i < n; i++) {
        if (dates[i].IsValidTime()) {
            dates[i].Print();
            hasValidDates = true;
        }
    }
    if (!hasValidDates) {
        std::cout << "No dates that can be interpreted as valid times." << std::endl;
    }

    std::cout << std::endl << "Modified dates (decreased by 5 days):" << std::endl;
    bool hasModifiedDates = false;
    for (int i = 0; i < n; i++) {
        if (!dates[i].IsValidTime()) {
            dates[i].Decrease(5);
            dates[i].Print();
            hasModifiedDates = true;
        }
    }
    if (!hasModifiedDates) {
        std::cout << "No modified dates." << std::endl;
    }

    std::cout << std::endl << "Modified times (increased by 15 minutes):" << std::endl;
    for (int i = 0; i < m; i++) {
        times[i].Increase(15);
        times[i].Print();
    }

    delete[] dates;
    delete[] times;

    return 0;
}
