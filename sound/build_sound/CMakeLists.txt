FILE(GLOB SRC *.cpp *.h *.rc *.rc2)

SOURCE_GROUP("" FILES ${SRC})

ADD_EXECUTABLE(build_sound ${SRC})

TARGET_LINK_LIBRARIES(build_sound nelmisc nelsound)
NL_DEFAULT_PROPS(build_sound "NeL, Tools, Sound: build_sound")
NL_ADD_RUNTIME_FLAGS(build_sound)

SET_TARGET_PROPERTIES(build_sound PROPERTIES
  INSTALL_RPATH "$ORIGIN/lib:$ORIGIN/../lib"
  BUILD_RPATH   "$ORIGIN/lib:$ORIGIN/../lib")

INSTALL(TARGETS build_sound RUNTIME DESTINATION ${NL_BIN_PREFIX} COMPONENT toolssound)
