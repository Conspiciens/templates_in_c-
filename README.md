# Template Specialization in C++

## Partial Templates 
   Argument Rules 
    1. Argument list cannot be indentical to the generic template list, must specialize
    2. No default arguments are allowed in the argument list 
        e.g template<typename T = 1> # Not allowed 
    3. Expansion pack must be the last argument in the argument list
        
        Pack (In C++11) Accepts a number of arguments within tempates or functions 

    4. Templates that are CONST must be known when being passed in, not from the argument list provided via the templates, from the deduction of the variable initilization 
        e.g int double // Yes  
            T number // No, template argument will define type when passed in to function with template or class 

    5. Const Templates argument cannot depend on the template parameters who's type is in the template specialization parameters
    
