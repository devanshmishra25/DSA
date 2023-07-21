/*The steps are as follows:

First, we will declare a map.

Now, using a loop we will store the elements of the array along with their frequency in the map data structure.

Using another loop we will iterate over the map, and try to find the element for which the frequency is 1, and finally, we will return that particular element.*/

class Solution {
public:
    int singleNumber(vector<int>& arr) {
        
        int n = arr.size();
        map<int, int> mpp;
        for(int  i = 0; i<n; i++){
            mpp[arr[i]]++;
            
        }
        
        for(auto it: mpp){
            if(it.second == 1)
                return it.first;
        }
        
        return -1;
        
    }
};