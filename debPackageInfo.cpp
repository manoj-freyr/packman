#include <debPackageInfo.h>


 std::string m_pkgname;
 std::string m_filename;

// decide on output of package manager
bool DebPackageInfo::readPackages(std::stringstream ss){
	std::ofstream os{m_filename};
	std::string line;
	bool start = false;
	while(std::getline(ss, line)){
		if(!start){
			if(line.find("Description:") != std::string::npos){
				start = true;
				line= line.substr(":");
			}
		}
	}
}
bool DebPackageInfo::fillPkgInfo(){
	if(m_filename.empty())
		return false;
  std::ofstream	os{m_filename};
	  int read_pipe[2]; // From child to parent
  int exit_status;
        //package_info pinfo;
  if(pipe(read_pipe) == -1){
    perror("Pipe");
    return false;
  }
  pid_t process_id = fork();
  if(process_id < 0){
    perror("Fork");
    return false;

  }else if(process_id == 0) {
    dup2(read_pipe[1], 1);
    close(read_pipe[0]);
    close(read_pipe[1]);
    execlp("dpkg", "dpkg", "--status", package.c_str(), NULL);
  } else {
    // parent:
    int status;
		waitpid(process_id, &status,0);
    std::stringstream ss;
    close(read_pipe[1]);
    {
      char arr[4096];
      int n = read(read_pipe[0], arr, sizeof(arr));
      ss.write(arr, n);

    }
		close(read_pipe[0]);
		// handle ss
	  readPackages(ss);	
		}
}
