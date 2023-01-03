// #include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<int,int> s;
        unordered_map<int,int> g;
        
        int b=0;int c=0;
        for(int i=0;i<secret.length();i++){
            if(secret[i]==guess[i]){
                b++;

            }
            else {
                s[secret[i]]++;
                g[guess[i]]++;
            }
        }
        for(auto i:g){
            c=c+min(s[i.first],i.second);
        }
        string st;
        st=st+to_string(b);
        st+='A';
        st+=to_string(c);
        st+='B';
        return st;

    }
};
/*
answer 
        unordered_map<char, int> s_map;
        unordered_map<char, int> g_map;
        int n = secret.size();
        int A = 0, B = 0;
        for (int i = 0; i < n; i++)
        {
            char s = secret[i], g = guess[i];
            if (s == g)
                A++;
            else
            {
                (s_map[g] > 0) ? s_map[g]--, B++ : g_map[g]++;
                (g_map[s] > 0) ? g_map[s]--, B++ : s_map[s]++; 
            }
        }
        return to_string(A) + "A" + to_string(B) + "B";;
*/
int main(){
    string s="1234";
    string g="0111"; 
    Solution ans;
    cout<<ans.getHint(s,g);
return 0;
}

//tc : o(n)
//sc : o(1)