class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        
        for(int i = 0; i<strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            if(mp.find(temp) == mp.end()){
                vector<string> temp_vec;
                temp_vec.push_back(strs[i]);
                mp.insert(make_pair(temp, temp_vec));
            }
            else{
                vector<string> temp_vec(mp[temp]);  //copy the already existing vector
                temp_vec.push_back(strs[i]);
                mp[temp] = temp_vec;
            }
        }
        
        for(auto it = mp.begin(); it != mp.end(); it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};