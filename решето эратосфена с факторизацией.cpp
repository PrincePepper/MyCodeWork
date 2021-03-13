#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long int n = 100000, i, j, p;
    cin >> p;
    vector<int> prime(n + 1);
    for (i = 2; i <= n; i++)
        if (prime[i] == 0)
            for (j = i; j <= n; j += i)
                if (prime[j] == 0)
                    prime[j] = i;
//    for (i = 2; i < n; i++)
//        cout << prime[i] << " ";
    while (p != 1) {
        cout << prime[p] << " ";
        p = p / prime[p];
    }
}
