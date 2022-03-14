class Student {
  // private section
  //    int studentId
  //    name <- 20 charcters
  //c++ coding for student class
  private:
    int studentId;
    char name[20];
 
  // public section
  //    assignDetails() method declaration
  //    display() method declaration
 public:
    void assignDetails(int id, char sName[]);    //Doesn't return any value
    void display();
   
};
