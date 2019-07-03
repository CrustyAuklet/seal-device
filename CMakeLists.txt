cmake_minimum_required(VERSION 3.13)

set(DEVICE_TYPE "SAML21G18B" CACHE STRING "Manufacturer Part Number of the processor")
#
string(SUBSTRING ${DEVICE_TYPE} 0 6 DEVICE_FAMILY)
string(TOLOWER ${DEVICE_FAMILY} DEVICE_FAMILY_LOWER)

add_subdirectory(cmsis_core_m)

add_library(seal-device INTERFACE)

target_compile_definitions(seal-device
    INTERFACE
        __${DEVICE_TYPE}__
        __${DEVICE_FAMILY}__
        $<$<STREQUAL:$<UPPER_CASE:"${DEVICE_FAMILY}">,"SAML21">:__SYSTEM_CLOCK=4000000>
        $<$<STREQUAL:$<UPPER_CASE:"${DEVICE_FAMILY}">,"SAMD21">:__SYSTEM_CLOCK=1000000>
        $<$<STREQUAL:$<UPPER_CASE:"${DEVICE_FAMILY}">,"SAMD51">:__SYSTEM_CLOCK=48000000>
)

target_include_directories(seal-device
    INTERFACE
        ${CMAKE_CURRENT_LIST_DIR}
)

target_sources(seal-device
    INTERFACE
        ./system_device.h
        ./device.h
        ./system_device.c
        ./startup_${DEVICE_FAMILY_LOWER}.c
)

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
