#include "Database.h"

CDatabase::CDatabase(IDatabaseImplementor* impl) : implementor(impl) 
{

}

void CDatabase::connect()
{
    implementor->connect();
}

void CDatabase::disconnect()
{
    implementor->disconnect();
}

void CDatabase::executeQuery(const std::string& query) 
{
    implementor->executeQuery(query);
}
