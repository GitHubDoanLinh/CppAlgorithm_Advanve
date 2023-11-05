#include <iostream>
using namespace std;

int C(int m, int n) 
{
    if (m == 0 || m == n) return 1;
    if (m == 1) return n;
    return C(m - 1, n ) + C(m, n - 1); 
}


int main(){
    int m, n;
    cout << "Nhap M = ";
    cin >> m;
    cout << "Nhap N = ";
    cin >> n;
    cout << "So cach = " << C(m, n);
}
