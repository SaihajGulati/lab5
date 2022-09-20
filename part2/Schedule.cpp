#include <iostream>
#include <map>
#include "Schedule.h"

using namespace std;

Schedule::Schedule(string name)
{
    mName = name;
}

bool Schedule::dropCourse(std::string name)
{
    if (courseMap.find(name) == courseMap.end())
    {
        return false;
    }
    else
    {
        courseMap.erase(name);
        return true;
    }
}

bool Schedule::addCourse(Course* c)
{
    // TO DO: if the course was already in the map, return false
    // otherwise, add it to the map and return true!
    if (courseMap.find(c->getCourseName()) != courseMap.end())
    {
        return false;
    }
    else
    {
        courseMap[c->getCourseName()] = c;
        return true;
    }
}

void Schedule::printAllAssignments()
{
    // TO DO: print out the name of each course, followed by the set of assignments.
    // for each assignment, display its name, its type (essay vs hw vs exam), and whether or not it was completed.
    // formatting is up to you, but make sure it's easy to read!
    map<std::string, Course*>::iterator it;

    //go through each course in course map
    for (it = courseMap.begin(); it != courseMap.end(); ++it)
    {
        cout << (*it).first << endl;
        set<Assignment*> assSet = (*it).second->getAssignmentSet();

        //go through every assignment for this course
        set<Assignment*>::iterator ite;
        for (ite = assSet.begin(); ite != assSet.end(); ++ite)
        {
            //print assignment info seperated by " | "
            cout << (*ite)->getName() << " | ";
            cout << (*ite)->getType() << " | ";
            cout << (*ite)->isComplete() << endl << endl;
        }

    }
}

std::map<std::string, Course*> Schedule::getCourses()
{
    return courseMap;
}