#include <iostream>
#include <array>

using namespace std;
array<string, 6> a()
{
    array<string, 6> bukv;
    bukv[0]="     ||      ";
    bukv[1]="    ||||     ";
    bukv[2]="   ||  ||    ";
    bukv[3]="  ||____||   ";
    bukv[4]=" ||------||  ";
    bukv[5]="||        || ";
    return bukv;
}
array<string, 6> b()
{

}
array<string, 6> c()
{

}
array<string, 6> d()
{

}

array<string, 6> e()
{
    array<string, 6> bukv;
bukv[0]="[||||||] ";
bukv[1]="[|       ";
bukv[2]="[|____   ";
bukv[3]="[|----   ";
bukv[4]="[|       ";
bukv[5]="[||||||] ";
return bukv;
}
array<string, 6> f()
{

}
array<string, 6> g()
{

}
array<string, 6> h()
{

}
array<string, 6> i()
{

}
array<string, 6> j()
{

}
array<string, 6> k()
{

}
array<string, 6> l()
{
    array<string, 6> bukv;
    bukv[0]=" __     ";
    bukv[1]=" ||     ";
    bukv[2]=" ||     ";
    bukv[3]=" ||     ";
    bukv[4]=" ||  -- ";
    bukv[5]=" |||||| ";
    return bukv;
}
array<string, 6> m()
{

}
array<string, 6> o()
{

}
array<string, 6> p()
{

}
array<string, 6> q()
{

}
array<string, 6> r()
{

}
array<string, 6> s()
{

}
array<string, 6> t()
{

}
array<string, 6> u()
{

}
array<string, 6> v()
{
array<string, 6> bukv;
    bukv[0]="||       || ";
    bukv[1]="||       || ";
    bukv[2]=" ||     ||  ";
    bukv[3]=" ||     ||  ";
    bukv[4]="  ||   ||   ";
    bukv[5]="    |||     ";
return bukv;


}
array<string, 6> w()
{

}
array<string, 6> x()
{
    array<string, 6> bukv;
bukv[0]="__    __ ";
bukv[1]=" ||  ||  ";
bukv[2]="  ||||   ";
bukv[3]="   ||    ";
bukv[4]="  ||||   ";
bukv[5]="_||  ||_ ";
return bukv;
}
array<string, 6> y()
{

}
array<string, 6> z()
{

}

struct symbol
{
private:
    array<string, 6> graph;
public:
    symbol ( array<string, 6> let)
    {
        graph[0]=let[0];
        graph[1]=let[1];
        graph[2]=let[2];
        graph[3]=let[3];
        graph[4]=let[4];
        graph[5]=let[5];
    }
    string getStr(int i)
    {
        return graph[i];
    }
};
struct output
{
private:
    array<string, 6> graph;
public:
    void add(symbol added)
    {
        for(int i=0; i<6; i++)
            graph[i]=graph[i]+added.getStr(i);
    }
    void print()
    {
        for(auto i:graph)
            cout<<i<<endl;
    }
};
output mainscreen;
int main()
{

    return 0;
}


