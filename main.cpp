#include <iostream>
#include <vector>
#include "Hyperlink.h"
#include "TopTenList.h"

using std::cout;

int main()
{
    TopTenList* languages = new TopTenList();
    Hyperlink cpp, python;
    
    cpp.text = "C++";
    cpp.url = "https://www.cplusplus.com/\n";
    python.text = "Python";
    python.url = "https://www.python.com/\n";
    languages->set_at(1, cpp);
    languages->set_at(2, python);
    languages->display_forward();
    languages->display_backward();

    return 0;
}
