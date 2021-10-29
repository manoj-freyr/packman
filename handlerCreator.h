#ifndef HANDLER_CREATOR_H
#define HANDLER_CREATOR_H
#include <memory>
#include "packageHandlerDeb.h"
#include "utils.h"
class handlerCreator{
public:
	handlerCreator() = default;
	virtual ~handlerCreator() = default;
	std::unique_ptr<PackageHandler> getPackageHandler();
};
#endif
