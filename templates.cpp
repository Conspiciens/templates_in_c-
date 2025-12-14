#include <iostream> 

/* 
    Template Specialization Example
*/

template<typename T> 
class Grades {
    public: 
        T grade; 
        Grades(T grade) : grade(grade) {}
};

template<> 
class Grades<double>{
    private:
        double grade; 

    public: 
        explicit Grades(double grade) : grade(grade) {} 
        
        void print() {
            std::cout << this->grade << "\n"; 
        } 
    
};

template<> 
class Grades<char>  {
    private: 
        std::string grade; 

    public: 
        explicit Grades(std::string grade) : grade(grade) {}
        
        void print() {
            std::cout << this->grade << "\n"; 
        } 
    
}; 

