class Solution {
public:
    int sum(string currNum,int start,int end){
        int ans=0;
        for(int i=start;i<end;i++){
            ans+=currNum[i];
        }
        return ans;
    }

    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++){
            string currNum=to_string(i);
            int firstHalf=0,secondHalf=0;
            if(currNum.length() % 2 == 0){
                firstHalf=sum(currNum,0,currNum.length()/2);
                secondHalf=sum(currNum,currNum.length()/2,currNum.length());
                if(firstHalf==secondHalf){
                    ans++;
                }
            }
        }
        return ans;
    }
};