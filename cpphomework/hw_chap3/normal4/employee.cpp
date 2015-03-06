#include "employee.h"
using namespace employee;

#include <iostream>
using namespace std;

#include <cstring>

Employee::Employee()
{
    memset(m_name,0,NAME_LEN);
    memset(m_address,0,ADDDRESS_LEN);
    memset(m_postCode,0,POSTCODE_LEN);
}

Employee::~Employee()
{
}

void Employee::set_name(char *name)
{
    int len = strlen(name);

    if(len < NAME_LEN)
        strncpy(m_name,name,NAME_LEN);
    else
        cout << "name length too long ,set name error" << endl;
}

void Employee::set_address(char *address)
{
    int len = strlen(address);

    if(len < ADDDRESS_LEN)
        strncpy(m_address,address,ADDDRESS_LEN);
    else
        cout << "address length too long, set address error" << endl;
}

void Employee::set_birthday(Date& birthday)
{
    m_birthday = birthday;
}

void Employee::set_postCode(char *postCode)
{
    int len = strlen(postCode);

    if(len < POSTCODE_LEN)
        strncpy(m_postCode,postCode,POSTCODE_LEN);
    else
        cout << "postcode length too long, set postcode error" << endl;
}

void Employee::set_joinDay(Date& joinDay)
{
    m_joinDay = joinDay;
}

void Employee::amend_name(char *name)
{
    int len = strlen(name);

    if(len < NAME_LEN)
        strncpy(m_name,name,NAME_LEN);
    else
        cout << "name length too long ,ammend name error" << endl;
}


void Employee::amend_address(char *address)
{

    int len = strlen(address);

    if(len < ADDDRESS_LEN)
        strncpy(m_address,address,ADDDRESS_LEN);
    else
        cout << "address length too long, ammend address error" << endl;
}

void Employee::amend_postCode(char *postCode)
{
    
    int len = strlen(postCode);

    if(len < POSTCODE_LEN)
        strncpy(m_postCode,postCode,POSTCODE_LEN);
    else
        cout << "postcode length too long, ammend postcode error" << endl;
}

void Employee::amend_birthday(Date& birthday)
{
    m_birthday = birthday;
}

void Employee::amend_joinDay(Date& joinDay)
{
    m_joinDay = joinDay;
}

void Employee::display()
{
	cout << m_name << " " << m_address << " " << m_postCode << " " << endl;
	cout << "birthday:";
	m_birthday.display_date();
	cout << "join day:";
	m_joinDay.display_date();
	
}
















