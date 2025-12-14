# The following variables contains the files used by the different stages of the build process.
set(testCLB_BiLED_13145_default_default_XC8_FILE_TYPE_assemble)
set_source_files_properties(${testCLB_BiLED_13145_default_default_XC8_FILE_TYPE_assemble} PROPERTIES LANGUAGE ASM)

# For assembly files, add "." to the include path for each file so that .include with a relative path works
foreach(source_file ${testCLB_BiLED_13145_default_default_XC8_FILE_TYPE_assemble})
        set_source_files_properties(${source_file} PROPERTIES INCLUDE_DIRECTORIES "$<PATH:NORMAL_PATH,$<PATH:REMOVE_FILENAME,${source_file}>>")
endforeach()

set(testCLB_BiLED_13145_default_default_XC8_FILE_TYPE_assemblePreprocess "${CMAKE_CURRENT_SOURCE_DIR}/../../../mcc_generated_files/clb/src/clbBitstream.S")
set_source_files_properties(${testCLB_BiLED_13145_default_default_XC8_FILE_TYPE_assemblePreprocess} PROPERTIES LANGUAGE ASM)

# For assembly files, add "." to the include path for each file so that .include with a relative path works
foreach(source_file ${testCLB_BiLED_13145_default_default_XC8_FILE_TYPE_assemblePreprocess})
        set_source_files_properties(${source_file} PROPERTIES INCLUDE_DIRECTORIES "$<PATH:NORMAL_PATH,$<PATH:REMOVE_FILENAME,${source_file}>>")
endforeach()

set(testCLB_BiLED_13145_default_default_XC8_FILE_TYPE_compile
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../config_16F13145.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../main.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../mcc_generated_files/adc/src/adc.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../mcc_generated_files/clb/src/clb1.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../mcc_generated_files/crc/src/crc.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../mcc_generated_files/nvm/src/nvm.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../mcc_generated_files/system/src/clock.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../mcc_generated_files/system/src/config_bits.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../mcc_generated_files/system/src/interrupt.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../mcc_generated_files/system/src/pins.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../mcc_generated_files/system/src/system.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../mcc_generated_files/timer/src/tmr0.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../mcc_generated_files/timer/src/tmr2.c")
set_source_files_properties(${testCLB_BiLED_13145_default_default_XC8_FILE_TYPE_compile} PROPERTIES LANGUAGE C)
set(testCLB_BiLED_13145_default_default_XC8_FILE_TYPE_link)
set(testCLB_BiLED_13145_default_image_name "default.elf")
set(testCLB_BiLED_13145_default_image_base_name "default")

# The output directory of the final image.
set(testCLB_BiLED_13145_default_output_dir "${CMAKE_CURRENT_SOURCE_DIR}/../../../out/testCLB_BiLED_13145")

# The full path to the final image.
set(testCLB_BiLED_13145_default_full_path_to_image ${testCLB_BiLED_13145_default_output_dir}/${testCLB_BiLED_13145_default_image_name})
