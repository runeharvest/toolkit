FILE(GLOB SRC *.cpp *.h *.rc)

SOURCE_GROUP("" FILES ${SRC})

ADD_EXECUTABLE(build_clodtex ${SRC})

TARGET_LINK_LIBRARIES(build_clodtex nel3d nelmisc)
NL_DEFAULT_PROPS(build_clodtex "NeL, Tools, 3D: build_clodtex")
NL_ADD_RUNTIME_FLAGS(build_clodtex)


SET_TARGET_PROPERTIES(build_clodtex PROPERTIES
  INSTALL_RPATH "$ORIGIN/lib:$ORIGIN/../lib"
  BUILD_RPATH   "$ORIGIN/lib:$ORIGIN/../lib")

INSTALL(TARGETS build_clodtex RUNTIME DESTINATION ${NL_BIN_PREFIX} COMPONENT tools3d)
