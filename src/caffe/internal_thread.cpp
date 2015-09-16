// #include <boost/thread.hpp>
#include "caffe/internal_thread.hpp"

namespace caffe {

InternalThread::~InternalThread() {
  WaitForInternalThreadToExit();
}

bool InternalThread::is_started() const {
#if 0
  return thread_.get() != NULL && thread_->joinable();
#endif
  return false;
}


bool InternalThread::StartInternalThread() {
#if 0
  if (!WaitForInternalThreadToExit()) {
    return false;
  }
  try {
    thread_.reset(
        new boost::thread(&InternalThread::InternalThreadEntry, this));
  } catch (...) {
    return false;
  }
#endif
  fprintf(stderr, "Unimplemented!\n");
  exit(1);
  return true;
}

/** Will not return until the internal thread has exited. */
bool InternalThread::WaitForInternalThreadToExit() {
#if 0
  if (is_started()) {
    try {
      thread_->join();
    } catch (...) {
      return false;
    }
  }
#endif
  return true;
}

}  // namespace caffe
