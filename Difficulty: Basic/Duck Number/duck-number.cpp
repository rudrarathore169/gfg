bool check_duck(string num) {
    // code here
    if(num[0]=='0'){
        return false;
    }
    for(int i=1;i<num.size();i++){
       if(num[i]=='0'){
           return true;
       } 
    }
    return false;
}