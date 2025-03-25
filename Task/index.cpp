#include <iostream>
using namespace std;
int main()
{
    int path;
    cout << "enter path";
    cin >> path;
    if (path == 1)
    {
        cout << "enter path";
        cin >> path;
        if (path == 2)
        {
            cout << "enter path";
            cin >> path;
            if (path == 3)
            {
                cout << "enter path";
                cin >> path;
                if (path == 4)
                {
                    cout << "dr";
                }
                else
                {
                    cout << "ia";
                }
            }
            else if (path == 4)
            {
                cout << "dr";
            }
            else
            {
                cout << "ia";
            }
        }
        else if (path == 3)
        {
            cout << "enter path";
            cin >> path;
            if (path == 2)
            {
                cout << "enter path";
                cin >> path;
                if (path == 4)
                {
                    cout << "dr";
                }
            }
            else if (path == 4)
            {
                cout << "dr";
            }
            else
            {
                cout << "ia";
            }
        }
        else if (path == 4)
        {
            cout << "dr";
        }
        else
        {
            cout << "ia";
        }
    }
    else
    {
        cout << "ia";
    }
}