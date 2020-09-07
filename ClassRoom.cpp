#include "ClassRoom.h"

ClassRoom::ClassRoom(std::string a,std::string b){
	room_ID=a;
	room_Name=b;
}

void ClassRoom::setRoom_ID(std::string a){
	room_ID=a;	
}

std::string ClassRoom::getRoom_ID(){
	return room_ID;
}

void ClassRoom::setRoom_Name(std::string a){
	room_Name=a;
}

std::string ClassRoom::getRoom_Name(){
	return room_Name;
}

