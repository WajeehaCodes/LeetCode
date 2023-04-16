bool isPalindrome(string s) {
    string res = "";
    for(int i=0; i<s.length(); i++) {
        if(s[i]>=97 && s[i]<=122) 
          res += s[i];
        else if(s[i]>=65 && s[i]<=90) {
          res += s[i]+32;
        } else if(s[i]>=48 && s[i]<=57) res += s[i];
    }
    string r = res;
    reverse(res.begin(), res.end());
    return (r==res);
}
