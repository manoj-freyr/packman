#ifndef UTILS_H
#define UTILS_H
#include <vector>
#include <string>
const std::string os_release_file {"/etc/os-release"};
const std::string name_key {"NAME"};
const std::vector<std::string> op_systems{ "ubuntu", "centos", "sles"};

struct package_info{
	std::string name;
	std::string version;
	
};

// common funtions
std::string get_last_word(const std::string& input);
/*
class linebuffer : public std::streambuf {
    std::string line{};
    char ch{}; // single-byte buffer
protected:
    int underflow() override {
        if(line.empty()) {
            std::cout << "Please enter a line of text for the stream: ";
            getline(std::cin, line);
            line.push_back('\n');
        }
        ch = line[0];
        line.erase(0, 1);
        setg(&ch, &ch, &ch + 1); // make one read position available
        return ch; 
    }
public:
    linebuffer(std::string line) : line{line} {};
};

class linestream : public std::istringstream {
    linebuffer mybuf;

public:
    linestream(std::string line) : std::istringstream{}, mybuf{line}
    {
        static_cast<std::istream&>(*this).rdbuf(&mybuf);
    }
};
*/
#endif
