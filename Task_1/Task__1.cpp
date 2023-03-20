#include <iostream>
using namespace std;

int main()
{
    //task1

    const int ROW = 2;//Line
    const int COL = 4;//column

    int arr[ROW][COL]{};
    srand(time(NULL));
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            int ran = rand() % 5 + 1;
            arr[i][j] = ran;//random nums 
        }

    }

    for (int i = 0; i < ROW; i++)//Output a two-dimensional array
    {
        for (int j = 0; j < COL; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;

    }
    cout << endl;
    for (int i = 0, a = 0; i < COL; i++)
    {
        int zagal = arr[a][i] + arr[a + 1][i];
        cout << "In the " << i << " entrance: " << zagal << endl;
        a++;
        zagal = 0;//Reset to zero for the next column
        a = 0;
    }
    cout << endl;
    for (int i = 0; i < ROW; i++)//Search for large families
    {
        for (int j = 0; j < COL; j++)
        {
            if (arr[i][j] >= 5)
            {
                cout << "A large family lives in apartment " << j << " on the " << i << " entrance" << endl;
            }
        }

    }

    cout << endl;
    int pid;
    int kv;
    cout << "Enter the entrance: ";
    cin >> pid;
    cout << endl;
    cout << "Enter the apartment number: ";
    cin >> kv;

    cout << arr[kv][pid] << " people live in the " << pid << " entrance in apartment " << kv << endl;
}


