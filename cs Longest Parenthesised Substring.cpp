#include <bits/stdc++.h>
using namespace std;

int longestParenthesisedSubstring(const string& S) {
    int cur=-1,mx=-1;
    stack<int> stck;
    for(int i=0;i<S.length();i++){
        if(S[i]=='(')
            stck.push(i);
        else{
            if(stck.empty())
                cur=i;
            else{
                stck.pop();
                if(stck.empty())
                    mx=max(mx,i-cur);
                else
                    mx=max(mx,i-stck.top());
            }
        }
    }
    return mx;
}

int main() {
    string S;
    cin >> S;
    cout << longestParenthesisedSubstring(S) << "\n";
    return 0;
}
