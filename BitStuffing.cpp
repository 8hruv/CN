

#include <iostream>
#include <string>
using namespace std;

void bitStuffing(string str, string flag)
{
    int countOne = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
            countOne++;
        else if (str[i] == '0')
            countOne = 0;
        else
        {
            str.erase(str.begin() + i);
            i--;
        }
        if (countOne == 5)
        {
            str.insert(i + 1, "0");
            countOne = 0;
        }
    }
    str = flag + ' ' + str + ' ' + flag;
    cout << str;
}

int main()
{
    string str;
    cout << "Enter a Bit String: ";
    getline(cin, str);

    string flag = "01111110";
    bitStuffing(str, flag);

    return 0;
}
