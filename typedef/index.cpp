#include <iostream>
#include <vector>

// typedef is a keyword used to create an additional name for another datatype from an existing type



//typedefs is being replaced by using keyword 

typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t; 

// wher it is like this


using phrase = std::string;


int main()
{

    pairlist_t pairlist;
    text_t name = "Mugisha Yves";
    phrase age="12 years old";

    std::cout << name << std::endl;
    std::cout << age << std::endl;

    return 0;
}
