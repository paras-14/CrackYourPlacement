//   vector<string>ans;
//     void fn(int o,int c,string s){
//         if(o<0 || c<0 || c<o)return;
//         if(c==0 && o==0)ans.push_back(s);
//         fn(o-1,c,s+'(');
//         fn(o,c-1,s+')');
//     }
//     vector<string> generateParenthesis(int n) {
//         fn(n,n,"");
//         return ans;
//     }