#include <iostream>
#include <cmath>   // for abs()
using namespace std;

void update(int *a, int *b) {
    int s = *a + *b;          
    int d = abs(*a - *b);    
    *a = s;                   
    *b = d;                  
}
int main() {
    int a, b;
    cin >> a >> b;   // input

    update(&a, &b);  // pass addresses

    cout << a << endl << b << endl;

    return 0;
}
