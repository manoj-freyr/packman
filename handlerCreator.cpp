#include "handlerCreator.h"
std::unique_ptr<PackageHandler> handlerCreator::getPackageHandler(){
	auto osName = getOS();
	if(osName.find("ubuntu") != std::string::npos)
		return std::unique_ptr<PackageHandler>(new PackageHandlerDeb{});
	else
		return nullptr;
}
