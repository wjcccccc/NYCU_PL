#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "\t" << setw(10) << "N\t" << setw(10) << "N^3\t" << setw(10) << "N^5\t" << setw(10) <<"N^7\t" << setw(10) << "N^9" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "\t" << setw(10) << i << "\t" << setw(10) << i*i*i << "\t" << setw(10) << i*i*i*i*i << "\t" << setw(10) << i*i*i*i*i*i*i << "\t" << setw(10) << i*i*i*i*i*i*i*i*i << endl;
    }
    return 0;
}