class Solution {
public:
    int numberOfSteps (int num) {
        int count=0;
        while(num)
        {
            count++;
            if(num%2==0)
                num>>=1;
            else
                num--;
        }
        return count;
    }
};