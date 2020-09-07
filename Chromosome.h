#pragma once

#include <iostream>
#include "Slot.h"
#include <vector>
#include <list>
#include <iterator>
#include <map>

class Chromosome{

private:
int position=0;
int fitnessScore=0;
std::vector<std::list<Slot*>> chromosome;
std::map<Slot*,int> Hmap;
std::string chromosomeID;

public:
std::map<Slot*,int> getHashMap();
void setChromosome_ID(std::string);
std::string getChromosome_ID();
void addList(std::list<Slot*>);
void print();
int getFitnessScore();
void printMapInfo();
};
