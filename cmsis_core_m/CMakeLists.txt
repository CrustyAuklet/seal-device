cmake_minimum_required(VERSION 3.13)

# declare this library and set it as an INTERFACE library.
# this means we don't actually compile anything, we just provide files and properties to consumers
add_library(cmsisCore_M INTERFACE)

# all consumers should use these include directories
target_include_directories(cmsisCore_M
    INTERFACE
        ${CMAKE_CURRENT_LIST_DIR}
)

# all consumers should use these sources
target_sources(cmsisCore_M
    INTERFACE
        ./core_sc300.h
        ./mpu_armv7.h
        ./mpu_armv8.h
        ./tz_context.h
        ./cmsis_armcc.h
        ./cmsis_armclang.h
        ./cmsis_armclang_ltm.h
        ./cmsis_compiler.h
        ./cmsis_gcc.h
        ./cmsis_iccarm.h
        ./cmsis_version.h
        ./core_armv8mbl.h
        ./core_armv8mml.h
        ./core_armv81mml.h
        ./core_cm0.h
        ./core_cm0plus.h
        ./core_cm1.h
        ./core_cm3.h
        ./core_cm4.h
        ./core_cm7.h
        ./core_cm23.h
        ./core_cm33.h
        ./core_cm35p.h
        ./core_sc000.h
)
