FILE(GLOB SRC *.cpp *.h ../zone_lib/*.cpp ../zone_lib/*.h *.rc)

SOURCE_GROUP("" FILES ${SRC})

ADD_EXECUTABLE(zone_lighter ${SRC})

TARGET_LINK_LIBRARIES(zone_lighter nel3d nelgeorges nelmisc)
NL_DEFAULT_PROPS(zone_lighter "NeL, Tools, 3D: zone_lighter")
NL_ADD_RUNTIME_FLAGS(zone_lighter)

SET_TARGET_PROPERTIES(zone_lighter PROPERTIES
  INSTALL_RPATH "$ORIGIN/lib:$ORIGIN/../lib"
  BUILD_RPATH   "$ORIGIN/lib:$ORIGIN/../lib")

INSTALL(TARGETS zone_lighter RUNTIME DESTINATION ${NL_BIN_PREFIX} COMPONENT tools3d)
