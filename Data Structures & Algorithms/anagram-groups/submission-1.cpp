class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ans;

        // Step 1: make sorted copy
        vector<string> sorted = strs;
        for (string &s : sorted) {
            sort(s.begin(), s.end());
        }

        // Step 2: grouping
        vector<bool> used(n, false);

        for (int i = 0; i < n; i++) {
            if (used[i]) continue;

            vector<string> temp;
            temp.push_back(strs[i]);
            used[i] = true;

            for (int j = i + 1; j < n; j++) {
                if (sorted[i] == sorted[j]) {
                    temp.push_back(strs[j]);
                    used[j] = true;
                }
            }

            ans.push_back(temp);
        }

        return ans;  // ✅ IMPORTANT
    }
};

// vector<vector<string>>ans;
        // int n=strs.size();
        // if(n==1){
        //     ans.push_back({strs[0]});
        // }
        // for(string str : strs){
        //     sort(str.begin(),str.end());
        //     }
        // }
        
        // for(int i=0;i<n;i++){
        //     vector<string>temp;
        //     for(int j=i;j<n;j++){
        //         if(strs[i]==strs[j]){
        //             temp.push_back(strs[j]);
        //         }
        //     }
        //     ans.push_back(temp); 

        // }
        // return ans;
