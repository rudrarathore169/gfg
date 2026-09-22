class Solution {
  public:
    bool solve(string a, string b){
        
        int j=0;
        for(int i=0;i<b.length();i++){
            if(j<a.length() && a[j]==b[i]){
                j++;
            }
        }
        
        if(j==a.length()){
            return true;
        }
        return false;
    }
    string findLongestWord(const string &s,const vector<string> &d) {
        // code here
        auto cmp = [](const string& a,const string& b) {
            if (a.length() == b.length())
                return a > b;  
            return a.length() < b.length(); 
        };
        priority_queue<string, vector<string>, decltype(cmp)> pq(cmp);
        
        
        for(int i=0;i<d.size();i++){
            pq.push(d[i]);
        }
        
        while(!pq.empty()){
            if(solve(pq.top(),s)){
                return pq.top();
            }
            pq.pop();
        }
        return "";
    }
};