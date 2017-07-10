#ifndef VAPORWAVE_H
#define VAPORWAVE_H

#include <string>

class Vaporwave
{
private:
	std::wstring m_vaporStr;
	int m_vaporStrLen;
	
	void convertToVaporwave();
	
public:
	Vaporwave();
	Vaporwave(const std::wstring vaporStr);
	Vaporwave(const wchar_t* vaporStr);
	Vaporwave(const Vaporwave& vaporStr);
	
	void operator=(const std::wstring str);
	void operator=(const wchar_t* str);
	void operator=(const Vaporwave& str);
	
	std::wstring getString();
	int getLength();
	
	operator std::wstring();
	operator const std::wstring() const;
};

#endif
