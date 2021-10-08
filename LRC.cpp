#include <iostream>
using namespace std;

void decToBinary(int n, int binaryNum[])
{

    int i = 7, count = 0, bit = 0;

    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i--;
    }

    for (int j = 0; j <= 7; j++)
    {
        if (binaryNum[j] == 1)
        {
            count++;
        }
    }
    cout << endl
         << "count : " << count << endl;
    if (count % 2 != 0)
    {
        bit = 1;
    }
    cout << "bits : ";
    for (int j = 0; j <= 7; j++)
    {

        cout << binaryNum[j];
    }
    // cout<<bit;
}

int main()
{
    cout << "This Program is made by Prakhar Jain\n";
    char alfa1, alfa2;
    int binaryNum1[8] = {0}, binaryNum2[8] = {0}, lrc[8] = {0};
    cin >> alfa1 >> alfa2;
    int asci1 = alfa1, asci2 = alfa2, i;
    cout << asci1 << " " << asci2 << endl;

    decToBinary(asci1, binaryNum1);
    decToBinary(asci2, binaryNum2);

    for (i = 0; i < 8; i++)
    {
        if (binaryNum1[i] == binaryNum2[i])
        {
            lrc[i] = 0;
        }
        else
        {
            lrc[i] = 1;
        }
    }
    cout << endl
         << "LRC = ";
    for (int j = 0; j < 8; j++)
    {
        cout << lrc[j];
    }

    return 0;
}