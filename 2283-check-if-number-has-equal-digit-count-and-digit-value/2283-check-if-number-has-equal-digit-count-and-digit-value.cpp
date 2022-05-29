class Solution {
public:
    bool digitCount(string num) {
        int n=num.size();
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(num[j]-'0' == i)
                {
                    cnt++;
                }
            }
            if(cnt!=num[i]-'0')
                return false;
        }
        return true;
    }
};