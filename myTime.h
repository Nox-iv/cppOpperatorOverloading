#pragma once
#include <iostream>
using namespace std;
class myTime
{
  private:
    int hours, minutes, seconds;
    const int getTotalSeconds() const;

  public:
    myTime();
    myTime(int h, int m, int s);
    myTime(int s);
    ~myTime();

    void setTime(int h, int m, int s);
    myTime &operator=(const myTime &rhs);
    const myTime operator+(const int s) const;
    const myTime operator+(const myTime &rhs) const;
    bool operator<(const myTime &rhs) const;
    bool operator>(const myTime &rhs) const;
    bool operator==(const myTime &rhs) const;
    bool operator>=(const myTime &rhs) const;
    bool operator<=(const myTime &rhs) const;
    bool operator!=(const myTime &rhs) const;
    myTime &operator+=(const myTime &rhs);
    myTime &operator++();
    const myTime operator++(int);
    friend istream &operator>>(istream &in, myTime &rhs);
    friend ostream &operator<<(ostream &out, const myTime &rhs);
};

ostream &operator<<(ostream &out, const myTime &rhs);
istream &operator>>(istream &in, myTime &rhs);
