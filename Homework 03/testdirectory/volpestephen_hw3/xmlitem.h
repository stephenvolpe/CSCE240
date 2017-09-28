/****************************************************************
 * Header file for the 'XMLItem' class to contain one XML item.
 *
 * Documentation for this code is in the implementation file.
 *
 * Author/copyright:  Stephen Volpe
 * Used with permission and modified by: Stephen Volpe
 * Date: 23 September 2017
**/

#ifndef XMLITEM_H
#define XMLITEM_H

#include <iostream>
using namespace std;

class XMLItem {
  public:
    XMLItem();
    XMLItem(int level, string item, string which);
    virtual ~XMLItem();
    string ToString() const;

    private:
};

#endif
