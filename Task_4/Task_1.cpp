#include <iostream>
using namespace std;

int main()
{
    //Task4
    const int SIZE = 10;
    int arr_one[SIZE] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int arr_two[SIZE] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int arr_x[20] = {};//an array to fill two arrays

    //variant a
    for (int i = 0, k = 0,i1 = 0,i2 = 0; i < SIZE * 2; i++)
    {
        if (i % 2 == 0)
        {
            arr_x[k] = arr_two[i1];//assurance of the first array to the even place of the X array
            k ++;//go to the next cell of the array X
            i1++;//go to the current value of another array
        }
        if (i % 2 != 0)
        {
            arr_x[k] = arr_one[i2];
            k ++;
            i2++;
        }
    }
    for (int i = 0; i < SIZE * 2; i++)
    {
        cout << arr_x[i] << " ";//output first variant
    }

    //varian b
    cout << endl;
    int k = 0;
    for (int i = 0; i < SIZE; i++)
    {
        arr_x[i] = arr_two[k];//assurance of the second array to an odd place of the X array
        k++;
    }
    for (int i = 0; i < SIZE * 2; i++)
    {
        arr_x[k] = arr_one[i];//filling the array starting from cell number k
        k++;//go to the next cell of the array X
    }

    for (int i = 0; i < SIZE * 2; i++)
    {
        cout << arr_x[i] << " ";//output second variant
    }
}