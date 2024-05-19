#include "DatabaseImplementor.h"

class CDatabase 
{
protected:
    IDatabaseImplementor* implementor;
public:
    CDatabase(IDatabaseImplementor* impl);
    virtual void connect();
    virtual void disconnect();
    virtual void executeQuery(const std::string& query);
    virtual ~CDatabase() = default;
};
