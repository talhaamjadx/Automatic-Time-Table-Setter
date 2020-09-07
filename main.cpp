#include "Slot.h"
#include "Course.h"
#include "Section.h"
#include "ClassRoom.h"
#include "Teacher.h"
#include "Chromosome.h"
#include "Population.h"
#include <iostream>
using namespace std;

int main(){

Teacher t("23","Atif");
Course c("CS-2001","Theory Of Automata");
ClassRoom cr("101","Room 1");
Section s("1","A");

Slot slot("1",&t,&c,&cr,&s);

Teacher t2("24","Hafeez");
Course c2("CS-2001","Theory Of Automata");
ClassRoom cr2("102","Room 2");
Section s2("2","B");

Slot slot2("2",&t2,&c2,&cr2,&s2);

Slot slot3("3",&t2,&c2,&cr2,&s2);

list<Slot*> l;
list<Slot*> l2;
l.push_back(&slot3);
l.push_back(&slot);
l2.push_back(&slot2);
l2.push_back(&slot);
Chromosome ch;
ch.setChromosome_ID("1");
Chromosome ch2;
ch2.setChromosome_ID("2");
ch.addList(l);
ch2.addList(l2);
Population p;
p.addToPopulation(ch);
p.addToPopulation(ch2);
p.setCrossoverPoint(1);
//list<Chromosome> z;
//z=p.getPopulation();
//Chromosome ch2=z.front();
//ch2.printMapInfo();
std::list<Chromosome> q=p.getFittestChromosomes();
std::map<Slot*,int> map=p.performCrossover(q);
std::map<Slot*,int> map2=p.mutation(map);
p.addOffspring(map2);
}




















