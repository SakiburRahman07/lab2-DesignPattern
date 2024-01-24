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
        cout<<"Inside square"<<endl;
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
        return nullptr;
    }

    shape* getshape(string shapetype)
    {

      if(shapetype=="rectangle")
      {
          return new rectangle();
      }
      else if(shapetype=="square")
      {
          return new square();
      }
      else return nullptr;
    }
};

shapefactory* shapefactory::ins=nullptr;

int main()
{
    shapefactory* shapefactory1 = shapefactory::getinstance();


    shape *shape1 = shapefactory1->getshape("rectangle");
    shape1->draw();

    shape *shape2 = shapefactory1->getshape("square");
    shape2->draw();

}
