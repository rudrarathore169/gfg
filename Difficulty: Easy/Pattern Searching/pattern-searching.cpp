class Solution {
  public:
    bool check(string text, string pat, int k){
        for(int i = 0; i < pat.length(); i++){
            if(text[k + i] != pat[i]){
                return false;
            }
        }
        return true;
    }

    int search(string text, string pat) {
        int n = text.length();
        int m = pat.length();

        if(m > n) return 0;

        for(int i = 0; i <= n - m; i++){
            if(text[i] == pat[0]){
                if(check(text, pat, i)){
                    return 1;
                }
            }
        }
        return 0;
    }
};