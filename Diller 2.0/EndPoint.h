#ifndef ENDPOINT_H
#define ENDPOINT_H

#include "PackageDTO.h"
#include "Package.h"

class EndPoint {
public:
    void receivePackage(const PackageDTO& packageDTO);
};

#endif 
