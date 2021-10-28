#ifndef PACKAGE_HANDLER_DEB_H
#define PACKAGE_HANDLER_DEB_H
#include "packageHandler.h"

class PackageHandlerDeb: virtual public PackageHandler{
public:
	PackageHandlerDeb() = default;
	bool validatePackages() override;
	bool pkgrOutputParser(const std::string& s_data, 
																	package_info& info)	override;
	std::string getInstalledVersion(const std::string& package) override;	
	~PackageHandlerDeb(){}
};
#endif
