/****************************************************************
 * Header file for the class to parse a sentence into an XML
 # version.
 *
 * Documentation for this code is in the implementation file.
 *
 * Author/copyright:  Stephen Volpe
 * Used with permission and modified by: Stephen Volpe
 * Date: 23 September 2017
**/

#ifndef PARSEINTOXML_H
#define PARSEINTOXML_H

#include <iostream>
#include <set>
#include <vector>
#include <stack>
using namespace std;

#include "xmlitem.h"

#include "../../Utilities/scanner.h"
#include "../../Utilities/scanline.h"

class ParseIntoXML {
  public:
    ParseIntoXML();
    virtual ~ParseIntoXML();

    void ParseTheFile(Scanner& in_scanner);

  private:
    string FilterInput(string the_string);
    string Replace(string the_string, string old_string, string new_string);
    string ToStringXML(vector<XMLItem> the_vector) const;
    vector<string> Split(string in_string) const;
    vector<XMLItem> XMLize(string in_string) const;
};
#endif
