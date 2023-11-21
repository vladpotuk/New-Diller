#ifndef PACKAGE_DTO_H
#define PACKAGE_DTO_H

#include <string>

class PackageDTO {
public:
    PackageDTO(const std::string& sender, const std::string& receiver, const std::string& data)
        : sender(sender), receiver(receiver), data(data) {}

    std::string getSender() const { return sender; }
    std::string getReceiver() const { return receiver; }
    std::string getData() const { return data; }

private:
    std::string sender;
    std::string receiver;
    std::string data;
};

#endif 

