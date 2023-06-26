#include "TTriad.h"
#include <iostream>
#include <iomanip>

void TTriad::Print() const {
    std::cout << "Triad: " << GetFirst() << ", " << GetSecond() << ", " << GetThird() << std::endl;
}

int TTriad::GetFirst() const {
    return first;
}

int TTriad::GetSecond() const {
    return second;
}

int TTriad::GetThird() const {
    return third;
}

void TTriad::SetFirst(int value) {
    first = value;
}

void TTriad::SetSecond(int value) {
    second = value;
}

void TTriad::SetThird(int value) {
    third = value;
}

void TTriad::Decrease(int value) {
    third -= value;
    if (third < 0) {
        second -= 1;
        third += 30;
    }
    if (second < 0) {
        first -= 1;
        second += 12;
    }
}
