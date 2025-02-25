#include <iostream>
using namespace std;



bool isPalindrome(string s){
    int left = 0;
    int right = s.size() - 1;

    while(left < right){
        if(s[left] != s[right]){
            return false;
        }

        

        left++;
        right--;

    }

    return true;
}

int main(){
    
    string test1 = "racecar";  // Palindrome
    string test2 = "hello";    // Not a palindrome
    string test3 = "madam";    // Palindrome
    string test4 = "abba";     // Palindrome
    string test5 = "abc";      // Not a palindrome
    string test6 = "a";        // Single character (Palindrome)
    string test7 = "";         // Empty string (Palindrome)

    cout << "Testing racecar: " << (isPalindrome(test1) ? "Palindrome" : "Not a Palindrome") << endl;
    cout << "Testing hello: " << (isPalindrome(test2) ? "Palindrome" : "Not a Palindrome") << endl;
    cout << "Testing madam:  " << (isPalindrome(test3) ? "Palindrome" : "Not a Palindrome") << endl;
    cout << "Testing abba:  " << (isPalindrome(test4) ? "Palindrome" : "Not a Palindrome") << endl;
    cout << "Testing abc:  " << (isPalindrome(test5) ? "Palindrome" : "Not a Palindrome") << endl;
    cout << "Testing a:  " << (isPalindrome(test6) ? "Palindrome" : "Not a Palindrome") << endl;
    cout << "Testing "" :" << (isPalindrome(test7) ? "Palindrome" : "Not a Palindrome") << endl;
  

}