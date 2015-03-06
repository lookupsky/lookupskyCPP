#include "employee.h"
using namespace employee;

#include "date.h"
using namespace iotek;

#include <iostream>
using namespace std;

#define BUF_LEN 512

int main(){
    
    char buf[BUF_LEN] = {};
		int year_buf = 0;
		int month_buf = 0;
		int day_buf = 0;

    Employee *num1 = new Employee();

    cout << "please input your name(short of 40byte):";
    cin >> buf;
    num1->set_name(buf);

    cout << "please input your address(short of 512btye):";
    cin >> buf;
    num1->set_address(buf);

    cout << "please input your postCode(short of32btye):";
    cin >> buf;
    num1->set_postCode(buf);

		cout << "please input your birthday year:";
		cin >> year_buf;
		cout << "please input your birthday month:";
		cin >> month_buf;
		cout << "please input your birthday day:";
		cin >> day_buf;

		Date date_buf(year_buf,month_buf,day_buf);
		num1->set_birthday(date_buf);

		cout << "please input your join day year:";
		cin >> year_buf;
		cout << "please input your join day month:";
		cin >> month_buf;
		cout << "please input your join day day:";
		cin >> day_buf;

		date_buf.set_date(year_buf,month_buf,day_buf);
		num1->set_joinDay(date_buf);

		num1->display();		

		cout << "please input your change name:";
		cin >> buf;
		num1->amend_name(buf);

		cout << "please input your change address:";
		cin >> buf;
		num1->amend_address(buf);

		cout << "please input your change postCode:";
		cin >> buf;
		num1->amend_postCode(buf);	

		num1->display();

		delete num1;

    return 0;
}


















