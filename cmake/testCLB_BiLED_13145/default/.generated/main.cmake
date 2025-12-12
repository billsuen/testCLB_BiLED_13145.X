# cmake files support debug production
include("${CMAKE_CURRENT_LIST_DIR}/rule.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/file.cmake")

set(testCLB_BiLED_13145_default_library_list )

# Handle files with suffix (s|as|asm|AS|ASM|As|aS|Asm), for group default-XC8
if(testCLB_BiLED_13145_default_default_XC8_FILE_TYPE_assemble)
add_library(testCLB_BiLED_13145_default_default_XC8_assemble OBJECT ${testCLB_BiLED_13145_default_default_XC8_FILE_TYPE_assemble})
    testCLB_BiLED_13145_default_default_XC8_assemble_rule(testCLB_BiLED_13145_default_default_XC8_assemble)
    list(APPEND testCLB_BiLED_13145_default_library_list "$<TARGET_OBJECTS:testCLB_BiLED_13145_default_default_XC8_assemble>")

endif()

# Handle files with suffix S, for group default-XC8
if(testCLB_BiLED_13145_default_default_XC8_FILE_TYPE_assemblePreprocess)
add_library(testCLB_BiLED_13145_default_default_XC8_assemblePreprocess OBJECT ${testCLB_BiLED_13145_default_default_XC8_FILE_TYPE_assemblePreprocess})
    testCLB_BiLED_13145_default_default_XC8_assemblePreprocess_rule(testCLB_BiLED_13145_default_default_XC8_assemblePreprocess)
    list(APPEND testCLB_BiLED_13145_default_library_list "$<TARGET_OBJECTS:testCLB_BiLED_13145_default_default_XC8_assemblePreprocess>")

endif()

# Handle files with suffix [cC], for group default-XC8
if(testCLB_BiLED_13145_default_default_XC8_FILE_TYPE_compile)
add_library(testCLB_BiLED_13145_default_default_XC8_compile OBJECT ${testCLB_BiLED_13145_default_default_XC8_FILE_TYPE_compile})
    testCLB_BiLED_13145_default_default_XC8_compile_rule(testCLB_BiLED_13145_default_default_XC8_compile)
    list(APPEND testCLB_BiLED_13145_default_library_list "$<TARGET_OBJECTS:testCLB_BiLED_13145_default_default_XC8_compile>")

endif()


# Main target for this project
add_executable(testCLB_BiLED_13145_default_image_927TkNDI ${testCLB_BiLED_13145_default_library_list})

set_target_properties(testCLB_BiLED_13145_default_image_927TkNDI PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${testCLB_BiLED_13145_default_output_dir})
set_target_properties(testCLB_BiLED_13145_default_image_927TkNDI PROPERTIES OUTPUT_NAME "default")
set_target_properties(testCLB_BiLED_13145_default_image_927TkNDI PROPERTIES SUFFIX ".elf")

target_link_libraries(testCLB_BiLED_13145_default_image_927TkNDI PRIVATE ${testCLB_BiLED_13145_default_default_XC8_FILE_TYPE_link})


# Add the link options from the rule file.
testCLB_BiLED_13145_default_link_rule(testCLB_BiLED_13145_default_image_927TkNDI)



