string longestCommonPrefix(vector<string> &strs) {
     string res;
	 int len=strs.size();
	 if(len==0)
		 return res;
	 
	 for(int pos=0;pos<strs[0].size();pos++)
	 {
		 for(int strnum=1;strnum<len;strnum++)
		 {
			 if(strs[0][pos]!=strs[strnum][pos] || pos==strs[strnum].size())
			 {
				 return res;
			 }	 
		 }
		 res.push_back(strs[0][pos]);
	 }
	return res;
	 
    }