#include "Task.h"
#include <iostream>


    Task::Task(const std::string &T,const std::string &Des,const std::string &Cat,const std::string &Dl,const std::string &Tod):
         Title(T),Description(Des),Category(Cat),Dead_line(Dl),Today_time(Tod),Done(false){};


   std::string Task::Get_Title()const{
         return Title;
   };

   std::string Task::Get_Description()const{
         return Description;
   };

   std::string Task::Get_Category()const{
         return Category;
   };

   std::string Task::Get_Deadline()const{
         return Dead_line;
   };

   std::string Task::Get_Start()const{
         return Today_time;
   };

   bool Task::Get_Done()const{
         return Done;    
   };


   void Task::Set_Title(std::string Title){
         Task::Title = Title;
   };

   void Task::Set_Description(std::string Description){
         Task::Description = Description;
   };

   void Task::Set_Category(std::string Category){
         Task::Category = Category;
   };

   void Task::Set_Deadline(std::string Deadline){
         Task::Dead_line = Deadline;
   };

   void Task::Mark_done(){
         Task::Done = true;
   };


   void Task::Show(int Task_num)const{
         std::cout << "[" << Task_num << "]"
              << "Title : " << Title
              << "\nDescripton : " 
              << Description 
              << "\nCategory : "
              << Category
              << "\nDeadline : " 
              << Dead_line
              << "\nDone : "
              << (Done ? "Done" : "Not Done");
   };

   void Task::Show_All(std::vector<Task> Tasks){
         for(size_t Task = 0;Task < Tasks.size();++Task){
            Tasks[Task].Show(Task);
         }
   };