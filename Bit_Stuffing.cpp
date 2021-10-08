#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "This Program is made by Prakhar Jain\n";
    cout << "enter no of bites in data : ";
    cin >> n;
    int ar[n], a[8] = {0, 1, 1, 1, 1, 1, 1, 0};
    cout << "enter bite of data : ";

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < 8; i++)
    {
        cout << a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i];
        if (ar[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }

        if (count == 5)
        {
            cout << "0";
        }
    }

    for (int i = 0; i < 8; i++)
    {
        cout << a[i];
    }
    return 0;
}