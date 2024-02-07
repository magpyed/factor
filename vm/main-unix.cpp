#include "master.hpp"

int main(int argc, char** argv) {
#if defined(__APPLE__) && defined(FACTOR_ARM64)
  pthread_jit_write_protect_np(0);
#endif
  factor::init_mvm();
  std::cout << "[[ START ]] main-unix.cpp" << std::endl;
  std::cout << "argc " << argc << std::endl;
  factor::start_standalone_factor(argc, argv);
  std::cout << "[[ END ]] main-unix.cpp" << std::endl;
  return 0;
}
