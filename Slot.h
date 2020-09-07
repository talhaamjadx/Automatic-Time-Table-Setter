#pragma once

#include "Teacher.h"
#include "Course.h"
#include "ClassRoom.h"
#include "Section.h"
#include <string>
#include <list>
#include <iterator>

class Slot{

private:
std::string slotID;
Teacher *teacher;
Course *course;
ClassRoom *classroom;
Section *section;
std::list<Slot*> List;

	

public:

Slot(std::string,Teacher*,Course*,ClassRoom*,Section*);

void setTeacher(Teacher*);
Teacher* getTeacher();
void setCourse(Course*);
Course* getCourse();
void setClassRoom(ClassRoom*);
ClassRoom* getClassRoom();
void setSection(Section*);
Section* getSection();
std::string getSlotInfo();
void addToList(Slot*);
std::list<Slot*> getList();
};
