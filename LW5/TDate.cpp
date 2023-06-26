#include "TDate.h"
#include <iostream>
#include <iomanip>

void TDate::Print() const {
    std::cout << "Date: " << std::setw(2) << std::setfill('0') << GetFirst() << "."
        << std::setw(2) << std::setfill('0') << GetSecond() << "."
        << std::setw(2) << std::setfill('0') << GetThird() << std::endl;
}

bool TDate::IsValidTime() const {
    return (GetFirst() < 24 && GetSecond() < 60 && GetThird() < 60);
}
