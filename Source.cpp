#include "myTime.h"
#include <chrono>
#include <iostream>

using namespace std;

int main()
{
    myTime t1(1, 2, 3), t2;
    t2.setTime(3, 2, 1);
    t1 = t2;
    cout << t1 << endl;
    myTime t3(48123);
    cout << t3 << endl;
    cout << t2 << endl;
    t2 = t1 + 181;
    cout << t2 << endl;
    t3 = t1 + t2;
    cout << t3 << endl;
    myTime t4;
    t4 = t1;
    cout << (t1 < t3) << endl;
    cout << (t1 > t3) << endl;
    cout << (t1 <= t3) << endl;
    cout << (t1 >= t3) << endl;
    cout << (t1 == t4) << endl;
    cout << (t1 != t4) << endl;
    t1 += t2;
    cout << t1 << endl;
    t1++;
    cout << t1 << endl;
    ++t1;
    cout << t1 << endl;
    cin >> t1;
    cout << t1 << endl;
    return 0;
}
