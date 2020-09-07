#pragma once

#include <string>

class Section{

private:
std::string section_ID;
std::string section_Name;

public:
Section(std::string,std::string);
void setSection_ID(std::string);
std::string getSection_ID();
void setSection_Name(std::string);
std::string getSection_Name();

};
