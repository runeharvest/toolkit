FILE(GLOB SRC *.cpp *.h *.rc)

SOURCE_GROUP("" FILES ${SRC})

ADD_EXECUTABLE(unbuild_land ${SRC})

TARGET_LINK_LIBRARIES(unbuild_land nel3d nelmisc nelligo)
NL_DEFAULT_PROPS(unbuild_land "NeL, Tools, Ligo: Unbuild Land")
NL_ADD_RUNTIME_FLAGS(unbuild_land)

SET_TARGET_PROPERTIES(unbuild_land PROPERTIES
  INSTALL_RPATH "$ORIGIN/lib:$ORIGIN/../lib"
  BUILD_RPATH   "$ORIGIN/lib:$ORIGIN/../lib")

INSTALL(TARGETS unbuild_land RUNTIME DESTINATION ${NL_BIN_PREFIX} COMPONENT toolsligo)
