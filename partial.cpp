#include <iostream> 

/* 

    Partial Specialized Templates

*/ 

template <typename T, typename U> 
class Pair {
        T coord_x; 
        U coord_y; 
    public: 
        Pair(T x, U y) : coord_x(x), coord_y(y) {} 
        void print(); 
};

template<typename T, typename U>
void Pair<T, U>::print() {
    std::cout << "Pair: " << this->coord_x << " " << this->coord_y << "\n"; 
} 


/* Not allowed to have the same argument list to non-specialized argument */
template<typename T> 
class Pair<T, T>{
    T coord_x; 
    T coord_y; 
    
    public: 
        Pair(T x, T y) : coord_x(x), coord_y(y) {} 
        void print(); 

};

template<typename T>
void Pair<T, T>::print() {
    std::cout << "Pair: " << this->coord_x << " " << this->coord_y << "\n"; 
} 
