#include <iostream>
using namespace std;

int main()
{
    //task3
    const int SIZE = 10;
    int mas[SIZE] = {};
    srand(time(NULL));
    cout << "Random Nums: ";
    for (int i = 0; i < SIZE; i++)
    {
        int ran = rand() % 10 + 1;
        mas[i] = ran;
        cout << mas[i] << " ";
    }
    int rs = 0;

    cout << endl;
    cout << "Number that repeats 2 or more: ";
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (mas[i] == mas[j])
            {
                rs++;//if the numbers are repeated 1 or more times
                if (rs >= 2)
                {
                    cout << mas[i] << " ";//if the numbers are repeated 2 or more times
                }
            }
        }
        rs = 0;//zeroing for the next tabulation
    }
}