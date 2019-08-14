cmake_minimum_required(VERSION 3.13)

# default part name, will be used to choose the correct startup files and CMSIS headers
set(DEVICE_TYPE "SAML21G18B" CACHE STRING "Manufacturer Part Number of the processor")
# get substring of the part number that is the part family. Kinda hacky? only works for SAM parts now
string(SUBSTRING ${DEVICE_TYPE} 0 6 DEVICE_FAMILY)
string(TOLOWER ${DEVICE_FAMILY} DEVICE_FAMILY_LOWER)

# add the CMSIS core module
add_subdirectory(cmsis_core_m)
# declare this library and set it as an INTERFACE library.
# this means we don't actually compile anything, we just provide files and properties to consumers
add_library(seal-device INTERFACE)

# create some definitions for the consumer based on the device type.
# these are added just like a -D of #define command
target_compile_definitions(seal-device
    INTERFACE
        __${DEVICE_TYPE}__
        __${DEVICE_FAMILY}__
        # define the correct clock speed based on device type, using CMake Generator expressions (just ugly ternaries)
        $<$<STREQUAL:$<UPPER_CASE:"${DEVICE_FAMILY}">,"SAML21">:__SYSTEM_CLOCK=4000000>
        $<$<STREQUAL:$<UPPER_CASE:"${DEVICE_FAMILY}">,"SAMD21">:__SYSTEM_CLOCK=1000000>
        $<$<STREQUAL:$<UPPER_CASE:"${DEVICE_FAMILY}">,"SAMD51">:__SYSTEM_CLOCK=48000000>
)

# all consumers should use these include directories
target_include_directories(seal-device
    INTERFACE
        ${CMAKE_CURRENT_LIST_DIR}
)

# all consumers should use these sources
target_sources(seal-device
    INTERFACE
        ./system_device.h
        ./device.h
        ./system_device.c
        ./startup_${DEVICE_FAMILY_LOWER}.c
)

# all consumers should link to these modules
target_link_libraries(seal-device
    INTERFACE
        cmsisCore_M
)

# select linker script based on device type
string(TOLOWER ${DEVICE_TYPE} DEVICE_TYPE_LOWER)
target_link_options(seal-device
    INTERFACE
        -T${CMAKE_CURRENT_LIST_DIR}/link/${DEVICE_TYPE_LOWER}_flash.ld
)
