class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        string str=to_string(x);
        string check=str;
        int k=0;
        for(int i=str.length()-1;i>=0;i--)
        {
            check[k]=str[i];
            k++;
        }
        if(check==str){
            return true;
        }
        else{
            return false;
        }

    }
};