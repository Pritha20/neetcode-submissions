class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        int n1 =s.length();
        int n2 =t.length();
        if (n1!=n2) return false;
        for(int i=0;i<n1;i++)
        {
            freq1[s[i]]++;
        }
        for(int i=0;i<n2;i++)
        {
            freq2[t[i]]++;
        }
        for(auto i=freq1.begin();i!=freq1.end();i++)
        {
            char ch = i->first;
            if(freq1[ch]!=freq2[ch]) return false;
        }
        return true;


        
    }
};
