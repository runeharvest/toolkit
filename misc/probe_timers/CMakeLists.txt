FILE(GLOB SRC *.cpp *.h *.rc *.rc2)

SOURCE_GROUP("" FILES ${SRC})

ADD_EXECUTABLE(nl_probe_timers ${SRC})

TARGET_LINK_LIBRARIES(nl_probe_timers nelmisc)
NL_DEFAULT_PROPS(nl_probe_timers "NeL, Tools, Misc: Probe Timers")
NL_ADD_RUNTIME_FLAGS(nl_probe_timers)

SET_TARGET_PROPERTIES(nl_probe_timers PROPERTIES
  INSTALL_RPATH "$ORIGIN/lib:$ORIGIN/../lib"
  BUILD_RPATH   "$ORIGIN/lib:$ORIGIN/../lib")

INSTALL(TARGETS nl_probe_timers RUNTIME DESTINATION ${NL_BIN_PREFIX} COMPONENT toolsmisc)
