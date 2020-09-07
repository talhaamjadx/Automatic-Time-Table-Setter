#pragma once 

#include <string>

class Teacher{

private:

std::string teacher_ID;
std::string teacher_Name;

public:

Teacher(std::string,std::string);
void setTeacher_ID(std::string);
std::string getTeacher_ID();
void setTeacher_Name(std::string);
std::string getTeacher_Name();



};
