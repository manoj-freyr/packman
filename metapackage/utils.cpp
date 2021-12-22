#include "utils.h"
std::string remSpaces(std::string& str){
  str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
  return str;
}


std::string pfilename(const std::string& package){
  std::string fname{"/usr/local/"};
  fname += package;
  using namespace std::chrono;
  auto now = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
  std::ostringstream oss;
  oss << now;
  fname = fname +  {"."} + oss.str() + {".txt"};
  return fname;
}

