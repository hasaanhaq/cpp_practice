#include <iostream>
#include <vector>

using namespace std;

vector<int> combine(vector<int>& arr1, vector<int>& arr2){
    vector<int> ans;
    int i = 0;
    int j = 0;

    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }else{
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while(i < arr1.size()){
        ans.push_back(arr1[i]);
        i++;
    }

    while(j < arr2.size()){
        ans.push_back(arr2[j]);
        j++;
    }

    return ans;
}

// Function to print a vector
void printVector(const vector<int>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i < vec.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]\n";
}

int main() {
    // Test cases
    vector<int> test1_arr1 = {1, 3, 5, 7};
    vector<int> test1_arr2 = {2, 4, 6, 8};
    
    vector<int> test2_arr1 = {1, 2, 3};
    vector<int> test2_arr2 = {4, 5, 6};

    vector<int> test3_arr1 = {10, 20, 30};
    vector<int> test3_arr2 = {5, 15, 25, 35};

    vector<int> test4_arr1 = {1, 1, 1, 1};
    vector<int> test4_arr2 = {1, 1, 1, 1};

    vector<int> test5_arr1 = {};
    vector<int> test5_arr2 = {5, 10, 15};

    vector<int> test6_arr1 = {1, 2, 3};
    vector<int> test6_arr2 = {};

    vector<int> test7_arr1 = {};
    vector<int> test7_arr2 = {};

    // Running tests
    cout << "Test 1: "; printVector(combine(test1_arr1, test1_arr2));
    cout << "Test 2: "; printVector(combine(test2_arr1, test2_arr2));
    cout << "Test 3: "; printVector(combine(test3_arr1, test3_arr2));
    cout << "Test 4: "; printVector(combine(test4_arr1, test4_arr2));
    cout << "Test 5: "; printVector(combine(test5_arr1, test5_arr2));
    cout << "Test 6: "; printVector(combine(test6_arr1, test6_arr2));
    cout << "Test 7: "; printVector(combine(test7_arr1, test7_arr2));

    return 0;
}
