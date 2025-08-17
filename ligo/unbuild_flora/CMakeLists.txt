FILE(GLOB SRC *.cpp *.h *.rc)

SOURCE_GROUP("" FILES ${SRC})

ADD_EXECUTABLE(nl_unbuild_flora ${SRC})

TARGET_LINK_LIBRARIES(nl_unbuild_flora nel3d nelmisc nelligo nelgeorges)
NL_DEFAULT_PROPS(nl_unbuild_flora "NeL, Tools, Ligo: Unbuild Flora")
NL_ADD_RUNTIME_FLAGS(nl_unbuild_flora)

SET_TARGET_PROPERTIES(nl_unbuild_flora PROPERTIES
  INSTALL_RPATH "$ORIGIN/lib:$ORIGIN/../lib"
  BUILD_RPATH   "$ORIGIN/lib:$ORIGIN/../lib")

INSTALL(TARGETS nl_unbuild_flora RUNTIME DESTINATION ${NL_BIN_PREFIX} COMPONENT toolsligo)
