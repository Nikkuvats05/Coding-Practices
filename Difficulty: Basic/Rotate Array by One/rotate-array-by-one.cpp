class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        vector<int>temp(arr.size());
        temp[0]=arr[arr.size()-1];
        
        for(int i=1; i<temp.size(); i++){
            temp[i]=arr[i-1];
        }
       arr=temp;
        
    }
};