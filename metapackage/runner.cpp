#include "debPackageInfo.h"

int main(){
	PackageInfo* p =new DebPackageInfo(std::string("cmaker"),
									std::string("dpkg") , std::string("--status"));
	p->fillPkgInfo();
	return 0;	
}
