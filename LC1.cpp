#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int z = nums.size();
        for (int i = 0; i < z - 1; i++) {
            for (int j = i + 1; j < z; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    vector<int> result = sol.twoSum(nums, target);

    if (result.size() == 2) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two numbers add up to the target." << endl;
    }

    return 0;
}
