#include <iostream>
#include <cstring>
#include "ring.h"

using namespace std;

int main()
{
Ring r;
//r.add(3);
cout << r.isEmpty() << endl;
//r.add(4);
cout << r.isEmpty() << endl;

cout << r.del() << endl;
cout << r.del() << endl;
cout << r.isEmpty() << endl;

    return 0;
}

