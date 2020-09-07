#pragma once

#include <string>

class Course{

private:
std::string course_ID;
std::string course_Name;

public:
Course(std::string,std::string);
void setCourse_ID(std::string);
std::string getCourse_ID();
void setCourse_Name(std::string);
std::string getCourse_Name();


};
