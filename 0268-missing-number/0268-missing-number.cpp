class Solution {
public:
    int missingNumber(vector<int>& A) {
        vector<int>frequency(A.size()+1,0);
        for(int i=0;i<A.size();i++){
             frequency[A[i]]++;
        }
        for(int i=0;i<=A.size();i++){
            if(frequency[i]==0)
            return i;
        }
    return -1;
    }
};