#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_set<int> unique_nums;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        unique_nums.insert(num);
    }

    cout << unique_nums.size() << endl;

    return 0;
}