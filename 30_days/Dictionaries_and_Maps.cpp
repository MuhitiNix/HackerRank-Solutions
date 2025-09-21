#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
 int n;
    cin >> n;
    map<string, string> phoneBook;
    // Read phone book entries
    for (int i = 0; i < n; i++) {
        string name, phone;
        cin >> name >> phone;
        phoneBook[name] = phone;
    }
    string query;
    // Read queries until EOF
    while (cin >> query) {
        if (phoneBook.find(query) != phoneBook.end()) {
            cout << query << "=" << phoneBook[query] << "\n";
        } else {
            cout << "Not found\n";
        }
    }
  
    return 0;
}
