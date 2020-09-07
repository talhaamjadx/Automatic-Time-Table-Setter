#pragma once
#include "Chromosome.h"
#include <algorithm>

class Population{

private:

std::list<Chromosome> List;
int crossoverPoint;	

public:

void setCrossoverPoint(int);
int getCrossoverPoint();
void addToPopulation(Chromosome);

std::list<Chromosome> getPopulation();
std::list<Chromosome> getFittestChromosomes();
std::map<Slot*,int> performCrossover(std::list<Chromosome> );
void addOffspring(std::map<Slot*,int> );
std::map<Slot*,int> mutation(std::map<Slot*,int>);
};

