#include "Population.h"

void Population::addToPopulation(Chromosome ch){
	List.push_back(ch);
}

std::list<Chromosome> Population::getPopulation(){
	return List;
}

void Population::setCrossoverPoint(int a){
	crossoverPoint=a;
}

int Population::getCrossoverPoint(){
	return crossoverPoint;
}

std::list<Chromosome> Population::getFittestChromosomes(){
	int a[List.size()];
	int b=0;
	if(List.size()>1){
		std::list<Chromosome>::iterator it;
		for(it=List.begin();it!=List.end();it++){
			Chromosome ch=*it;
			a[b]=ch.getFitnessScore();
			b++;
		}
		int n = sizeof(a)/sizeof(a[0]); 
  		std::sort(a, a+n); 
		std::list<Chromosome> arr;
   		for(it=List.begin();it!=List.end();it++){
			Chromosome ch=*it;
			if(ch.getFitnessScore()==a[0] || ch.getFitnessScore()==a[1])
				arr.push_back(ch);
		}
		return arr;
		}
	else{
		std::cout<<"Not enough chromosomes in the population for crossover\n";
		return {};
	}
}

std::map<Slot*,int> Population::performCrossover(std::list<Chromosome> q){
	 
	Chromosome a=q.front();
	Chromosome b=q.back();
	Slot *s;
	int count=0;
	int c=getCrossoverPoint();
	std::map<Slot*,int> map1=a.getHashMap();
	std::map<Slot*,int> map2=b.getHashMap();
	std::map<Slot*,int> map3;
	std::map<Slot*,int>::iterator it;
	std::map<Slot*,int>::iterator it2;
	for(it=map1.begin();it!=map1.end();it++){
		if(count==c){
			s=it->first;
			break;
		}
		count++;
	}
	it2=map1.find(s);
	for(it=map1.begin();it->first!=it2->first;it++){
		map3[it->first]=it->second;
	}

	count=0;
	for(it=map2.begin();it!=map2.end();it++){
		if(count==c){
			s=it->first;
			break;
		}
		count++;
	}
	
	for(it=map2.find(s);it!=map2.end();it++){
		map3[it->first]=it->second;
	}
	
	return map3;
}

std::map<Slot*,int> Population::mutation(std::map<Slot*,int> a){
	int position=0;
	std::map<Slot*,int>::iterator it;
	std::map<Slot*,int> Map;
	for(it=a.begin();it!=a.end();it++){
		if(Map.size()<a.size()){
			Map[it->first]=position;
			position++;
		}
	}
	return Map;
}

void Population::addOffspring(std::map<Slot*,int> map){
	Chromosome ch;
	std::map<Slot*,int>::iterator it;
	std::list<Slot*> l;
	int size=0;
	for(it=map.begin();it!=map.end();it++){
		if(it->second==size)
			l.push_back(it->first);
		else{
			ch.addList(l);
			l.clear();
			size++;
			it--;
		}
	}
	if(!(l.empty()))
		ch.addList(l);

	
	std::list<Chromosome>::iterator it2;

	for(it2=List.begin();it2!=List.end();it2++){	
		if(ch.getFitnessScore()>(*it2).getFitnessScore()){
			List.push_back(ch);
			break;
		}
		else
			std::cout<<"Chromosome not fitter\n";
	}
	for(it2=List.begin();it2!=List.end();it2++){	
		std::cout<<(*it2).getFitnessScore()<<"\n";
}
	
}










