#pragma once 

#include <string>

class ClassRoom{

private:
std::string room_ID;
std::string room_Name;

public:
ClassRoom(std::string,std::string);
void setRoom_ID(std::string);
std::string getRoom_ID();
void setRoom_Name(std::string);
std::string getRoom_Name();

};
