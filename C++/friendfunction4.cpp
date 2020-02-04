#include<iostream>
using namespace std;

const int IDLE=0;
const int INSUE=1;
class C2;

class C1
{
    int state;

public:
    void set_status(int state);
    int idle(C2 b);
};

class C2
{
    int state;
public:
    void set_status(int state);
    friend int C1::idle(C2 b);
};

void C1::set_status(int status)
{
    state=status;
}
void C2::set_status(int status)
{
    state=status;
}
int C1::idle(C2 b)
{
    if(state||b.state)
        return 0;
    else
        return 1;
}

int main()
{
    C1 x;
    C2 y;

    x.set_status(IDLE);
    y.set_status(IDLE);

      if(x.idle(y))
        cout<<"Screen can be Used"<<endl;
    else
        cout<<"In Used";

    x.set_status(INSUE);

    if(x.idle(y))
        cout<<"Screen can be used";
    else
        cout<<"In Used";


    return 0;
}
