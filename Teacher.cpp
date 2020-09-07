#include "Teacher.h"


Teacher::Teacher(std::string a, std::string b){
	teacher_ID=a;
	teacher_Name=b;

}

void Teacher::setTeacher_ID(std::string a){
	teacher_ID=a;
}

std::string Teacher::getTeacher_ID(){
	return teacher_ID;
}

void Teacher::setTeacher_Name(std::string a){
	teacher_Name=a;
}

std::string Teacher::getTeacher_Name(){
	return teacher_Name;
}
