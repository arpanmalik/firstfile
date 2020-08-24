#include <iostream>

using namespace std;

class complex
{
private:
    int a,b;
public:
    complex(int x,int y){
        a=x; b=y;
        cout<<a<<" "<<b<<endl;
    }
    complex(int k)
    {
        a=k;
        cout<<a<<endl;
    }
    complex()
    {
        a=0; b=0;
        cout<<a<<" "<<b;
    }
    complex(complex &c)
    {
      a=c.a;
      b=c.b;
      cout<<a<<" "<<b<<endl;
    }

};
int main()
{
    complex c1(3,4),c2(5),c3;
    complex c4(c1);

    return 0;
}
