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
    uint8_t edit_mode ;
    List *list;
    uint8_t in_sub_list = false ;
    uint8_t has_sub_list = false;
    uint8_t visible_value = true ;
    uint8_t visible_info_changeable_value = true ;
    uint8_t changeable_value ;
    void createList();

public:
	Parameter(string, int, string, uint8_t ) ;
	void sendToDisplay() ;
	Interface_Element::Action getButton(Interface_Element::Button) ;
	void sendErrorNoChangeable() ;
    Parameter* getParametr();
	void addToSubList(Parameter *p);
	string getHeadLine();
	List* getSubList() ;
	uint8_t ifHasSubList() ;
	uint8_t ifInSubList() ;
	Parameter* getLastElementOfSubList() ;
	void setOutOfSubList() ;
	void newMove(Interface_Element::Action action) ;
	void refreshEditMode() ;
};


#endif /* PARAMETER_H_ */
