#include <iostream>
using namespace std;
    void ABC(int);
    //2.....................................................................................................................
    //  Input : n = 4
    //  Output: A
       /* A

        B B

        C C C

        D D D D*/
    int main()
    {
        int n;
        cout << "Enter n:";
        cin >> n;
        ABC(n);
        return 0;
        //1.......................................................................................................................
        // input 10 and 6
    // output 30
       /* int a, b, c, aa, bb;
        cin >> a >> b;
        aa = a;
        bb = b;
        if (a < b) {
            a = a ^ b;
            b = a ^ b;
            a = a ^ b;
        }
        while (b) {
            c = a;
            a = b;
            b = c % b;
        }
        b = (aa * bb) / a;
        cout << b;
        return 0;*/
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
