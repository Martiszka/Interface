#include "Interface_Element.h"

#ifndef PARAMETER_H_
#define PARAMETER_H_

#include <iostream>
#include <cstdio>
#include <stdint.h>
#include <cstdlib>

using namespace std;

class List;

class Parameter {
private:
	string headline;
	int value ;
	string unit;
    bool edit_mode ;
    List *list;

    uint8_t has_sub_list = false;

public:
	Parameter(string, int, string, bool ) ;
	bool if_changeable_value ;
	void sendToDisplay() ;
	Interface_Element::Action getButton(Interface_Element::Button) ;
	void sendErrorNoChangeable() ;

	void createList();
	void addToSubList(Parameter *p);
	string getHeadLine();
};


#endif /* PARAMETER_H_ */
