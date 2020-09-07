#include "Course.h"

Course::Course(std::string a,std::string b){
	course_ID=a;
	course_Name=b;
}

void Course::setCourse_ID(std::string a){
	course_ID=a;
}

std::string Course::getCourse_ID(){
	return course_ID;
}

void Course::setCourse_Name(std::string a){
	course_Name=a;
}

std::string Course::getCourse_Name(){
	return course_Name;
}

