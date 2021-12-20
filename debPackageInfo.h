#ifndef DEB_PACKAGE_INFO_H
#define DEB_PACKAGE_INFO_H
#include <packageInfo.h>

class DebPackageInfo : public PackageInfo{
public:
	DebPakageInfo(const std::string& pkgname):PackageInfo(pkgname){}
	bool fillPkgInfo() override;	
};
#endif
