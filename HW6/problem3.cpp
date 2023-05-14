#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    for (int i = 1; i < 10; i++)
    {
        for (int j = 9; j > 0 ; j--)
        {
            cout << j << "x" << i << "=" << setw(2) << i*j << " ";
        }
        cout << endl;
    }
    




    return 0;
}