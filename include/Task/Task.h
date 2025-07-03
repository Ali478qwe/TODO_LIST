#ifndef _TASK_H_
#define _TASK_H_

#include <string>
#include <vector>

class Task{

private: 
   std::string Title;
   std::string Description;
   std::string Category;
   std::string Dead_line;
   std::string Today_time;
   bool Done;

public:
   


   Task(const std::string &T,const std::string &Des,const std::string &Cat,const std::string &Dl,const std::string &Tod);


   std::string Get_Title()const;
   std::string Get_Description()const;
   std::string Get_Category()const;
   std::string Get_Deadline()const;
   std::string Get_Start()const;
   bool Get_Done()const;

   void Set_Title(std::string Title);
   void Set_Description(std::string Description);
   void Set_Category(std::string Category);
   void Set_Deadline(std::string Deadline);
   void Mark_done();

   void Show(int Task_num)const;
   static void Show_All(std::vector<Task> Tasks);











};



#endif