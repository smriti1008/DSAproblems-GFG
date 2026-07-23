class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        vector <bool> alpha(26, 0);
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A'&& s[i]<='Z')
            {
            int index = s[i]-'A';
            alpha[index]=1;
            }
            else if(s[i]>='a'&& s[i]<='z')
            {
            int index = s[i]-'a';
            alpha[index]=1;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(alpha[i]==0)
            return false;
        }
        return true;
    }
};