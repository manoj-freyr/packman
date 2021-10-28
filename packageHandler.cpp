#include <fstream>
#include "packageHandler.h"

bool PackageHandler::parseManifest(){
	assert(!m_manifest.empty());
	std::ifstream ifs {m_manifest};
	assert(ifs.good());
	std::string line;
	while(std::getline(ifs, line)){
		std::istringstream iss(line);
		std::string name, ver;
		iss >> name >> ver;
		if(iss.eof()){
			std::out  << "error line format" << line << std::endl; //crude validation
		}
		m_pkgversionmap.emplace(name, ver);
	}
	std::cout << m_pkgversionmap.size() << " is the size " << std::endl;
}
