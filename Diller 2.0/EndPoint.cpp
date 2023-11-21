#include "EndPoint.h"
#include "PackageDTO.h"
#include "Package.h"

void EndPoint::receivePackage(const PackageDTO& packageDTO) {
    Package package(packageDTO.getSender(), packageDTO.getReceiver(), packageDTO.getData());
    package.send();
}
