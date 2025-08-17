FILE(GLOB SRC *.cpp *.h *.rc)

SOURCE_GROUP("" FILES ${SRC})

ADD_EXECUTABLE(build_interface ${SRC})

TARGET_LINK_LIBRARIES(build_interface nelmisc)
NL_DEFAULT_PROPS(build_interface "NeL, Tools, 3D: build_interface")
NL_ADD_RUNTIME_FLAGS(build_interface)


SET_TARGET_PROPERTIES(build_interface PROPERTIES
  INSTALL_RPATH "$ORIGIN/lib:$ORIGIN/../lib"
  BUILD_RPATH   "$ORIGIN/lib:$ORIGIN/../lib")

INSTALL(TARGETS build_interface RUNTIME DESTINATION ${NL_BIN_PREFIX} COMPONENT tools3d)
