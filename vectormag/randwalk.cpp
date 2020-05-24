#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int main(int argc, char **argv)
{
    using namespace std;

    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target \"q or quit\"" << endl;
    while(cin >> target)
    {
        cout << "Enter step length: " << endl;
        if(!(cin >> dstep))
            break;

        while(result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }

        cout << "After " << steps << " steps, the subject " << "as the following location: " << endl;
        cout << result << endl;
        result.polar_mode();

        cout << " or "<< endl << result << endl;
        cout << "Average outward distance per step = " << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";

    }
    cout << "Bye !" << endl;
    cin.clear();
    while(cin.get() != '\n')
        continue;
    return 0;
}
