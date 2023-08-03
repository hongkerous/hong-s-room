#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n;

    vector<int> sequence(n);
    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }

    cin >> x;

    unordered_map<int, int> num_count;
    int pair_count = 0;

    for (int i = 0; i < n; i++) {
        int complement = x - sequence[i];
        if (num_count.find(complement) != num_count.end()) {
            pair_count += num_count[complement];
        }
        num_count[sequence[i]]++;
    }

    cout << pair_count << endl;

    return 0;
}
