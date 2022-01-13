#include "handlerCreator.h"
#include <iostream>
std::unique_ptr<PackageHandler> handlerCreator::getPackageHandler(){
	auto osName = getOS();
	std::cout << "nameees " << osName << std::endl;
	if(osName.find("ubuntu") != std::string::npos)
		return std::unique_ptr<PackageHandler>(new PackageHandlerDeb{});
	else
		return nullptr;
}
