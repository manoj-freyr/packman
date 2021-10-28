#include "packageHandlerDeb.h"

int main(){
	PackageHandler* pObj = new PackageHandlerDeb();
	auto pass = pObj->validatePackages();	
	return 0;	
}
