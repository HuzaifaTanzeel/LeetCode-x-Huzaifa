class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        int sum=0;
        int i=digits.size()-1;
        vector<int> answer;
        while(i>=0)
        {
            if(i==digits.size()-1){
                sum=digits[i]+1+carry;
            }
            else{
                sum=digits[i]+carry;
            }
            
            carry=sum/10;
            sum=sum%10;

            answer.insert(answer.begin(),sum);
            i--;
            
        }
        if(carry!=0){
            answer.insert(answer.begin(),carry);
        }
        return answer;
    }
};