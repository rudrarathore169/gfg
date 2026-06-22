class Solution {
  public:
  static bool cmp(pair<int,pair<int,int>>&a, pair<int,pair<int,int>>&b){
      
       if(a.second.second == b.second.second)
        return a.first < b.first;  

    return a.second.second < b.second.second;
  }
    vector<int> maxMeetings(vector<int> &s, vector<int> &f) {
        // code here
        vector<pair<int,pair<int,int>>>meetings;
        for(int i=0;i<s.size();i++){
            meetings.push_back({i,{s[i],f[i]}});
        }
        
        sort(meetings.begin(),meetings.end(),cmp);
        
        vector<int>ans;
        int ansEnd = meetings[0].second.second;
        ans.push_back(meetings[0].first+1);
        for(int i=1;i<meetings.size();i++){
            if(meetings[i].second.first>ansEnd){
                ans.push_back(meetings[i].first+1);
                ansEnd = meetings[i].second.second;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};