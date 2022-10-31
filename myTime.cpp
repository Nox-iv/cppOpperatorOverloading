#include "myTime.h"
#include <iostream>
#include <time.h>

using namespace std;

myTime::myTime() : hours(0), minutes(0), seconds(0)
{
}

myTime::myTime(int h, int m, int s) : hours(h), minutes(m), seconds(s)
{
}

myTime::myTime(int s) : hours(s / 3600), minutes((s % 3600) / 60), seconds(s % 60)
{
}

myTime::~myTime()
{
}

const int myTime::getTotalSeconds() const
{
    return hours * 3600 + minutes * 60 + seconds;
}

void myTime::setTime(int h, int m, int s)
{
    hours = h;
    minutes = m;
    seconds = s;
}

myTime &myTime::operator=(const myTime &rhs)
{
    if (this != &rhs)
    {
        hours = rhs.hours;
        minutes = rhs.minutes;
        seconds = rhs.seconds;
    }
    return *this;
}

const myTime myTime::operator+(const int s) const
{
    return myTime(this->getTotalSeconds() + s);
}

const myTime myTime::operator+(const myTime &rhs) const
{
    return myTime(this->getTotalSeconds() + rhs.getTotalSeconds());
}

bool myTime::operator<(const myTime &rhs) const
{
    return (this->getTotalSeconds() < rhs.getTotalSeconds());
}

bool myTime::operator>(const myTime &rhs) const
{
    return (this->getTotalSeconds() > rhs.getTotalSeconds());
}

bool myTime::operator==(const myTime &rhs) const
{
    return (this->getTotalSeconds() == rhs.getTotalSeconds());
}

bool myTime::operator>=(const myTime &rhs) const
{
    return (this->operator>(rhs) || this->operator==(rhs));
}

bool myTime::operator<=(const myTime &rhs) const
{
    return (this->operator<(rhs) || this->operator==(rhs));
}

bool myTime::operator!=(const myTime &rhs) const
{
    return !this->operator==(rhs);
}

myTime &myTime::operator+=(const myTime &rhs)
{
    this->hours += rhs.hours;
    this->minutes += rhs.minutes;
    this->seconds += rhs.seconds;
    return *this;
}

myTime &myTime::operator++()
{
    this->seconds++;
    return *this;
}

const myTime myTime::operator++(int)
{
    this->seconds++;
    return *this;
}

istream &operator>>(istream &in, myTime &rhs)
{
    cout << "Please enter hours, minutes, seconds" << endl;
    in >> rhs.hours >> rhs.minutes >> rhs.seconds;
    return in;
}

ostream &operator<<(ostream &out, const myTime &rhs)
{
    out << "Time is " << rhs.hours << ":" << rhs.minutes << ":" << rhs.seconds;
    return out;
}
