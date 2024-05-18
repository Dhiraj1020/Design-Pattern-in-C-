#include <iostream>
#include <string>
#include <vector>

typedef unsigned int USER_ID ;



class CInternet
{
public:
	void AccessInternet()
	{
		std::cout << " you are accessing interet " << std::endl;
	}	
};

class CProxyInternet
{
	CInternet m_oCInternet;
	std::vector<USER_ID>m_AutherizeUserID;
public:
	void AccessInternet(USER_ID userId)
	{
		auto it = std::find(m_AutherizeUserID.begin(),m_AutherizeUserID.end(),userId);
		if (m_AutherizeUserID.end() != it)
		{
			std::cout << userId << " is accessing internet now" << std::endl;
		}
		else
		{
			std::cout << userId << " is not authorised user" << std::endl;
		}
	}

	void AddInAuthUser(USER_ID userId)
	{
		m_AutherizeUserID.push_back(userId);
	}
};




int main()
{
	CProxyInternet oCProxyInternet;
	oCProxyInternet.AddInAuthUser(1);
	oCProxyInternet.AddInAuthUser(10);

	oCProxyInternet.AccessInternet(10);
	oCProxyInternet.AccessInternet(5);
}