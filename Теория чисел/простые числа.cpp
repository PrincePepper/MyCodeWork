#include <iostream>

using namespace std;

int main() {
    unsigned long long int n;
    cin >> n;
    for (unsigned long long int i = 2; i * i <= n; i++) {
        if (n % i == 0){
            cout << "NO";
            return 0;
        }

    }
    cout << "YES";
    return 0;
}