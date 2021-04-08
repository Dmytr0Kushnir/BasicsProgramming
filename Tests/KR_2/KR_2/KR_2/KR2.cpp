#include <iostream>
#include <conio.h>
#include <map>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    // 1 (1 is true and 0 is false) 
   /* int size; 
    cout << " Enter array size:\n"; cin >> size;
    int* arr = new int[size];

    cout << "Enter an array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int middle = 0;

    bool IsSaddle = true;
    for (int i = 1; i < size; i++) {
        if (arr[i - 1] > arr[i]){
            middle = i;}
    }
    for (int i = 1; i < middle; i++) {
        if (!(arr[i - 1] > arr[i])) {
            IsSaddle = false;
        }
    }
    for (int i = middle + 1; i < size; i++) {
        if (!(arr[i - 1] < arr[i])) {
            IsSaddle = false;
        }
    }
    cout << "Output " << IsSaddle;
    delete[] arr;*/

    // 2 
    //int i, j,       //  лічильник для циклів,
    //    n,         // кількість елемнтів в рядку 
    //    flag = 0,  // чи є латинським
    //    sum = 0,   // сума в рядку чи в стовпці 
    //    summa;  // сума яка повинна бути 

    //cout << "\n Enter the number of numbers in the line of the square: ";
    //cin >> n;


    //summa = n * (n + 1) / 2;


    //int* mass = new int[n * n];


    //for (i = 0; i < n; i++)
    //    for (j = 0; j < n; j++)
    //    {
    //        cout << "\n Enter line element " << i + 1 << "column " << j + 1 << " : ";
    //        cin >> mass[i * n + j];
    //    }

    //for (i = 0; i < n; i++)
    //{
    //    for (j = 0; j < n; j++)
    //    {
    //        if (mass[i * n + j]<1 || mass[i * n + j]>n)   
    //        {                                                 
    //            i = n;                                          
    //            j = n;                                        
    //            flag = 1;                                      
    //        }
    //        sum += mass[i * n + j];                         
    //    }
    //    if (sum != summa)   
    //    {                      
    //        i = n;
    //        j = n;
    //        flag = 1;
    //    }
    //    sum = 0;              
    //}

    //
    //if (flag == 0)    
    //{
    //    for (i = 0; i < n; i++)
    //    {
    //        for (j = 0; j < n; j++)
    //        {
    //            if (mass[i + j * n]<1 || mass[i + j * n]>n)
    //            {                                               
    //                i = n;                                        
    //                j = n;                                          
    //                flag = 1;                                      
    //            }
    //            sum += mass[i + j * n];                         
    //        
    //        if (sum != summa)   
    //        {                     
    //            i = n;
    //            j = n;
    //            flag = 1;
    //        }
    //        sum = 0;              
    //    }
    //}



    //cout << " Square: ";

    //for (i = 0; i < n; i++)
    //{
    //    cout << "\n ";
    //    for (j = 0; j < n; j++)
    //        cout << mass[i * n + j] << "\t";
    //}

    //if (flag == 0)
    //    cout << "\n This square is Latin";
    //else
    //    cout << "\n  This square is Latin";


    // 3 
   /* int n; 
    map<int, int> mp;  
    vector<int> v;
    cout << "Enter an array size:\n";
    cout << "n = ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter an array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        if (it->second == 1) {
            v.push_back(it->first); 
        }
    }
    cout << "Output of the program:\n";
    if (!v.empty())
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " "; 
        }
    else {
        cout << "The array doesn't have any unique elements!\n"; 
    }
    delete[] arr; */

    system("pause"); 
    return 0; 
}
