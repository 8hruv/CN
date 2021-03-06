
#include <iostream>
#include <algorithm>
using namespace std;

void VRC(int bArr[])
{
        int count = 0;
        for(int i = 0;i < 8; i++)
        {
            if(bArr[i] == 1)
                count++;
        }
        if(count % 2 == 0)
            bArr[8] = 0;
        else
            bArr[8] = 1;

        cout << "\n VRC with even parity: ";
        for(int i = 0; i < 9; i++)
        {
            cout << bArr[i];
        }
}

int dToB(int dec)
{
    int bArr[8] = {0};
    int i = 0;
    while (dec > 0)
    {
        bArr[i] = dec % 2;
        dec /= 2;
        i++;
    }

    int n = sizeof(bArr) / sizeof(bArr[0]);
    reverse(bArr, bArr + n);

    cout << "\n Binary Form: ";
    for(int i = 0; i < 8; i++)
    {
        cout << bArr[i];
    }

    VRC(bArr);
}

int main()
{
    char ch;
    cout << "\n Enter Character: ";
    cin >> ch;
    int temp = ch;
    cout << "\n ASCII Value: " << temp;

    dToB(temp);
    return 0;
}

