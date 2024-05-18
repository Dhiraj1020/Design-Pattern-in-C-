#include<iostream>

class CSetting
{
private:
	bool m_bXYZ;
	static CSetting* m_pInstance;
public :
	static CSetting* GetSettingIntance();
	void SetXYZSetting(bool t_bxyz);	
	bool GetXYZSetting() const; 
};