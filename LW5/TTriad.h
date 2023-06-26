#pragma once
class TTriad {
protected:
    int first;
    int second;
    int third;

public:
    TTriad(int a = 0, int b = 0, int c = 0) : first(a), second(b), third(c) {}

    void Decrease(int value);
    void Print() const;

    int GetFirst() const;
    int GetSecond() const;
    int GetThird() const;

    void SetFirst(int value);
    void SetSecond(int value);
    void SetThird(int value);
};