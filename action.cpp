#include "handlerCreator.h"

int main(){
	handlerCreator creator;
	auto hander = creator.getPackageHandler();
	if(!hander){
		return -1;
	}
	hander->setManifest("/home/amd/freyr/exper/packman/packman/package-list.txt");
	hander->parseManifest();
	auto pass = hander->validatePackages();	
	return 0;	
}
