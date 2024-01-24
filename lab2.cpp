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

class shapefactory{
    static shapefactory *ins;
    shapefactory(){}
public:
    static shapefactory* getinstance()
    {
        if(ins==nullptr)
        {
            ins=new shapefactory();
        }
        return shapefactory();
    }

    shape* getshape(string shapetype)
    {
      if(shapetype==nullptr) return null;
      else if(shapetype=="rectangle")
      {
          return new rectangle();
      }
      else if(shapetype=="square")
      {
          return new square();
      }
      else return null;
    }
};

int main()
{

}
