FILE(GLOB SRC *.cpp *.h *.rc)

SOURCE_GROUP("" FILES ${SRC})

ADD_EXECUTABLE(shapes_exporter WIN32 ${SRC})

TARGET_LINK_LIBRARIES(shapes_exporter nelmisc nel3d)
NL_DEFAULT_PROPS(shapes_exporter "NeL, Tools, 3D: Shapes Exporter")
NL_ADD_RUNTIME_FLAGS(shapes_exporter)

SET_TARGET_PROPERTIES(shapes_exporter PROPERTIES
  INSTALL_RPATH "$ORIGIN/lib:$ORIGIN/../lib"
  BUILD_RPATH   "$ORIGIN/lib:$ORIGIN/../lib")

INSTALL(TARGETS shapes_exporter RUNTIME DESTINATION ${NL_BIN_PREFIX} COMPONENT tools3d)
