#include "parseintoxml.h"

/******************************************************************************
 *3456789 123456789 123456789 123456789 123456789 123456789 123456789 123456789
 * Class 'ParseIntoXML' for parsing a parsed sentence into XML format. 
 *
 * Author: Stephen Volpe
 * Used with permission and modified by: Stephen Volpe
 * Date: 23 September 2017
**/

/******************************************************************************
 * Constructor
**/
ParseIntoXML::ParseIntoXML() {
}

/******************************************************************************
 * Destructor
**/
ParseIntoXML::~ParseIntoXML() {
}

/******************************************************************************
 * Accessors and Mutators
**/

/******************************************************************************
 * General functions.
**/

/******************************************************************************
 * Function 'FilterInput'.
 * This function cleans up the input so it can be parsed more easily.
 *
**/
string ParseIntoXML::FilterInput(string the_string) {
#ifdef EBUG
  Utils::log_stream << "enter FilterInput\n"; 
#endif
  string new_string9 = "";
#ifdef EBUG
  Utils::log_stream << "leave FilterInput\n"; 
#endif
  return new_string9;
}

/******************************************************************************
 * Function 'ParseTheFile'.
 * This function reads a file and stores it in a vector of strings.
 * It then prints the file to the log_stream
**/
void ParseIntoXML::ParseTheFile(Scanner& in_scanner) {
#ifdef EBUG
  Utils::log_stream << "enter ParseTheFile\n"; 
#endif
  ScanLine scan_line;
    vector<string> inputs;
	string input_value = "";
  while(in_scanner.HasNext()){
   input_value = in_scanner.NextLine();
	 inputs.push_back(input_value);
	}
  
	for(auto iter = inputs.begin(); iter != inputs.end(); ++iter){
  // Utils::log_stream << (*iter);
	cout << *iter << endl;
  }
#ifdef EBUG
  Utils::log_stream << "leave ParseTheFile\n"; 
#endif
}

/******************************************************************************
 * Function 'Replace'.
 * This function replaces one string with another as substrings of a larger
 * string. This is just a helper function to eliminate the need for
 * remembering the syntax of the underlying functions.
 *
 * This will replace ALL instances of the old substring with the new substring.
 *
 * Parameters:
 *   the_string - the string to have things replaced in
 *   old_string - the string to replace
 *   new_string - the string to replace with
 *
 * Returns:
 *   the original string with the replacement made
**/
string ParseIntoXML::Replace(string the_string, string old_string, string new_string) {

  string return_string = the_string;

#ifdef EBUG
  Utils::log_stream << "enter Replace\n"; 
#endif

  size_t found = return_string.find(old_string);
  while (found != string::npos) {
    return_string.replace(found, old_string.length(), new_string );
    found = return_string.find(old_string);
  }

#ifdef EBUG
  Utils::log_stream << "leave Replace\n"; 
#endif

  return return_string;
}

/******************************************************************************
 * Function 'Split'.
 * This function splits a string on whitespace using the 'next' function.
**/
vector<string> ParseIntoXML::Split(string in_string) const {
}

/******************************************************************************
 * Function 'ToStringXML'.
 * This function formats an XML 'vector<string>' for prettyprinting. 
 *
 * Returns:
 *   the prettyprint string for printing
**/
string ParseIntoXML::ToStringXML(vector<XMLItem> the_vector) const {
#ifdef EBUG
  Utils::log_stream << "enter ToStringXML\n"; 
#endif
  string s = "";

#ifdef EBUG
  Utils::log_stream << "leave ToStringXML\n"; 
#endif
  return s;
}

/******************************************************************************
 * Function 'XMLize'.
 * This function takes a string as input and produces a 'vector' of the XML
 * that is that string.
**/
vector<XMLItem> ParseIntoXML::XMLize(string in_string) const {

}

