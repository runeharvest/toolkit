FILE(GLOB SRC *.cpp *.h)

ADD_EXECUTABLE(extract_filename ${SRC})

TARGET_LINK_LIBRARIES(extract_filename nelmisc)
NL_DEFAULT_PROPS(extract_filename "NeL, Tools, Misc: extract_filename")
NL_ADD_RUNTIME_FLAGS(extract_filename)

SET_TARGET_PROPERTIES(extract_filename PROPERTIES
  INSTALL_RPATH "$ORIGIN/lib:$ORIGIN/../lib"
  BUILD_RPATH   "$ORIGIN/lib:$ORIGIN/../lib")

INSTALL(TARGETS extract_filename RUNTIME DESTINATION ${NL_BIN_PREFIX} COMPONENT toolsmisc)
