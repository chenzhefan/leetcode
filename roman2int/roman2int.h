class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> trMap=
		{
			{'M',1000},
			{'D',500},
			{'C',100},
			{'L',50},
			{'X',10},
			{'V',5},
			{'I',1},
		};
		int res=0;
		int pre=0;
		for(int i=s.length()-1;i>=0;i--)
		{
			int cur=trMap[s[i]];
			if(cur>=pre)
			{
				res+=cur;
			}
			else
			{
				res-=cur;
			}
			pre=cur;
		}
		return res;
    }
};