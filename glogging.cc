#include <iostream>
#include <boost/format.hpp>

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

  // formatted output
  double x = 42.2123523, y = -83.5776228398;
  VLOG(TRUN) << boost::format("example formatted text\n\tx: %1$ 3.5f\n\ty: %2$ 3.5f") % x % y << endl;

  // conditional ouput
  VLOG_IF(TDEBUG0, true) << "condition is true" << endl;
  VLOG_IF(TDEBUG0, false) << "condition is false" << endl;

  module::some_function();

  return 0;
}
