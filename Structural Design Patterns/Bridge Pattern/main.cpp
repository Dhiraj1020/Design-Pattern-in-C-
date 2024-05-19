#include<iostream>

#include "DatabaseImplementor.h"
#include"MySQLDatabase.h"
#include"PostgreSQLDatabase.h"
#include"SQLiteDatabase.h"
#include "Database.h"

int main()
{
	// Using MySQL
    IDatabaseImplementor* mysql = new CMySQLDatabase();
    CDatabase* db1 = new CDatabase(mysql);
    db1->connect();
    db1->executeQuery("SELECT * FROM users");
    db1->disconnect();

    // Using PostgreSQL
    IDatabaseImplementor* postgres = new CPostgreSQLDatabase();
    CDatabase* db2 = new CDatabase(postgres);
    db2->connect();
    db2->executeQuery("SELECT * FROM employees");
    db2->disconnect();

    // Using SQLite
    IDatabaseImplementor* sqlite = new CSQLiteDatabase();
    CDatabase* db3 = new CDatabase(sqlite);
    db3->connect();
    db3->executeQuery("SELECT * FROM products");
    db3->disconnect();

    // Cleanup
    delete db1;
    delete mysql;
    delete db2;
    delete postgres;
    delete db3;
    delete sqlite;

	return 0;
}