#include <iostream> 
#include "partial.cpp" 
#include "templates.cpp"

int main() {
    double test = 3.12;
    Grades<double> grades(test); 

    std::string letter = "B-"; 
    Grades<char> grades_letter(letter); 
    
    grades.print(); 
    grades_letter.print();

    Pair<double, int> pair(3.4, 3); 
    pair.print(); 

    Pair<double, double> pair2(3.2, 4.5); 
    pair.print();

    return 0; 
} 
