class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int check=0;
        for(int i=0;i<s.size();i++)
        {
            check=0;
            
            for (int j=0;j<t.size();j++)
            {
                if (s[i] == t[j])
                {
                    s.erase(s.begin()+i);
                    t.erase(t.begin()+j);
                    check = 1;
                    i--;
                    break;
                }
            }
            if (check==0) return false;
        }
        if (s==t && s=="") return true;
        return false;
        
    }
};