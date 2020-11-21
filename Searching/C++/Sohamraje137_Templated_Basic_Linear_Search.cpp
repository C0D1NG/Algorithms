#include <iostream>


template<class T1, typename T2>
T1* find( T1* start, T1* end, T2 val){
    while(start != end && *start++ != val);
    
    return start;
          
}

int main()
{
    //Test on chars
    char arrayofchars[]= "Hello, Contains a lot of chars ";
    char* endofarray= arrayofchars + sizeof(arrayofchars);
    char *result= find(arrayofchars, endofarray,',');
    if(result!=NULL){
        std::cout<<arrayofchars<<std::endl;
        std::cout<<result<<std::endl;
    }
    else 
       std::cout<<"Character not found";
    
    return 0;
}
