#pragma once

#include <glog/logging.h>

#define TRUN 0
#define TDEBUG0 1
#define TDEBUG1 2
#define TDEBUG2 3
#define TDEBUG3 4

namespace library {
namespace logging {

// XXX pass args---to set debug from command line
void init_logging() {
  FLAGS_logtostderr = 1;  // do not write to file...
  google::InitGoogleLogging("...");
}

void flush() {
  google::FlushLogFiles(google::INFO);
}

}  // logging
}  // library

