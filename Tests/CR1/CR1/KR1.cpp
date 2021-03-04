#include <iostream>
using namespace std;
    void ABC(int);
    void NSK(int, int);
    //2.....................................................................................................................
    //  Input : n = 4
    //  Output: A
       /* A

        B B

        C C C

        D D D D*/
    int main()
    {
       /* int n;
        cout << "Enter n:";
        cin >> n;
        ABC(n);
        return 0;*/
        //1.......................................................................................................................
        // input 10 and 6
        // output 30
        int a, b;
        cout << "enter a,b: ";
        cin >> a >> b;
        NSK(a, b);
        return 0;
    }

    void NSK(int a, int b)
    {
        int na = a, nb = b;
        bool flag = false;
        if (a > b)
        {
            while (a != b)
            {
                while (b <= a)
                {
                    if (a == b) { cout << a; flag = true; break; }
                    else b += nb;
                }
                if (flag == true) break;
                a += na;
            }
        }
        else if (a < b)
        {
            while (b != a)
            {
                while (a <= b)
                {
                    if (b == a) { cout << b; flag = true; break; }
                    else a += na;
                }
                if (flag == true) break;
                b += nb;
            }
        }
        else cout << a;
    }

    void ABC(int n)
    {
        string abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        if (n > 26 || n < 1) { cout << "Error"; }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << abc[i - 1] << " ";
                }
                cout << endl;
            }
        }

    }
