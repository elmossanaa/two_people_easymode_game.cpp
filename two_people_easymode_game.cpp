#include <iostream>
using namespace std;

int main()
{
    int friend1;
    int friend2;
    cout << "host please choose a number" << endl;
    cin >> friend1;
    cout << "guest please guess the number the host chose" << endl;
    cin >> friend2;
    if (friend1 == friend2) {
        cout << "you win guest" << endl;
    }
    else {
        cout << "did not guess the same number" << endl;
    }
    system("pause>0");
}
