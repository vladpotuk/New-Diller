#ifndef CLIENT_H
#define CLIENT_H

#include "EndPoint.h"
#include "PackageDTO.h"

class Client {
public:
    void sendPackage(const PackageDTO& packageDTO);

private:
    EndPoint endpoint;
};

#endif 
