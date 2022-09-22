class Solution {
public:
    string reverseWords(string s) {
        stack<char> st;
        string ans="";
        for(int i=0;i<=s.length();i++){
            if(s[i]==' ' || s[i]=='\0'){
                while(!st.empty()){
                    ans.push_back(st.top());
                    st.pop();
                }
                ans+=" ";
            }else{
                st.push(s[i]);
            }
        }
        return ans.substr(0,ans.length()-1);
    }
};