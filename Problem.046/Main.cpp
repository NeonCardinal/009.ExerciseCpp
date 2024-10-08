//Задача 46: Изчисляване на средно географско
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double gradeOne;
    double gradeTwo;
    double gradeThree;
    double gradeFour;

    cout << "grade one = ";
    cin >> gradeOne;
    cout << "grade two = ";
    cin >> gradeTwo;
    cout << "grade three = ";
    cin >> gradeThree;
    cout << "grade four = ";
    cin >> gradeFour;

    double product = gradeOne + gradeTwo + gradeThree + gradeFour;
    double result = pow(product, 1.0 / 4.0);

    cout << "result = " << result << endl;

    return 0;
}