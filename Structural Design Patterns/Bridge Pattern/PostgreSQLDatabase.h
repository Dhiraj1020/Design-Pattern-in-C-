#include "DatabaseImplementor.h"

class CPostgreSQLDatabase : public IDatabaseImplementor {
public:
    void connect() override; 
    void disconnect() override ;
    void executeQuery(const std::string& query) override ;
};