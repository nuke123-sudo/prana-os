set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)

function(pranaos_kernel_module name sources)
    add_library(${name} STATIC ${sources})
    install(FILES $<TARGET_OBJECTS:${name}> DESTINATION mod)
endfunction()

pranaos_kernel_module(TestModule TestModule.cpp)
