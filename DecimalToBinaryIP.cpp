

#include <iostream>
#include <algorithm>
using namespace std;

int dToB(long int dec)
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

    for(int i = 0; i < 8; i++)
    {
        cout << bArr[i];
    }
    cout << " ";
}

void convertIP(long int first, long int second, long int third, long int fourth)
{
    cout << "\n IP Address in Dotted Decimal Notation: " << first << "." << second << "." << third << "." << fourth;
    if ((0 <= first && first <= 255) && (0 <= second && second <= 255) && (0 <= third && third <= 255) && (0 <= fourth && fourth <= 255))
    {
        cout << "\n IP Address in Binary Notation: ";
        dToB(first);
        dToB(second);
        dToB(third);
        dToB(fourth);
    }
    else
    {
        cout << "\n Invalid Address ";
    }
}
int main()
{
    long int first, second, third, fourth;
    cout << "\n Enter the IP Address in Dotted Decimal Notation: ";
    cout << "\n Enter First Octet: ";
    cin >> first;
    cout << "\n Enter Second Octet: ";
    cin >> second;
    cout << "\n Enter Third Octet: ";
    cin >> third;
    cout << "\n Enter Fourth Octet: ";
    cin >> fourth;

    convertIP(first, second, third, fourth);
    return 0;
}
