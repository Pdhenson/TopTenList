//Manages a list of top ten hyperlinks
#ifndef TOPTENLIST_H
#define TOPTENLIST_H
#include <string>
#include <vector>
#include "Hyperlink.h"

using std::string;
using std::vector;

class TopTenList
{
  private:
    vector <Hyperlink> _list;
    string listName;
  public:
    void set_at(int index, Hyperlink link);
    Hyperlink get(int index);
    string get_title();
    TopTenList();
    TopTenList(string name);
};

#endif
