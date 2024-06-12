#include <string>
#include "../../include/meters_to_us_unities.h"

double meters_to_us_unities(double meters, std::string unity_name) {
  double INCH_TO_METER = 0.0254;
  double FOOT_TO_METER = 12.0 * INCH_TO_METER;

  if (unity_name == "feet") { return meters / FOOT_TO_METER; }

  if (unity_name == "inches") { return meters / INCH_TO_METER; }

  return 0;
}
