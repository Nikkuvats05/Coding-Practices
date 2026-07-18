class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int sr=0;
        int er=matrix.size()-1;
        int sc=0;
        int ec=matrix[0].size()-1;
       
        while(sc<=ec && sr<=er){
             int mid=matrix[sr][ec];
            if(target==mid){
                return true;
            }
            if(target<mid){
               ec= ec-1;
            }
            if(target>mid){
                sr=sr+1;
            }
        }
     return false;   
    }
};