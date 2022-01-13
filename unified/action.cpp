#include <iostream>
#include <fstream>
#include "handlerCreator.h"


void print_usage(){
  std::cout << "Tool to validate packages installed " << std::endl;
  std::cout << "Usage as below: " << std::endl;
  std::cout << "./packman " << std::endl;
  std::cout << "example: " << std::endl;
  std::cout << "\t" <<"./packman" << std::endl;
}

bool isFileValid(const std::string& filePath){
  std::ifstream f{filePath.c_str()};
	return f.good();
}

int main(int Argc, char**Argv){
	if(Argc != 1){
    print_usage();
    return -1;
  }
	handlerCreator creator;
	auto hander = creator.getPackageHandler();
	if(!hander){
		std::cout << "Failed to handler " << std::endl;
		return -1;
	}
/*
  std::string pathname{Argv[1]};
  if(!isFileValid(pathname)){
    std::cout << " Invalid path for package list file " << std::endl;
    //return -1;
  }
*/ 
	//hander->setManifest("/home/amd/freyr/exper/packman/packman/package-list.txt");
	//hander->setManifest(pathname);
	hander->parseManifest();
	hander->validatePackages();	
	return 0;	
}
