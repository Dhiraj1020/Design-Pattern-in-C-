#include <iostream>
#include "ProxyInternet.h"


int main()
{
	CProxyInternet oCProxyInternet;
	oCProxyInternet.AddInAuthUser(1);
	oCProxyInternet.AddInAuthUser(10);

	oCProxyInternet.AccessInternet(10);
	oCProxyInternet.AccessInternet(5);
}