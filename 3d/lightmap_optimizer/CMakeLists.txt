FILE(GLOB SRC *.cpp *.h *.rc)

SOURCE_GROUP("" FILES ${SRC})

ADD_EXECUTABLE(lightmap_optimizer ${SRC})

TARGET_LINK_LIBRARIES(lightmap_optimizer nel3d nelmisc)
NL_DEFAULT_PROPS(lightmap_optimizer "NeL, Tools, 3D: lightmap_optimizer")
NL_ADD_RUNTIME_FLAGS(lightmap_optimizer)

SET_TARGET_PROPERTIES(lightmap_optimizer PROPERTIES
  INSTALL_RPATH "$ORIGIN/lib:$ORIGIN/../lib"
  BUILD_RPATH   "$ORIGIN/lib:$ORIGIN/../lib")

INSTALL(TARGETS lightmap_optimizer RUNTIME DESTINATION ${NL_BIN_PREFIX} COMPONENT tools3d)
