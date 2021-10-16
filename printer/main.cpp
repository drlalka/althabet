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
array<string, 6> bukv;
    bukv[0]="  ________   ";
    bukv[1]=" ||-------|| ";
    bukv[2]=" ||       | )";
    bukv[3]=" ||======< < ";
    bukv[4]=" ||_______| )";
    bukv[5]=" ||_______|| ";
    return bukv;
}
array<string, 6> c()
{
array<string, 6> bukv;
    bukv[0]="  _________  ";
    bukv[1]=" | |_____  | ";
    bukv[2]=" | |     |_| ";
    bukv[3]=" | |      _  ";
    bukv[4]=" | |_____| | ";
    bukv[5]=" |_________| ";
    return bukv;
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
//symbol 6
//
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
//olya
array<string, 6> r()
{
 array<string, 6> bukv;
    bukv[0]="  _____  ";
    bukv[1]=" ||   || ";
    bukv[2]=" ||__ // ";
    bukv[3]=" || ||   ";
    bukv[4]=" ||   || ";
    bukv[5]=" ||   || ";
    return bukv;


}
//olya
array<string, 6> s()
{

}
//olya
array<string, 6> t()
{

}
//olya
array<string, 6> u()
{
array<string, 6> bukv;
    bukv[0]=" ||     || ";
    bukv[1]=" ||     || ";
    bukv[2]=" ||     || ";
    bukv[3]=" ||     || ";
    bukv[4]="  ||   ||  ";
    bukv[5]="   _____   ";
    return bukv;
}
//olya
array<string, 6> v()
{

}
//olya
array<string, 6> w()
{

}
//olya
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
//olya
array<string, 6> y()
{

}
array<string, 6> z()
//olya
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
 symbol A(a());
 mainscreen.add(A);
  symbol B(b());
 mainscreen.add(B);
  symbol C(c());
 mainscreen.add(C);
  symbol E(e());
   mainscreen.add(E);
  symbol L(l());
  mainscreen.add(L);
 symbol R(r());
 mainscreen.add(R);
   symbol U(u());
 mainscreen.add(U);
  symbol X(x());
  mainscreen.add(X);
 mainscreen.print();
    return 0;
}


