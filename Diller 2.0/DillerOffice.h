#ifndef DILLEROFFICE_H
#define DILLEROFFICE_H

#include "PackageDTO.h"

class DillerOffice {
public:
    PackageDTO createPackageDTO() {
        return PackageDTO("Diller", "Customer", "Product Information");
    }
};

#endif 

