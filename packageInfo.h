#ifndef PACKAGE_INFO_H
#define PACKAGE_INFO_H
#include <utils.h>
#include <cstdio>
class PackageInfo{

public:
	PackageInfo(std::string pkgname):m_pkgname{pkgname}{
		m_filename = pfilename(pkgname);	
	}
	~PackageInfo(){
		if(!m_filename.empty()){
			auto res = std::remove(m_filename.c_str());
		}
	}
	PackageInfo(const PackageInfo& ) = default;
  virtual bool fillPkgInfo() = 0; // reads from package and writes to a file
	std::string getFileName(){
		return m_filename;
	}
	std::string getPackageName(){
		return m_pkgname;
	}
private:
	std::string m_pkgname;
	std::string m_filename;
};

#endif
