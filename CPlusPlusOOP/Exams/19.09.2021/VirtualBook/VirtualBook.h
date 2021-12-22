#ifndef VIRTUALBOOK_VIRTUALBOOK_H
#define VIRTUALBOOK_VIRTUALBOOK_H

#include "VirtualPage.h"

class VirtualBook {

public:
    void addPage(VirtualPage page);

    void printContent() const;

    void removeLastPage();

    void removeAllPages();

private:
    std::vector<VirtualPage> _pages{ };
};

#endif //VIRTUALBOOK_VIRTUALBOOK_H
