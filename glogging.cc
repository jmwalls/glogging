#include <iostream>
#include <glog/logging.h>

#include "logging.h"
#include "module.h"

using namespace std;

int main(int argc, char *argv[]) {
  library::logging::init_logging();

  VLOG(TRUN) << "testing google's glog... (log redirected to stderr)" << endl;

  // not use?
  LOG(INFO) << "log info" << endl;
  LOG(ERROR) << "log error" << endl;
  LOG(WARNING) << "log warning" << endl << endl;
  // LOG(FATAL) << "log fatal" << endl;

  // typical use cases
  VLOG(TRUN) << "run level output" << endl;
  VLOG(TDEBUG0) << "debug 0" << endl;
  VLOG(TDEBUG1) << "debug 1" << endl;
  VLOG(TDEBUG2) << "debug 2" << endl;

  VLOG_IF(TDEBUG0, true) << "condition is true" << endl;
  VLOG_IF(TDEBUG0, false) << "condition is false" << endl;

  module::some_function();

  return 0;
}
