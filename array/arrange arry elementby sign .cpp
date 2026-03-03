#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> pos, neg;
    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0) {   
            pos.push_back(arr[i]);
        }
        else {
            neg.push_back(arr[i]);
        }
    }
    int mini = min(pos.size(), neg.size());
    for(int i = 0; i < mini; i++) {
        arr[2*i]     = pos[i];
        arr[2*i + 1] = neg[i];
    }
    int index = 2 * mini;
    if(pos.size() > neg.size()) {
        for(int i = mini; i < pos.size(); i++) {
            arr[index++] = pos[i];
        }
    }
    else {
        for(int i = mini; i < neg.size(); i++) {
            arr[index++] = neg[i];
        }
    }
    cout << "Rearranged Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}