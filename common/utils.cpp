
#if __cplusplus < 201103L
#include <cstdlib>
#include <ctime>

//srand(time(NULL));
#else
#include <random>
#include <functional>


std::random_device device;
typedef std::mt19937 Engine;
typedef std::uniform_real_distribution<double> Distribution;

auto uniform_generator = std::bind(Distribution(0.0f, 1.0f), Engine(device()));
#endif

double random(const double range_min, const double range_max) {
  double ksi;
  #pragma omp critical ( random )
  {
    #if __cplusplus < 201103L
    ksi = (double)rand() / (double)RAND_MAX;
    #else
    ksi = static_cast<double>( uniform_generator());
    #endif
  }
  return ksi * (range_max - range_min) + range_min;
}
