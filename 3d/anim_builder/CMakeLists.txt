FILE(GLOB SRC *.cpp *.h *.rc)

SOURCE_GROUP("" FILES ${SRC})

ADD_EXECUTABLE(anim_builder ${SRC})

TARGET_LINK_LIBRARIES(anim_builder nelmisc nel3d)
NL_DEFAULT_PROPS(anim_builder "NeL, Tools, 3D: anim_builder")
NL_ADD_RUNTIME_FLAGS(anim_builder)


SET_TARGET_PROPERTIES(anim_builder PROPERTIES
  INSTALL_RPATH "$ORIGIN/lib:$ORIGIN/../lib"
  BUILD_RPATH   "$ORIGIN/lib:$ORIGIN/../lib")

INSTALL(TARGETS anim_builder RUNTIME DESTINATION ${NL_BIN_PREFIX} COMPONENT tools3d)
