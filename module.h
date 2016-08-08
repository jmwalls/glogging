#pragma once

#include <iostream>
#include "logging.h"

namespace module {

void some_function() {
  VLOG(TDEBUG0) << "some_function" << std::endl;
  library::logging::flush();
}

}  // module
