//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"
#include <iostream>

using std::string;
using std::cout;

TopTenList::TopTenList()
{
  _list.resize(10);
}

TopTenList::TopTenList(string name)
{
  listName = name;
  _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
 _list[index - 1] = link;  
}

Hyperlink TopTenList::get(int index)
{
  return _list.at(index-1);
}

string TopTenList::get_title()
{
  return listName;
}

void TopTenList::display_forward()
{
  for (int i = 0; i < _list.size(); i++)
  {
    cout << _list[i].url;
  }
}

void TopTenList::display_backward()
{
  for (int i = _list.size() -1; i >= 0; i--)
  {
    cout << _list[i].url;
  }
}

