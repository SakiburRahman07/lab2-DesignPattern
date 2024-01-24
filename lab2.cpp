#include<bits/stdc++.h>
using namespace std;

class shape{
public:
 virtual void draw()=0;
};

class rectangle : public shape{
    public:
    void draw()
    {
        cout<<"Inside Rectangle"<<endl;
    }
};

class square : public shape{
public:
    void draw()
    {
        cout<<"Inside Draw"<<endl;
    }
};

int main()
{

}
