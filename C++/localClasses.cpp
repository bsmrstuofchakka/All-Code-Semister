#include<iostream>
using namespace std;
void f();

int main()
{
    f();
    return 0;
}

void f()
{
    class myclass
    {
    private:
        int i;
    public:
        void put_i(int n)
        {
            i=n;
        }
        int get_i()
        {
            return i;
        }
    } ob;


    ob.put_i(10);
    cout<<ob.get_i();
}
