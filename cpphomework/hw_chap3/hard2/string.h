#ifndef _STRING_H_
#define _STRING_H_

namespace my{

class String{

public:

	String();
	String(char);
	String(const char *);
	String(int);
	String(double);
	String(bool);

	~String();
	String(const String&);

	void append(char);
	void append(const char *);

	char char_at_index(int);
		
	void chomp();
	int length();

	int to_int();
	double to_double();
	bool to_bool();

	bool compare(const char *);

	void display() const;
private:

	char *str;
	int len;

};

}


#endif

