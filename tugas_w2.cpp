#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i;
    std::right;
    std::cout<<"Masukan data matriks baris 1:";
    std::cin>>a>>b>>c;
    std::cout<<"Masukan data matriks baris 2:";
    std::cin>>d>>e>>f;
    std::cout<<"Masukan data matriks baris 3:";
    std::cin>>g>>h>>i;

    std::cout<<setw(0)<<a<<setw(5)<<b<<setw(5)<<c<<std::endl;
    std::cout<<setw(0)<<d<<setw(5)<<e<<setw(5)<<f<<std::endl;
    std::cout<<setw(0)<<g<<setw(5)<<h<<setw(5)<<i<<std::endl;

    return 0;

}
