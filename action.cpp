#include "packageHandlerDeb.h"

int main(){
	PackageHandler* pObj = new PackageHandlerDeb();
	pObj->setManifest("/home/amd/freyr/exper/packman/packman/package-list.txt");
	pObj->parseManifest();
	auto pass = pObj->validatePackages();	
	return 0;	
}
