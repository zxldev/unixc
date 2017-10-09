#设置环境变量
set(APP_SRC ls.c)

#生成可执行文件
add_executable(linuxc-ch01-ls ${APP_SRC})
add_executable(linuxc-ch01-shell shell.c)
add_executable(linuxc-ch01-main main.c)
target_link_libraries(linuxc-ch01-shell libcommon)
target_link_libraries(linuxc-ch01-ls libcommon)

target_link_libraries(linuxc-ch01-main libcommon)

#set_property(TARGET linuxc PROPERTY C_STANDARD 99)


install(TARGETS linuxc-ch01-ls DESTINATION bin)
install(TARGETS linuxc-ch01-shell DESTINATION bin)
install(TARGETS linuxc-ch01-main DESTINATION bin)