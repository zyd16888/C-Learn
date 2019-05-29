#include <iostream>
#include <string>
#include <cstring>
#include "MyString.h"
using namespace std;

MyString::MyString()
{
	str = new char[1];
	*str = '\0';
}

MyString::~MyString()
{
}

MyString::MyString(const char* ptr) //初始化构造函数
{
	if (NULL == ptr)
	{
		str = new char[1];
		*str = '\0';
	}
	else
	{
		int len = strlen(ptr);
		str = new char[len + 1];
		strcpy(str, ptr);
	}
}
MyString::MyString(const MyString& str) //拷贝构造函数
{
	int len = strlen(str.str);
	this->str = (char*)malloc((len + 1) * sizeof(char));//申请空间
	strcpy(this->str, str.str);
}

MyString MyString::operator=(MyString& str)
{
	if (this->str != str.str)
	{
		delete[] this->str;
		this->str = (char*)malloc((strlen(str.str)+1) * sizeof(char));
		strcpy(this->str, str.str);
	}
	
	return *this;
}

MyString MyString::operator+(MyString& str)
{
	MyString ans;
	if (!str.str) 
	{
		ans = *this;
	}
	else if (!this->str)
	{
		ans = str;
	}
	else
	{
		ans.str = (char*)malloc((strlen(this->str) + strlen(str.str) + 1) * sizeof(char));
		strcpy(ans.str, this->str);
		strcat(ans.str, str.str);
	}
	
	return ans;
}

bool MyString::operator>(MyString& str)
{
	bool res = false;
	int len;
	int thislen = strlen(this->str);
	int str_len = strlen(str.str);
	if (thislen <= str_len)
		len = thislen;
	else
		len = str_len;

	for (int i = 0; i < len; i++)
	{
		if (this->str[i] < str.str[i])
			break;
		else if (this->str[i] > str.str[i])
		{
			res = true;
			break;
		}

	}
	return res;
}

bool MyString::operator<(MyString& str)
{
	bool res = false;
	int len;
	int thislen = strlen(this->str);
	int str_len = strlen(str.str);
	if (thislen <= str_len)
		len = thislen;
	else
		len = str_len;

	for (int i = 0; i < len; i++)
	{
		if (this->str[i] < str.str[i])
		{
			res = true;
			break;
		}
		else if (this->str[i] > str.str[i])
			break;

	}
	return res;
}

bool MyString::operator == (MyString& str)
{
	bool res = false;
	if (strlen(this->str) == strlen(str.str))
	{
		int i;
		for (i = 0; i < strlen(this->str); i++)
		{
			if (this->str[i] > str.str[i] || this->str[i] < str.str[i])
			{
				break;
			}
		}
		if (i == strlen(this->str))
		{
			res = true;
		}
	}
	return res;
}

ostream& operator<<(ostream& s, MyString& str)
{
	int len = strlen(str.str);
	for (int i = 0; i < len; i++)
	{
		s << str.str[i];
	}
	cout << endl;
	return s;
}

istream& operator>>(istream& s, MyString& str)
{
	cout << "please input str:";
	//int len;
	string ptr;
	cin >> ptr;
	//const char* ch;
	//len = strlen(ptr.c_str());
	MyString pr =  ptr.c_str();
	str.str = pr.str;
	return s;
}

int MyString::LenString()
{
	int len;
	len = strlen(this->str);
	return len;
}

MyString MyString::LwrString(MyString& str)
{
	int len = (strlen(str.str) + 1);
	this->str = (char*)malloc(len * sizeof(char));
	for (int i = 0; i < len; i++)
	{
		this->str[i] = tolower(str.str[i]);
	}
	return *this;
}

MyString MyString::UprString(MyString& str)
{
	int len = (strlen(str.str) + 1);
	this->str = (char*)malloc(len * sizeof(char));
	for (int i = 0; i < len; i++)
	{
		this->str[i] = toupper(str.str[i]);
	}
	return *this;
}