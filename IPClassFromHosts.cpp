

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void IPClass(long long int hosts)
{
    if(hosts <= (pow(2, 8) - 2))
       cout << "\n Suggested IP address Class/Classes: Class C ";
    else if(hosts <= (pow(2, 16) - 2))
        cout << "\n Suggested IP address Class/Classes: Class B ";
    else if(hosts <= (pow(2, 24) - 2))
        cout << "\n Suggested IP address Class/Classes: Class A ";
    else
        cout << "\n Invalid number of hosts ";
}

int main()
{
    long long int hosts;
    cout << "\n Enter Number of Hosts: ";
    cin >> hosts;

    IPClass(hosts);

    return 0;
}
