#ifndef PACKAGE_HANDLER_H
#define PACKAGE_HANDLER_H

#include <string>
#include <map>
#include "utils.h"

class PackageHandler{
public:
	PackageHandler() = default;
	void setManifest(std::string manifest){
		m_manifest = manifest;
	}
	std::string getManifest() const{
		return m_manifest;
	}
	virtual bool parseManifest(); // and load m_pkgversionmap
	virtual void  validatePackages() = 0;
	const std::map<std::string, std::string>& getPackageMap() const{
		return m_pkgversionmap;
	}
	virtual std::string getInstalledVersion(const std::string& package) = 0;
	virtual bool pkgrOutputParser(const std::string& s_data, package_info& info) = 0;
	virtual ~PackageHandler(){}
	
private:
	std::string m_manifest;
	std::map<std::string, std::string> m_pkgversionmap;
};
#endif
