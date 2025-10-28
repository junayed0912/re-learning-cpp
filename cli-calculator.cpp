#include <bits/stdc++.h>
using namespace std;
double calc(char c, double a, double b)
{
    switch (c)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case '*':
        return a * b;
        break;
    case '/':
        if (int(b) == 0)
        {
            return INT_MIN;
        }
        else
        {
            double result = a / b;
            return round(result * 100) / 100;
        }
        break;
    case '%':
        return int(a) % int(b);
        break;
    case '^':
        return pow(a, b);
        break;
    default:
        cout<<"Invalid Operator";
        return numeric_limits<double>::quiet_NaN();
        break;
    }
}
int main()
{
    double previous = -1e9;
    string s;
    while (true)
    {

        if (previous != -1e9)
        {
            cout << previous << endl;
        }
        double a, b;
        char c;
        cout << "Enter the first number: ";
        cin >> a;
        cout << endl;
        cout << "Enter the second number: ";
        cin >> b;
        cout << endl;
        cout << "select the operators from [+], [-], [*], [/], [^], [%]: ";
        cin >> c;
        cout << endl;

        double result = calc(c, a, b);
        if (result == INT_MIN)
            cout << "Can't be devided by 0";
        else
        {
            cout << "Answer: " <<result <<endl;
            previous = result;
            cout << "Type X to exit or calc for calculation: ";
            cin >> s;
            if (s == "X" || s == "x")
                break;
            
        }
    }

    return 0;
}