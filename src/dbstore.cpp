#include <sqlite3.h>
#include <string>
using namespace std;

int database_test()
{
  sqlite3 *db;
  char *zErrMsg = 0;
  int rc;

  rc = sqlite3_open("test.db", &db);

  if(rc){
    return(0);
  }else{
    return 1;
  }
  sqlite3_close(db);
  
  return 0;
}
