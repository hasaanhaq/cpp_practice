#include <iostream>
#include <vector>
using namespace std;

int findLength(vector<int>& nums, int k){
   int ans = 0;
   int curr = 0;
   int left = 0;
   for(int right = 0; right < nums.size(); right++){
    curr += nums[right];
    while(curr > k){
        curr -= nums[left];
        left++;
    }
    ans = max(ans, (right - left) + 1);
   }
   return ans;
}

int main() {
    // Test cases
    vector<vector<int>> testCases = {
        {2, 3, 1, 2, 4, 3},   // Mixed values
        {1, 1, 1, 1, 1},       // All elements are the same
        {5, 6, 7, 8, 9},       // All elements larger than k
        {10, 2, 3, 1, 5},      // Random elements
        {},                    // Empty array
        {5}                    // Single element
    };

    vector<int> ks = {5, 3, 4, 10, 0, 5};  // Corresponding k values

    for (size_t i = 0; i < testCases.size(); i++) {
        cout << "Test case " << i + 1 << ": nums = { ";
        for (int num : testCases[i]) {
            cout << num << " ";
        }
        cout << "}, k = " << ks[i] << " -> Longest subarray length: "
             << findLength(testCases[i], ks[i]) << endl;
    }

    return 0; //
}