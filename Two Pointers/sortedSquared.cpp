#include <iostream>
#include <vector>
using namespace std;


vector<int> sortedSquared(vector<int>& nums){
    int n = nums.size();
    vector<int> res(n);
    int left = 0;
    int right = n - 1;
    int index = n - 1;

    while(left <= right){
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if(leftSquare > rightSquare){
            res[index] = leftSquare;
            left++;
        }else{
            res[index] = rightSquare;
            right--;
        }
        index--;
    }
    return res;
}

void printVector(const vector<int>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i < vec.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    // Test Case 1: Array with both positive and negative numbers
    vector<int> nums1 = {-4, -2, 0, 2, 4};
    cout << "Test Case 1: [-4, -2, 0, 2, 4]" << endl;
    cout << "Expected: [0, 4, 4, 16, 16]" << endl;
    cout << "Got: ";
    printVector(sortedSquared(nums1));
    cout << endl;

    // Test Case 2: All negative numbers
    vector<int> nums2 = {-5, -3, -1};
    cout << "Test Case 2: [-5, -3, -1]" << endl;
    cout << "Expected: [1, 9, 25]" << endl;
    cout << "Got: ";
    printVector(sortedSquared(nums2));
    cout << endl;

    // Test Case 3: All positive numbers
    vector<int> nums3 = {1, 2, 3, 4, 5};
    cout << "Test Case 3: [1, 2, 3, 4, 5]" << endl;
    cout << "Expected: [1, 4, 9, 16, 25]" << endl;
    cout << "Got: ";
    printVector(sortedSquared(nums3));
    cout << endl;

    // Test Case 4: Single element
    vector<int> nums4 = {7};
    cout << "Test Case 4: [7]" << endl;
    cout << "Expected: [49]" << endl;
    cout << "Got: ";
    printVector(sortedSquared(nums4));
    cout << endl;

    // Test Case 5: Empty array
    vector<int> nums5 = {};
    cout << "Test Case 5: []" << endl;
    cout << "Expected: []" << endl;
    cout << "Got: ";
    printVector(sortedSquared(nums5));
    cout << endl;

    return 0;
}



