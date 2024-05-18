#include "Setting.h"

CSetting* CSetting::m_pInstance = nullptr; 

CSetting* CSetting::GetSettingIntance()
{
	if(nullptr == m_pInstance)
		m_pInstance = new CSetting();
	return m_pInstance;
}

void CSetting::SetXYZSetting(bool t_bxyz)	
{
	m_bXYZ = t_bxyz;
}

bool CSetting::GetXYZSetting() const
{
	return (m_bXYZ); 
}