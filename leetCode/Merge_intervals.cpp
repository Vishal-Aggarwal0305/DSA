class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==1){
            return intervals;
        }
        vector<vector<int>>ret;
        sort(intervals.begin(),intervals.end());
        int firstInterval=intervals[0][0];
        int lastInterval=intervals[0][1];
        for(auto a=1; a<intervals.size();a++){
           if(lastInterval>=intervals[a][0]){
               if(lastInterval<intervals[a][1]){
                    lastInterval=intervals[a][1];
               }
           }
            else{
                ret.push_back({firstInterval,lastInterval});
                firstInterval=intervals[a][0];
                lastInterval=intervals[a][1];
            }
        }
        ret.push_back({firstInterval,lastInterval});
        return ret;
    }
};
