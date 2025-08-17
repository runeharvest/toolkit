FILE(GLOB SRC *.cpp *.h *.rc)

SOURCE_GROUP("" FILES ${SRC})

ADD_EXECUTABLE(build_coarse_mesh ${SRC})

TARGET_LINK_LIBRARIES(build_coarse_mesh nel3d nelmisc)
NL_DEFAULT_PROPS(build_coarse_mesh "NeL, Tools, 3D: build_coarse_mesh")
NL_ADD_RUNTIME_FLAGS(build_coarse_mesh)


SET_TARGET_PROPERTIES(build_coarse_mesh PROPERTIES
  INSTALL_RPATH "$ORIGIN/lib:$ORIGIN/../lib"
  BUILD_RPATH   "$ORIGIN/lib:$ORIGIN/../lib")

INSTALL(TARGETS build_coarse_mesh RUNTIME DESTINATION ${NL_BIN_PREFIX} COMPONENT tools3d)
