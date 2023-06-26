#include "TTime.h"
#include <iostream>
#include <iomanip>

void TTime::Print() const {
    std::cout << "Time: " << std::setw(2) << std::setfill('0') << GetFirst() << ":"
        << std::setw(2) << std::setfill('0') << GetSecond() << ":"
        << std::setw(2) << std::setfill('0') << GetThird() << std::endl;
}

void TTime::Increase(int value) {
    SetSecond(GetSecond() + value);
    if (GetSecond() >= 60) {
        SetFirst(GetFirst() + GetSecond() / 60);
        SetSecond(GetSecond() % 60);
    }
}
