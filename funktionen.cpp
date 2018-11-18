#include <iostream>

#include "fibonacci-folge.h"

int addieren(int x, int y){

	return(x+y);
}

int fibonacci_folge_build(int x){


	if(x==0)
	{
	  return 0;
	}else if(x==1)
	{
	  return 1;
	}else
	{
	  return fibonacci_folge_build(x-1)+fibonacci_folge_build(x-2);
	}


}
