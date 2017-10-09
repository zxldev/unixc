#生成可执行文件
add_executable(linuxc-ch03-file file.c)

target_link_libraries(linuxc-ch03-file libcommon)

#set_property(TARGET linuxc PROPERTY C_STANDARD 99)

install(TARGETS linuxc-ch03-file DESTINATION bin)
