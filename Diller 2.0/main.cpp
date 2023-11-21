#include "Client.h"
#include "DillerOffice.h"

int main() {
    DillerOffice dillerOffice;
    Client client;

    PackageDTO packageDTO = dillerOffice.createPackageDTO();

    client.sendPackage(packageDTO);

    return 0;
}
