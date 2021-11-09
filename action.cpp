#include <iostream>
#include "handlerCreator.h"

int main(){
	handlerCreator creator;
	auto hander = creator.getPackageHandler();
	if(!hander){
		std::cout << "Failed to handler " << std::endl;
		return -1;
	}
	hander->setManifest("/home/amd/freyr/exper/packman/packman/package-list.txt");
	hander->parseManifest();
	hander->validatePackages();	
	return 0;	
}
