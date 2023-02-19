#pragma once

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

#define VERSION_MAJOR 2
#define VERSION_MINOR 1
#define VERSION_PATCH 0
#define VERSION_REVISION 4

#define VERSION_STRING TOSTRING(VERSION_MAJOR) "." TOSTRING(VERSION_MINOR) "." TOSTRING(VERSION_PATCH) "." TOSTRING(VERSION_REVISION)
#define PRODUCT_VERSION VERSION_STRING
