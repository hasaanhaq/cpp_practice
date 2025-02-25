#include <iostream>
#include <stack>
using namespace std;

void reverseString(string s){
    stack<char> rev;

    for(char c : s){
        rev.push(c);
    }
    
    while(rev.size() != 0){
        cout << rev.top();
        rev.pop();
    }
}

int main(){
    string s;

    cout << "hey man put in a word and i'll reverse it: " << s;
    
    cin >> s;

    cout << "aight here it is!: ";



    reverseString(s);

    return 0;
    
}

