#include "Storage.h"
#include "../json/json.hpp"
#include <fstream>
#include <iostream>


using json = nlohmann::json;

std::vector<Task> loadTasks(const std::string & file_name){

    std::vector<Task> Tasks; 
    std::ifstream file(file_name);

    if(!file){
        std::cerr << "file not found : " << file_name << std::endl;
        return Tasks;
    }

    json j_array;

    try{
        file >> j_array;

    }catch(json::parse_error & e){

        std::cerr << "Error to include Task : " << e.what() << std::endl;
        return Tasks;
    }

    for(const auto & j_task : j_array){

        Task task(
            j_task.value("title",""),
            j_task.value("description",""),
            j_task.value("category",""),
            j_task.value("deadline",""),
            j_task.value("today_time","")
                 );
        if(j_task.value("done",false))task.Mark_done();
        Tasks.push_back(task);
    }
    
    return Tasks;
      
}


void saveTasks(std::vector<Task> Tasks,const std::string & file_name){

    json j_array = json::array();

    for(const auto & task : Tasks){
        json j_task;
        j_task["title"] = task.Get_Title();
        j_task["description"] = task.Get_Description();
        j_task["category"] = task.Get_Category();
        j_task["today_time"] = task.Get_Start();
        j_task["deadline"] = task.Get_Deadline();
        j_task["done"] = task.Get_Done();
        j_array.push_back(j_task);
    }

    std::ofstream file(file_name);
    if(!file){
        std::cerr << "File not Found : " << file_name << std::endl;
        return;
    }

    file << std::setw(4) << j_array <<  std::endl;

}