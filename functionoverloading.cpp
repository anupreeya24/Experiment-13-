#include <iostream>
using namespace std;
class addition
{
    public:
    int sum(int a, int b)
    {
        return a+b;
    }
    int sum(int a, int b,int c)
    {
        return a+b+c;
    }
};
int main()
{
    addition obj;
    int a,b,c;
    
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<obj.sum(a,b)<<endl;
    
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<obj.sum(a,b,c);
}
