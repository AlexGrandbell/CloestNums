#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int findClosestDifference(vector<int>& arr) {
    sort(arr.begin(), arr.end()); // 先将数组排序
    int minDiff = arr[arr.size()-1]-arr[0]; // 初始化最小差值为最大整数
    for (int i = 1; i < arr.size(); ++i) {
        minDiff = min(minDiff, abs(arr[i] - arr[i - 1])); // 计算相邻元素之间的差值并更新最小差值
    }
    return minDiff;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int result = findClosestDifference(arr);
    cout << result << endl;
    return 0;
}