#include <iostream>
#include <vector>
#include <string>
using namespace std;

void reverseString(vector<char>& s){
    int left = 0;
    int right = s.size() - 1;

    while(left < right){
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
    
}

int main(){
    string str;
    cout << "Please enter a string: ";
    cin >> str;
    vector<char> s(str.begin(), str.end());

    reverseString(s);

   for(char c : s){
    cout << c;
   }
   cout << endl;


   return 0;

}