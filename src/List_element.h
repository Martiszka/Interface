#include "Parameter.h"


class List_element{

  private:
      List_element *next , *prev;
      Parameter *parameter_element ;
  public:
     // List_element *next ; //*public for test //Marek
      List_element(Parameter *parametr);

      List_element* getNextPointer() ;
      List_element* getPrevPointer() ;
      Parameter* getCurrentParameter() ;

      void setNextPointer(List_element *next_pointer ) ;
      void setPrevPointer(List_element *prev_pointer ) ;

      //void print();
};

