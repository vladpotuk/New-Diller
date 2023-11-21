#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>

class Package {
public:
    Package(const std::string& sender, const std::string& receiver, const std::string& data)
        : sender(sender), receiver(receiver), data(data) {}

    void send() {
        std::cout << "Package sent from " << sender << " to " << receiver << ": " << data << std::endl;
    }

private:
    std::string sender;
    std::string receiver;
    std::string data;
};

#endif 

