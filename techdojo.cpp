#include<iostream>
using namespace std;
class airship
{
    protected:
    int passengers,cargo;
   public:


    void no_passengers()
    {
        passengers=50;
    }
    void no_cargos()
    {
        cargo=2;
    }
  virtual void show()
    {
        cout<<"passengers in AIRSHIP: "<<passengers<<endl;
        cout<<"cargo load:  "<<cargo<<endl;
    }

};
class airplane: public airship
{
protected:
    int passengers1,altitude;
public:
    void no_passengers1(int pa)
    {
        passengers1=pa;
    }
    void altitude1(int a)
    {
        altitude=a;
    }
    void show()
    {
        cout<<"passengers in Airplane: "<<passengers1<<endl;
        cout<<"altitude: "<<altitude<<endl;;
    }
};
class fighter: public airship
{
protected:
    int passengers2,speed;
public:
    void no_passengers2(int pf)
    {
        passengers2=pf;
    }
    void total_speed(int s)
    {
        speed=s;
    }
   void show()
    {
        cout<<"passengers in fighter: "<<passengers2<<endl;
        cout<<"speed: "<<speed<<endl;
    }
};

int main()
{
    airship *a,*a1;
    airplane ai;
    fighter f;

    a=&ai;
    a1=&f;

     a->no_passengers();
     a->no_cargos();
    ai.no_passengers1(50);
    ai.altitude1(1000);
   a->show();
   a1->no_passengers();
     a1->no_cargos();
    f.no_passengers2(10);
    f.total_speed(50000000);

    a1->show();


}
