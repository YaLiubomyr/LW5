#pragma once
#include "TTriad.h"

class TDate : public TTriad {
public:
    TDate(int day = 0, int month = 0, int year = 0) : TTriad(day, month, year) {}

    void Print() const;
    bool IsValidTime() const;
};