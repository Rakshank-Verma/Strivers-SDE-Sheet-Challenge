#include<bits/stdc++.h>
using namespace std;

vector<int> prevSmaller(vector<int> &A) {
    vector<int> ans(A.size(), 0);
    stack<int> s1, s2;
    
    for(int i=0; i<A.size(); i++){
        s1.push(i);
    }
    
    while(!s1.empty() || !s2.empty()){
        if(s2.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        
        else if(!s1.empty() && !s2.empty()){
            if(A[s1.top()] < A[s2.top()]){
                ans[s2.top()] = A[s1.top()];
                s2.pop();
            }
            else{
                s2.push(s1.top());
                s1.pop();
            }
        }
        
        else{
            while(!s2.empty()){
                ans[s2.top()] = -1;
                s2.pop();
            }
        }
    }
    
    return ans;
}
