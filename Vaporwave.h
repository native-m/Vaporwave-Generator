#ifndef VAPORWAVE_H
#define VAPORWAVE_H

#include <string>

class Vaporwave
{
private:
	std::wstring m_vaporStr;
	int m_vaporStrLen;
	
public:
	Vaporwave();
	Vaporwave(std::wstring vaporStr);
	Vaporwave(wchar_t* vaporStr);
	
	void operator=(const std::wstring& str);
	void operator=(const Vaporwave& str);
	
	std::wstring getString();
	int getLength();
	
	operator std::wstring();
	operator const std::wstring() const;
};

#endif
