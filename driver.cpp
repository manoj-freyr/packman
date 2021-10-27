#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include "utils.h"

std::string searchos(std::string os_name){
	std::string lowcasename{os_name};
	std::transform( lowcasename.begin(), lowcasename.end(), lowcasename.begin(),
				[](unsigned char c){ return std::tolower(c); });
	for( const auto& name: op_systems){
		if(lowcasename.find(name) != std::string::npos)
			return name;		
	}
  	
}
std::string getOS(){
  std::ifstream rel_file(os_release_file.c_str());
  if(!rel_file.good()){
    std::cout << "No /etc/os-release file, cant fetch details " << std::endl;
    return std::string{};
  }
  std::string line;
  while (std::getline(rel_file, line))
  {
		auto found = line.find(name_key) ;
    if (found!=std::string::npos){
      found = line.find('\"');
      auto endquote = line.find_last_of('\"');
      if(found == std::string::npos || endquote == std::string::npos)
        return std::string{};
      std::string osame = line.substr(found+1, endquote-found-1 );
      std::cout << osame << std::endl;
			return searchos(osame);
    }
  }

}
int main(){
  std::cout << getOS() << std::endl;
  return 0;

}

