#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include "date.h"
using namespace iotek;

const int NAME_LEN = 40;
const int ADDDRESS_LEN = 512;
const int POSTCODE_LEN = 32;



namespace employee{

class Employee{

public:
    
    Employee();
    ~Employee();

    void set_name(char *name);
    void set_address(char *address);
    void set_birthday(Date& birthday);
    void set_postCode(char *postCode);
    void set_joinDay(Date& joinDay);

    void amend_name(char *name);
    void amend_address(char *address);
    void amend_postCode(char *postCode);
    void amend_birthday(Date& birthday);
    void amend_joinDay(Date& joinDay);
	
		void display();
private:

    char m_name[NAME_LEN];
    char m_address[ADDDRESS_LEN];
    char m_postCode[POSTCODE_LEN];
    Date m_birthday;
    Date m_joinDay;

};

}



#endif
