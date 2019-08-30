#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int value = 1;
    while (value != 0)
    {
        cout << "Please enter a value" << endl;
        cin >> value;
        if(value == 0)
            break;
        cout << "The square of your value is " << pow(value,2) <<endl;
    }

    return 0;
}