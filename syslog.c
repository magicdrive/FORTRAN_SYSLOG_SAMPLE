#include <syslog.h>

int write_syslog_()
{
  openlog("newsyslog", LOG_CONS | LOG_PID, LOG_USER);
  syslog(LOG_NOTICE, "this is sample log!!");
  closelog();
  return 0;
}
