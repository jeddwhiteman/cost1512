#include <iostream>

using namespace std;

void astericks(int amountOfAstericks);

int main()
{
    astericks(1);
    return 0;
}

void astericks(int amountOfAstericks)
{
    if (amountOfAstericks == 1)
    {
        cout << '*';
    }

    else
    {
        astericks(amountOfAstericks - 1);
        cout << '*';
    }
}
