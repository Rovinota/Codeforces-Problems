#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y;
    double result;
    int temp;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        result = sqrt (pow(x,2)+pow(y,2));
        if (x == 0 && y == 0) cout << "0\n";
        else if(result  == (int)result)
        {
            cout << "1\n";
        }
        else cout << "2\n";
    }
}


