#include "SQLiteDatabase.h"

void CSQLiteDatabase::connect() 
{
    // MySQL specific connection code
    std::cout << "Connecting to SQLite database." << std::endl;
}

void CSQLiteDatabase::disconnect()
 {
    // MySQL specific disconnection code
    std::cout << "Disconnecting from SQLite database." << std::endl;
}

void CSQLiteDatabase::executeQuery(const std::string& query) 
{
    // MySQL specific query execution code
    std::cout << "Executing SQLite query: " << query << std::endl;
}