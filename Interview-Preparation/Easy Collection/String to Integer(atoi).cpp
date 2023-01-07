class Solution {
public:
    int myAtoi(string s) {
        if(s.size()==0) return 0;

        int i=0;
        while(s[i]==' ')
        {
            i++;
        }
        
        int sign=1;
        if(s[i]=='+' || s[i]=='-')
        {
            sign=(s[i]=='+')? +1:-1;i++;
        }
        
        long long value=0;
        int max=INT_MAX;
        int min=INT_MIN;
        
        for(;i<s.size();i++)
        {
            if(!isdigit(s[i])) break;
            value=value*10+(s[i]-'0');
            if(value>=max)
            {
                break;
            }
        }
        value=value*sign;
    
        if(value<min)
        { return min; }
        else if(value>max)
        { return max; }
        else return value;
         
    }
};