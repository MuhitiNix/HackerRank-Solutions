#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int t;
    cin >> t;   // number of test cases
    
    while (t--) {
        string s;
        cin >> s;   // input string
        
        string evenChars = "", oddChars = "";
        
        for (int i = 0; i < s.length(); i++) {
            if (i % 2 == 0) {
                evenChars += s[i];
            } else {
                oddChars += s[i];
            }
        }
        
        cout << evenChars << " " << oddChars << endl;
    }
    
    return 0;
}
