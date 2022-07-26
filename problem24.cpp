#include <iostream>
using namespace std;

class Solution
{
    public:
    float s, a, b, c;
    float final_price;
    float temp;
    void problem()
    {
        s = a = b = c = 0;
        temp = abs(c);
        cin>>s>>a>>b>>c;
        final_price = s;
        if(c > 0)
        {
            //means stock price will increase
            final_price +=  (c/100.0)*s;
        }
        else if(c < 0)
        {
            
            final_price -= (c/100.0)*s;
        }
        
        //getting the result
        if(final_price >= a && final_price <= b)
        {
            cout<<"Yes"<<endl;
            
        }
        else
        {
            cout<<"No"<<endl;
            
        }

        
    }

};


int main()
{
    Solution o1;
    int T;cin>>T;
    while(T--)
    {
        o1.problem();    
    }
    return 0;
}
