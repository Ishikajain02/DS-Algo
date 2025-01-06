class Solution {
public:
    vector<int> minOperations(string boxes) {
        //all the ones far away from that particular index
        //store index of ones
        vector<int>indices;
        for(int i=0;i<boxes.size();i++){
          if(boxes[i]=='1')  indices.push_back(i);
        }
        vector<int>ans;
        //we can simply use prefixsum on the indices

        for(int i=0;i<boxes.size();i++){
           int ansi=0;
           for(int j=0;j<indices.size();j++){
            ansi+=abs(i-indices[j]);
           }
           ans.push_back(ansi);
        }
        return ans;
    }
};