#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxWater = 0;

        while (left < right) {
            int width = right - left;

            if (height[left] < height[right]) {
                maxWater = max(maxWater, height[left] * width);
                left++;
            } else {
                maxWater = max(maxWater, height[right] * width);
                right--;
            }
        }

        return maxWater;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    Solution sol;
    int result = sol.maxArea(height);

    cout << "Maximum water stored: " << result << endl;

    return 0;
}