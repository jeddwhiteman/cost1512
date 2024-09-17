#include <iostream>

using namespace std;

float raised_to_power(float number, int power)
{
    if (power < 0)
    {
        cout << "\n Error - can't raise to a negative power\n" << endl;
        exit(1);
    }
    else if (power == 0)
    {
        return 1;
    }
    else
    {
        return (number * raised_to_power(number, power - 1));
    }
}

int main()
{
    float answer = raised_to_power(4,3);
    cout << answer << endl;

    return 0;
}
