//Grid World, LEGGO!!!

#include "stdafx.h"
#include <cmath>
#include <iostream>
#include <vector>
#include <random>
#include <assert.h>
#include <stdlib.h>
#include <time.h>

#define NRAND (double) (rand()/RAND_MAX)
#define max 10
class domain {
	//define the dimensions of domain, make it easily changable
public:
	int xmin = 0;
	int xmax = max;
	int ymin = 0;
	int ymax = max;
	//int **gridword;
	
	//position of the goal in the domain
	int Gx = 8;
	int Gy = 8;
	
};

class agent {
	//origial position of Agent in domain
public:
	int Ax = 2;
	int Ay = 2;
	void bump();

	//state, not nessasary but could be useful for project Beta
};

void agent::bump(agent* pA,domain* pG) { //
	//use if statement to deal with when the agent leaves the domain
	if(pG->xmax<pA->Ax||pG->xmin>pA->Ax||pG->ymax<pA->Ay||pG->ymin>pA->Ay){
		for (int i = 0; i < 2; i++) {
			Ax(i) = Ax(i - 1);
			Ay(i) = Ay(i - 1);

	}
	}
}

void move(agent* pL, domain* pG) {
	//write a program too move the agent within the domain

}
int main()
{
    return 0;
}

