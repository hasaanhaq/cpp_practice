#include <iostream>
#include <vector>
using namespace std;

bool checkTarget(vector<int>& nums, int target){
    int left = 0;
    int right = nums.size() - 1;

    while(left < right){
        int curr = nums[left] + nums[right];
        if(curr == target){
            return true;
        }else if(curr > target){
            right--;
        }else{
            left++;
        }
    }

    return false;



}



int main() {
    vector<int> test1 = {1, 2, 3, 4, 5, 6};  // Sorted array
    vector<int> test2 = {1, 3, 5, 7, 9, 11}; // Sorted array
    vector<int> test3 = {2, 4, 5, 8, 10};    // Sorted array
    vector<int> test4 = {1, 1, 1, 1, 1};     // Edge case, same elements
    vector<int> test5 = {};                  // Edge case, empty array
    vector<int> test6 = {5};                 // Edge case, single element

    int target1 = 9;  // Exists (4+5)
    int target2 = 10; // Exists (3+7)
    int target3 = 15; // Exists (5+10)
    int target4 = 3;  // Doesn't exist (no sum makes 3)
    int target5 = 2;  // Doesn't exist (empty array)
    int target6 = 5;  // Doesn't exist (single element)

    cout << "Test 1: " << (checkTarget(test1, target1) ? "Found" : "Not Found") << endl;
    cout << "Test 2: " << (checkTarget(test2, target2) ? "Found" : "Not Found") << endl;
    cout << "Test 3: " << (checkTarget(test3, target3) ? "Found" : "Not Found") << endl;
    cout << "Test 4: " << (checkTarget(test4, target4) ? "Found" : "Not Found") << endl;
    cout << "Test 5: " << (checkTarget(test5, target5) ? "Found" : "Not Found") << endl;
    cout << "Test 6: " << (checkTarget(test6, target6) ? "Found" : "Not Found") << endl;

    return 0;
}
