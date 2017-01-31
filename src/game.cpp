#include <iostream>
#include <stdio.h>
#include <sqlite3.h>

int database_test()
{
  sqlite3 *db;
  char *zErrMsg = 0;
  int rc;

  rc = sqlite3_open("test.db", &db);

  if( rc ){
    fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
    return(0);
  }else{
    fprintf(stderr, "Opened database successfully\n");
  }
  sqlite3_close(db);
  
  return 0;
}

int main()
{
  database_test();
  std::cout << "Hello World!\n";
}