#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& token) {
        stack<int> s;
        for(int i=0;i<token.size();i++){
            if(token[i]=="+" || token[i]=="-" || token[i]=="*" || token[i]=="/" ){
                int a=s.top();
                s.pop();
                int b=s.top();   
                s.pop();  
                if(token[i]=="+"){
                    s.push(a+b);
                }
                if(token[i]=="-"){
                    s.push(b-a);
                }
                if(token[i]=="*"){
                    s.push(a*b);
                }
                if(token[i]=="/"){
                    s.push(b/a);
                } 
            }
            else{
                s.push(stoi(token[i]));
            }
        }
        return s.top();
    }
};
int main(){
    // vector<string> tokens = {"2","1","+","3","*"};
   vector<string> tokens = {"4","13","5","/","+"};
    Solution s;
    cout<<s.evalRPN(tokens);

return 0;
}