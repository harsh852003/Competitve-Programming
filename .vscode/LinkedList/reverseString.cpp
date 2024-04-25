// #include <iostream>
// #include <stack>
// #include <string> // Include the string header
// using namespace std;

// int main(){
//     std::string s1 = "Sandip"; // Use std::string
//     stack <char> s;

//     for(int i=0;i<s1.length();i++){
//         char ch  = s1[i];
//         s.push(ch);
    
//     }
//     string ans = "";
//     while(!s.empty()){
//         char ch = s.top();
//         ans.push_back(ch);
//         s.pop();
//     }

//     cout<<ans;



//     return 0;
// }

//another method
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> charStack;
        
        // Push characters onto the stack
        for (char ch : s) {
            charStack.push(ch);
        }
        
        // Pop characters from the stack to reverse the string
        for (int i = 0; i < s.size(); ++i) {
            s[i] = charStack.top();
            charStack.pop();
        }
        
        // Print the reversed string
        for (char ch : s) {
            cout << ch;
        }
        cout << endl;
    }
};

int main() {
    Solution solution;
    vector<char> str = {'h', 'e', 'l', 'l', 'o'};
    solution.reverseString(str);
    return 0;
}


