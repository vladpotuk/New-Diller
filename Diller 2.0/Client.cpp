#include "Client.h"

void Client::sendPackage(const PackageDTO& packageDTO) {
    endpoint.receivePackage(packageDTO);
}
