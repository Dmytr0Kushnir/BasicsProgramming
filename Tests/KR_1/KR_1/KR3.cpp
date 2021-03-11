#include<iostream>
#include<cmath>
using namespace std;

int Sum(int);
int Count(int);

//int main()
//{
//    int n;
//    cout << "Enter n: ";
//    cin >> n;
//    cout << Sum(n - 1);
//    system("pause");
//}

int Sum(int n)
{
    if (n == 0) return 1;
    else
    {
        return Count(Sum(n - 1));
    }

}

int Count(int a)
{
    if (a == 1) return a;
    else {
        cout << a << " " << 3 * a - 5 << endl;
        return 3 * a - 5;
    }
}