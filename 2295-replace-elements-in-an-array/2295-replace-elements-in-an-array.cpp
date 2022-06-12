class Solution {
public:
    vector<int> arrayChange(vector<int>& v, vector<vector<int>>& ops) {
        int a,b;
        map<int,int>mp;
		for(int i=0;i<v.size();i++){
			mp[v[i]]=i;
		}
		for(int i=0;i<ops.size();i++){
			auto it=mp.find(ops[i][0]);
			v[it->second]=ops[i][1];
			mp[ops[i][1]]=it->second;
		}
		return v;
    }
};