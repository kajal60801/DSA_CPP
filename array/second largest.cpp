#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    if (n < 2) {
        cout << "Second largest element does not exist";
        return 0;
    }

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int largest = nums[0];
    int seclargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (nums[i] > largest) {
            seclargest = largest;
            largest = nums[i];
        }
        else if (nums[i] < largest && nums[i] > seclargest) {
            seclargest = nums[i];
        }
    }

    if (seclargest == INT_MIN)
        cout << "Second largest element does not exist";
    else
        cout << "Second largest element is: " << seclargest;

    return 0;
}

