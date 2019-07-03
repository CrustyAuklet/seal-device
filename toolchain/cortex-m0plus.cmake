# Name of the target
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR cortex-m0plus)


# test compiles might need linker flag --specs=nosys.specs to since syscalls will be user provided
set(MCPU_FLAGS "-mthumb -mcpu=cortex-m0plus")
set(VFP_FLAGS "")
set(LD_FLAGS "-Wl,-Map=${PROJECT_NAME}.map -Wl,--cref")

include(${CMAKE_CURRENT_LIST_DIR}/common/arm-none-eabi.cmake)
