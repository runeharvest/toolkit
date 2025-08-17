FILE(GLOB SRC *.cpp *.h *.rc *.rc2)

SOURCE_GROUP("" FILES ${SRC})

ADD_EXECUTABLE(build_samplebank ${SRC})

TARGET_LINK_LIBRARIES(build_samplebank nelmisc nelsound)
NL_DEFAULT_PROPS(build_samplebank "NeL, Tools, Sound: build_samplebank")
NL_ADD_RUNTIME_FLAGS(build_samplebank)

SET_TARGET_PROPERTIES(build_samplebank PROPERTIES
  INSTALL_RPATH "$ORIGIN/lib:$ORIGIN/../lib"
  BUILD_RPATH   "$ORIGIN/lib:$ORIGIN/../lib")

INSTALL(TARGETS build_samplebank RUNTIME DESTINATION ${NL_BIN_PREFIX} COMPONENT toolssound)
