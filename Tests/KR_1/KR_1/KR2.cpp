#include<iostream>
#include<cmath>
using namespace std;

int NewNumber(int);
bool SimpleNumber(int);
//
//int main()
//{
//    int n;
//    cout << "Enter n: ";
//    cin >> n;
//    n = NewNumber(n);
//    if (SimpleNumber(n))cout << "Yes" << endl;
//    else cout << "No" << endl;
//    system("pause");
//}

int NewNumber(int n)
{
    int amount = 0, m = n;
    while (m != 0)
    {
        m = m / 10;
        amount++;
    }
    m = n;
    int new_number = 0;
    if (amount % 2 == 0)
    {
        int add = 1;
        for (int i = 0; i < amount; i++)
        {
            if (i % 2 != 0)
            {
                new_number += add * (m % 10);
                add *= 10;
            }
            m = m / 10;
        }
    }
    else
    {
        int add = 1;
        for (int i = 0; i < amount; i++)
        {
            if (i % 2 == 0)
            {
                new_number += add * (m % 10);
                add *= 10;
            }
            m = m / 10;
        }
    }
    return new_number;
}

bool SimpleNumber(int n)
{
    bool flag = true;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
            flag = false;
            break;
        }
    }
    if (flag == true) return true;
}