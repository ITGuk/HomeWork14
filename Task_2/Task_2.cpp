#include <iostream>
using namespace std;

int main()
{
    //task2
    const int SIZE = 30;
    int mas[SIZE] = {};
    srand(time(NULL));
    cout << "Temperature every day: ";
    for (int i = 0; i < SIZE; i++)
    {
        int temp = rand() % 18;
        mas[i] = temp;
        cout << temp << " ";//Temperature every day
    }
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += mas[i];
    }
    int zagal = sum / SIZE;//Average temperature

    cout << endl << "Average temperature: " << zagal << endl;

    int klk = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (mas[i] > zagal)
        {
            klk++;//count times the temperature rises above the average
        }
    }
    cout << klk << " times the temperature rises above the average." << endl;


}
