#ifndef DBIMPPEMENTOR_H
#define DBIMPPEMENTOR_H

#include <iostream>
#include <string>

class IDatabaseImplementor 
{
	public:
    virtual void connect() = 0;
    virtual void disconnect() = 0;
    virtual void executeQuery(const std::string& query) = 0;
    virtual ~IDatabaseImplementor() = default;
};

#endif