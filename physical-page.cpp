
#include "physical-page.h"

// default construct, page number bits and offset bits are both set to 8
PhysicalPage::PhysicalPage() {
    pageNumberBits = 8;
    offsetBits = 8;
}

// constructor, page number bits and offset bits are set by user
PhysicalPage::PhysicalPage(int x, int y) {
    pageNumberBits = x;
    offsetBits = y;
}

