class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        d = d % arr.size();
         vector <int> temp(arr.size());
         for(int i=0; i<arr.size(); i++){
             temp[(i-d+arr.size())%arr.size()]=arr[i];
         }
         arr= temp;
    }
};