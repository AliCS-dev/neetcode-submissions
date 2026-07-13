class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int rightmax= - 1;
        for(int i = arr.size() - 1; i >= 0; i--){
            int curr = arr[i];
            arr[i] = rightmax;
            rightmax = std::max(rightmax,curr);
            
        }
    return arr;
    }
};