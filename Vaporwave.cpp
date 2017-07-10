#include "Vaporwave.h"

Vaporwave::Vaporwave()
{
	m_vaporStr = L"";
}

Vaporwave::Vaporwave(const std::wstring vaporStr)
{
	m_vaporStr = vaporStr;
	convertToVaporwave();
}

Vaporwave::Vaporwave(const wchar_t* vaporStr)
{
	m_vaporStr = vaporStr;
	convertToVaporwave();
}

Vaporwave::Vaporwave(const Vaporwave& vaporStr)
{
	m_vaporStr = vaporStr.m_vaporStr;
	convertToVaporwave();
}

void Vaporwave::operator=(const std::wstring vaporStr)
{
	m_vaporStr = vaporStr;
	convertToVaporwave();
}

void Vaporwave::operator=(const wchar_t* vaporStr)
{
	m_vaporStr = vaporStr;
	convertToVaporwave();
}

void Vaporwave::operator=(const Vaporwave& vaporStr)
{
	m_vaporStr = vaporStr.m_vaporStr;
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
	for(int i = 0; i < m_vaporStr; i++)
	{
		switch(m_vaporStr[i])
		{
		case L' ':
		case L'\r':
		case L'\n':
			m_vaporStr[i] = m_vaporStr[i];
			break;
		default:
			if(ret[i] >= 0x20 && ret[i] <= 0xC0)
				m_vaporStr[i] = (wchar_t)(0xFF00 | m_vaporStr[i] - 0x0020);
			else
				m_vaporStr[i] = m_vaporStr[i];
			break;
		}
	}
}
