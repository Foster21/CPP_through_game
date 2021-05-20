#include <iostream>
using namespace std;

int main()
{
    int score = 1000;

    if (score >= 250)
    {
        cout << "You scored 250 or more. Decent.\n\n";
    }
    if (score >= 500)
    {
        cout << "You scored 500 or more. Nice.\n\n";
        if (score >= 1000)
        {
            cout << "You scored 1000 or more. Immpresive!.\n";
        }
    }
    return 0;
}