#include "Vaporwave.h"

Vaporwave::Vaporwave()
{
	m_vaporStr = L"";
}

Vaporwave::Vaporwave(const std::wstring vaporStr)
{
	m_vaporStr = vaporStr;
	m_vaporStrLen = vaporStr.length();
	convertToVaporwave();
}

Vaporwave::Vaporwave(const wchar_t* vaporStr)
{
	m_vaporStr = vaporStr;
	m_vaporStrLen = wcslen(vaporStr);
	convertToVaporwave();
}

Vaporwave::Vaporwave(const Vaporwave& vaporStr)
{
	m_vaporStr = vaporStr.m_vaporStr;
	m_vaporStrLen = vaporStr.m_vaporStrLen;
	convertToVaporwave();
}

void Vaporwave::operator=(const std::wstring vaporStr)
{
	m_vaporStr = vaporStr;
	m_vaporStrLen = vaporStr.length();
	convertToVaporwave();
}

void Vaporwave::operator=(const wchar_t* vaporStr)
{
	m_vaporStr = vaporStr;
	m_vaporStrLen = wcslen(vaporStr);
	convertToVaporwave();
}

void Vaporwave::operator=(const Vaporwave& vaporStr)
{
	m_vaporStr = vaporStr.m_vaporStr;
	m_vaporStrLen = vaporStr.m_vaporStrLen;
	convertToVaporwave();
}

std::wstring Vaporwave::getString()
{
	return m_vaporStr;
}

int Vaporwave::getLength()
{
	return m_vaporStrLen;
}

void Vaporwave::convertToVaporwave()
{
	for(int i = 0; i < m_vaporStrLen; i++)
	{
		switch(m_vaporStr[i])
		{
		case L' ':
		case L'\r':
		case L'\n':
			continue;
		default:
			if(m_vaporStr[i] >= 0x20 && m_vaporStr[i] <= 0xC0)
				m_vaporStr[i] = (wchar_t)((0xFF00 | m_vaporStr[i]) - 0x0020);
			else
				continue;
			break;
		}
	}
}
