#include <iostream>
using namespace std;

bool isSubsequence(string s, string t){
    int i = 0;
    int j = 0;

    while(i < s.size() && j < t.size()){
        if(s[i] == t[j]){
            i++;
        }

        j++;
    }

    return i == s.size();
}

int main() {
    // Test cases
    cout << boolalpha; // Print "true" or "false" instead of 1 or 0
    cout << "Test 1: " << isSubsequence("abc", "ahbgdc") << " (Expected: true)" << endl;
    cout << "Test 2: " << isSubsequence("axc", "ahbgdc") << " (Expected: false)" << endl;
    cout << "Test 3: " << isSubsequence("", "ahbgdc") << " (Expected: true)" << endl; // Empty string is always a subsequence
    cout << "Test 4: " << isSubsequence("b", "abc") << " (Expected: true)" << endl;
    cout << "Test 5: " << isSubsequence("abc", "abc") << " (Expected: true)" << endl; // Exact match
    cout << "Test 6: " << isSubsequence("abcd", "abc") << " (Expected: false)" << endl; // Extra char in s
    cout << "Test 7: " << isSubsequence("ace", "abcde") << " (Expected: true)" << endl;
    cout << "Test 8: " << isSubsequence("aec", "abcde") << " (Expected: false)" << endl;

    return 0;
}