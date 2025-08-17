FILE(GLOB SRC *.cpp *.h *.rc)

SOURCE_GROUP("" FILES ${SRC})

ADD_EXECUTABLE(build_indoor_rbank ${SRC})

ADD_DEFINITIONS(-DNL_BIRB_CFG="${NL_ETC_PREFIX}/")

TARGET_LINK_LIBRARIES(build_indoor_rbank nelmisc nelpacs)
NL_DEFAULT_PROPS(build_indoor_rbank "NeL, Tools, PACS: build_indoor_rbank")
NL_ADD_RUNTIME_FLAGS(build_indoor_rbank)

SET_TARGET_PROPERTIES(build_indoor_rbank PROPERTIES
  INSTALL_RPATH "$ORIGIN/lib:$ORIGIN/../lib"
  BUILD_RPATH   "$ORIGIN/lib:$ORIGIN/../lib")

INSTALL(TARGETS build_indoor_rbank RUNTIME DESTINATION ${NL_BIN_PREFIX} COMPONENT toolspacs)
INSTALL(FILES build_indoor_rbank.cfg DESTINATION ${NL_ETC_PREFIX} COMPONENT toolspacs)
