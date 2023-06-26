#pragma once
#include "TTriad.h"

class TTime : public TTriad {
public:
    TTime(int hours = 0, int minutes = 0, int seconds = 0) : TTriad(hours, minutes, seconds) {}

    void Print() const;
    void Increase(int value);
};