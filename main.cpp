#include <iostream>
#include "fibonacci-folge.h"

#include <array>

using namespace std;

int main(){

int x;
int i;
int a,b;

x=10;

for(i=0;i<=10;i++){
	a=fibonacci_folge_build(i);
	b=fibonacci_folge_build(i+1);

cout<<"i: "<<i;
cout<<"  a: "<<a;
cout<<"  b: "<<b;
cout<<"  a+b: "<<addieren(a,b);

}


//using array to build fibonacci-folge:
array<int,10> feld;

cout<<"feld.size(): "<<feld.size()<<endl;

for (i=0;i<10;i++){
	feld[i]=fibonacci_folge_build(i);
	cout<<"feld[  "<<i<<"  ]"<<feld[i]<<endl;
}

/*
for(auto i:feld){

	cout<<"feld[  "<<i<<"  ]"<<feld[i]<<endl;
}
*/
}
