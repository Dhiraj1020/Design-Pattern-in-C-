#ifndef PROXYINTERNET_H
#define PROXYINTERNET_H

#include <string>
#include <vector>
#include "Internet.h"


typedef unsigned int USER_ID ;

class CProxyInternet
{
	CInternet m_oCInternet;
	std::vector<USER_ID>m_AutherizeUserID;
public:

	void AccessInternet(USER_ID userId);
	void AddInAuthUser(USER_ID userId);
};

#endif //PROXYINTERNET_H
