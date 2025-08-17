FILE(GLOB SRC *.cpp *.h *.rc)

SOURCE_GROUP("" FILES ${SRC})

ADD_EXECUTABLE(exec_timeout ${SRC})

TARGET_LINK_LIBRARIES(exec_timeout nelmisc)
NL_DEFAULT_PROPS(exec_timeout "NeL, Tools, Misc: exec_timeout")
NL_ADD_RUNTIME_FLAGS(exec_timeout)

SET_TARGET_PROPERTIES(exec_timeout PROPERTIES
  INSTALL_RPATH "$ORIGIN/lib:$ORIGIN/../lib"
  BUILD_RPATH   "$ORIGIN/lib:$ORIGIN/../lib")

INSTALL(TARGETS exec_timeout RUNTIME DESTINATION ${NL_BIN_PREFIX} COMPONENT toolsmisc)
