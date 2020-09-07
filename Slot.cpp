#include "Slot.h"
#include <iostream>

Slot::Slot(std::string id,Teacher *a,Course *b,ClassRoom *c,Section *d){
	slotID=id;
	teacher=a;
	course=b;
	classroom=c;
	section=d;
}

void Slot::setTeacher(Teacher *a){
	teacher=a;
}

Teacher* Slot::getTeacher(){
	return teacher;
}

void Slot::setCourse(Course *a){
	course=a;
}

Course* Slot::getCourse(){
	return course;
}

void Slot::setClassRoom(ClassRoom *a){
	classroom=a;
}

ClassRoom* Slot::getClassRoom(){
	return classroom;
}

void Slot::setSection(Section *a){
	section=a;
}

Section* Slot::getSection(){
	return section;
}

std::string Slot::getSlotInfo(){
	return "Teacher Name: "+getTeacher()->getTeacher_Name()+"\n"+"Teacher ID: "+getTeacher()->getTeacher_ID()+"\n"+"Course Name: "+getCourse()->getCourse_Name()+"\n"+"Course ID: "+getCourse()->getCourse_ID()+"\n"+"Section Name: "+getSection()->getSection_Name()+"\n"+"Section ID: "+getSection()->getSection_ID()+"\n"+"Room Name: "+getClassRoom()->getRoom_Name()+"\n"+"Room ID: "+getClassRoom()->getRoom_ID()+"\n";

}

void Slot::addToList(Slot* a){
 	List.push_back(a);
}

std::list<Slot*> Slot::getList(){
	return List;
}
















