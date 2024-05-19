#include "ProxyInternet.h"


void CProxyInternet::AccessInternet(USER_ID userId)
{
	auto it = std::find(m_AutherizeUserID.begin(),m_AutherizeUserID.end(),userId);
	if (m_AutherizeUserID.end() != it)
	{
		std::cout << userId << " is going to access internet now" << std::endl;
		m_oCInternet.AccessInternet();
	}
	else
	{
		std::cout << userId << " is not going to access as authorised user" << std::endl;
	}
}

void CProxyInternet::AddInAuthUser(USER_ID userId)
{
	m_AutherizeUserID.push_back(userId);
}
