class Solution {
public:
    int sosq(int n){
        int sos = 0;
        while(n > 0){
            sos = sos + (n%10)*(n%10);
            n = n/10;
        }
        return sos;
    }
    bool isHappy(int n) {
        //METHOD1
        int res = sosq(n);
        while(res != 1){
            res = sosq(res);
            //APPARENTLY UNHAPPY NUMBERS' SEQ ALWAYS CONTAINS 4
            if(res == 4){
                return false;
            }
           // cout<<res<<endl;
        }
        return true;
        //METHOD2
        set<int> st1;
        while(n>1 && (st1.find(n) == st1.end())){
            st1.insert(n);
            n = sosq(n);
        }
        if(n == 1){
            return true;
        }
        return false;
        //METHOD3
        int slow, fast;
        slow = fast = n;
        do{
            slow = sosq(slow);
            fast = sosq(sosq(fast));
            cout<<slow<<" "<<fast<<endl;
        }while(slow != fast);
        
        return (slow == 1);
    }
};