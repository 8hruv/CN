

#include <iostream>
#include <algorithm>
using namespace std;

void LRC(int bArr1[], int bArr2[])
{
        int LRCArr[8] = {0};
        for(int i = 0;i < 8; i++)
        {
            if(bArr1[i] != bArr2[i])
                LRCArr[i] += 1;
        }

        cout << "\n LRC with even parity: ";
        for(int i = 0; i < 8; i++)
        {
            cout << LRCArr[i];
        }
}

int dToB(int dec1, int dec2)
{
    int bArr1[8] = {0};
    int bArr2[8] = {0};
    int i = 0;
    while (dec1 > 0)
    {
        bArr1[i] = dec1 % 2;
        dec1 /= 2;
        i++;
    }
    i = 0;
     while (dec2 > 0)
    {
        bArr2[i] = dec2 % 2;
        dec2 /= 2;
        i++;
    }

    int n1 = sizeof(bArr1) / sizeof(bArr1[0]);
    reverse(bArr1, bArr1 + n1);
    int n2 = sizeof(bArr2) / sizeof(bArr2[0]);
    reverse(bArr2, bArr2 + n2);

    cout << "\n Binary Forms: \n ";
    for(int i = 0; i < 8; i++)
    {
        cout << bArr1[i];
    }
    cout << "\n ";
    for(int i = 0; i < 8; i++)
    {
        cout << bArr1[i];
    }

    LRC(bArr1, bArr2);
}

int main()
{
    char ch1, ch2;
    cout << "\n Enter First Character: ";
    cin >> ch1;
    cout << "\n Enter Second Character: ";
    cin >> ch2;
    int temp1 = ch1;
    int temp2 = ch2;
    cout << "\n ASCII Value of " << ch1 << ": " << temp1;
    cout << "\n ASCII Value of " << ch2 << ": " << temp2;

    dToB(temp1, temp2);

    return 0;
}


