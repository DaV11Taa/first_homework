#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b and a < c) {
        cout << "First";
    } else {
        if (b < c) {
            cout << "Second";
        } else {
            cout << "Third";
        }
    }

    return 0;
}
