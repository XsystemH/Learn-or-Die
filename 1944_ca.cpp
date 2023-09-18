#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    int T;
    cin >> T;
    cin.ignore();  // 忽略换行符

    for (int i = 0; i <= T; i++) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        vector<int> nums;

        int num;
        while (ss >> num) {
            nums.push_back(num);
        }

        reverse(nums.begin(), nums.end());

        for (int j = 0; j < nums.size(); j++) {
            cout << nums[j] << " ";
        }
        cout << endl;
    }

    return 0;
}