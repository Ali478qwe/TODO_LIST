#ifndef _STORAGE_H_
#define _STORSGE_H_

#include "../Task/Task.h"

std::vector<Task> loadTasks(const std::string & file_name = "Tasks.json");
void saveTasks(std::vector<Task> Tasks,const std::string & file_name = "Tasks.json");


#endif