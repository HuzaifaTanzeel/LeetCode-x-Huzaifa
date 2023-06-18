class Solution {
public:

    int value(char c){
        if(c=='I')return 1;
        else if(c=='V') return 5;
        else if(c=='X') return 10;
        else if(c=='L') return 50;
        else if(c=='C') return 100;
        else if(c=='D') return 500;
        else return 1000;
    }
    int romanToInt(string s) {
        int answer=0;
        int temp=0;
        for(int i=0;i<s.length();i++){
            if(value(s[i])>=value(s[i+1]) && i+1<s.length()){
                answer+=value(s[i]);
            }
            else if(value(s[i])<value(s[i+1]) && i+1<s.length()){
                temp=value(s[i+1])-value(s[i]);
                answer+=temp;
                i++;
            }
            else if(i+1==s.length())
            {
            	answer+=value(s[i]);
			}
        }
        return answer;
    }
};