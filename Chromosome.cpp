#include "Chromosome.h"

std::map<Slot*,int> Chromosome::getHashMap(){
	return Hmap;
}

void Chromosome::setChromosome_ID(std::string a){
	chromosomeID=a;
}

std::string Chromosome::getChromosome_ID(){
	return chromosomeID;
}

void Chromosome::addList(std::list<Slot*> a){
	if(chromosome.size()<=300){
		chromosome.push_back(a);
		std::list<Slot*>::iterator it;
		for(it=a.begin();it!=a.end();it++){
		Hmap[*it]=position;
		}
		position++;
	}
	else
		std::cout<<"Error:Vector Limit Exceeded\n";
}

void Chromosome::print(){
	auto i=chromosome.begin();
	std::list<Slot*> a;
	a=*i;
	Slot *z=a.front();
 	std::cout<<z->getSlotInfo();	
}

int Chromosome::getFitnessScore(){
	fitnessScore=0;
	for(auto i=chromosome.begin();i!=chromosome.end();i++){
	std::list<Slot*> a=*i;
	std::list<Slot*>::iterator it;
		for(it=a.begin();it!=a.end();it++){
		Slot *b=*it;
		std::list<Slot*>::iterator it2;
			for(it2=a.begin();it2!=a.end();it2++){			
				if(*it==*it2){
					continue;
				}
				Slot *c=*it2;
				if(c->getTeacher()->getTeacher_ID()!=b->getTeacher()->getTeacher_ID()){
					fitnessScore++;		
				}
				if(c->getSection()->getSection_ID()!=b->getSection()->getSection_ID()){
					fitnessScore++;		
				}
				if(c->getClassRoom()->getRoom_ID()!=b->getClassRoom()->getRoom_ID()){
					fitnessScore++;		
				}
			}
		}
		if(a.size()==1){
			fitnessScore+=4;
		}
	}
	return fitnessScore;	
}



void Chromosome::printMapInfo(){
	
for(auto i=chromosome.begin();i!=chromosome.end();i++){
	std::list<Slot*> a=*i;
	std::list<Slot*>::iterator it;
		for(it=a.begin();it!=a.end();it++){
			std::cout<<Hmap[*it]<<"\n";
		}
}
}








