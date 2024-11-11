#include <iostream>
#include "counter.h"
using namespace std;

int main(){
    counter c1, c2(5), c3(5);

    c1.increment(); // Incrementing c1 (should remain 0)
    c2.increment(); // Incrementing c2 (count becomes 5)
    c3.increment(); // Incrementing c3 (count becomes 5)

    cout<<"Count of c1: ";
    testfunction(c1);
    cout <<"Count of c2: ";
    testfunction(c2);
    cout << "Count of c3: ";
    testfunction(c3);

    counter c4 = c2 + c3;
    cout << "Count of c4: ";
    testfunction(c4);

    counter c5 = c1 + c2;

    c1 += c2;
    cout << "Count of c1: ";
    testfunction(c1);

    cout << "c2 == c3: " << (c2 == c3) <<endl;
    cout << "c1 != c2: " << (c1 != c2) <<endl;
    cout << "c3 > c1: " << (c3 > c1) <<endl;

    counter c6 = c2++;
    cout << "Count of c6 (c2++): ";
    testfunction(c6);
    cout << "Count of c2 after post-increment: ";
    testfunction(c2);

    counter c7 = ++c3;
    cout << "Count of c7 (++c3): ";
    testfunction(c7);
    cout << "Count of c3 after pre-increment: ";
    testfunction(c3);

    return 0;
}

