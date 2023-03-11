#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // đề ở đây
    // test lai
    do
    {
        cin >> call;
        string S;
        if (call == "#")
            break;
        if (call == "?number_calls_from")
        {
            cin >> S;
            cout << numberCall[S] << endl;
        }
        else
        {
            break;
        }
    } while (call != "#");
    return 0;
}