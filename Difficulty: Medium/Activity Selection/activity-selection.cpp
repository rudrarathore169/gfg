class Solution {
  public:
    static bool cmp(pair<int,int>a,pair<int,int>b){
        return a.second<b.second;
    }
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        vector<pair<int,int>>meetings;
        
        for(int i=0;i<start.size();i++){
            meetings.push_back({start[i],finish[i]});
        }
        
        sort(meetings.begin(),meetings.end(),cmp);
        int ansEnd = meetings[0].second;
        int cnt=1;
        
        for(int i=1;i<meetings.size();i++){
            if(ansEnd<meetings[i].first){
                cnt++;
                ansEnd = meetings[i].second;
            }
        }
        return cnt;
    }
};