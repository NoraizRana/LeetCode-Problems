#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int ind = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[ind] = nums[i];
                ind++;
            }
        }
            return ind;
    }
};

int main() {
    vector<int> a = {1, 2, 2, 2, 3, 4, 4, 4, 5, 6, 7};  
    Solution sol;
    int k = sol.removeDuplicates(a);

    cout << "Number of unique elements: " << k << endl;
    cout << "Updated array: ";
    for (int i = 0; i < k; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}