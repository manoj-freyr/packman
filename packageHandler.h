#ifndef PACKAGE_HANDLER_H
#define PACKAGE_HANDLER_H

#include <string>
#include <map>

class PackageHandler{
public:
	PackageHandler() = default;
	void setManifest(std::string manifest){
		m_manifest = manifest;
	}
	std::string getManifest() const{
		return m_manifest;
	}
	bool parseManifest(); // and load m_pkgversionmap
	virtual bool validatePackages() = 0;
	const std::map<std::string, std::string>& getPackageMap() const{
		return m_pkgversionmap;
	}
	virtual ~PackageHandler(){}
	
private:
	std::string m_manifest;
	std::map<std::string, std::string> m_pkgversionmap;
};
#endif
