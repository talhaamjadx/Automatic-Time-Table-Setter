#include "Section.h"

Section::Section(std::string a,std::string b){
	section_ID=a;
	section_Name=b;
}


void Section::setSection_ID(std::string a){
	section_ID=a;
}

std::string Section::getSection_ID(){
	return section_ID;
}

void Section::setSection_Name(std::string a){
	section_Name=a;
}

std::string Section::getSection_Name(){
	return section_Name;
}
