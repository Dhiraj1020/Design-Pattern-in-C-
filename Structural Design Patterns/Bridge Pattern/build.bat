cls

del *.exe

del *.res

del *.obj

cl.exe /c /EHsc MySQLDatabase.cpp PostgreSQLDatabase.cpp SQLiteDatabase.cpp Database.cpp  main.cpp 

link.exe MySQLDatabase.obj PostgreSQLDatabase.obj SQLiteDatabase.obj Database.obj  main.obj user32.lib /SUBSYSTEM:CONSOLE /FeBridge.exe

