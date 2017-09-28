#include "parseintoxml.h"

/******************************************************************************
 *3456789 123456789 123456789 123456789 123456789 123456789 123456789 123456789
 * Class 'XMLItem' as a container for one XML item.
 *
 * Author: Stephen Volpe
 * Used with permission and modified by: Stephen Volpe
 * Date: 23 September 2017
**/

/******************************************************************************
 * Constructor
**/
XMLItem::XMLItem() {
}

/******************************************************************************
 * Constructor
**/
XMLItem::XMLItem(int level, string item, string which) {
}

/******************************************************************************
 * Destructor
**/
XMLItem::~XMLItem() {
}

/******************************************************************************
 * Accessors and Mutators
**/

/******************************************************************************
 * General functions.
**/

/******************************************************************************
 * Function 'ToString'.
 * This function formats an 'XMLItem' for prettyprinting.
 *
 * Returns:
 *   the prettyprint string for printing
**/
string XMLItem::ToString() const {
#ifdef EBUG
  Utils::log_stream << "enter ToString\n"; 
#endif
  //declare string s for part a
  string s = "";  
#ifdef EBUG
  Utils::log_stream << "leave ToString\n"; 
#endif
  return s;
}
