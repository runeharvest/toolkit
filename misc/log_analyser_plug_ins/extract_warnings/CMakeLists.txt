FILE(GLOB SRC *.cpp *.h ${CMAKE_SOURCE_DIR}/nelns/admin_executor_service/log_report.cpp)

ADD_LIBRARY(extract_warnings MODULE ${SRC} extract_warnings.def)

TARGET_LINK_LIBRARIES(extract_warnings nelmisc)
NL_DEFAULT_PROPS(extract_warnings "NeL, Tools, Misc: extract_warnings")
NL_ADD_RUNTIME_FLAGS(extract_warnings)

NL_ADD_LIB_SUFFIX(extract_warnings)

SET_TARGET_PROPERTIES(extract_warnings PROPERTIES
  INSTALL_RPATH "$ORIGIN/lib:$ORIGIN/../lib"
  BUILD_RPATH   "$ORIGIN/lib:$ORIGIN/../lib")

INSTALL(TARGETS extract_warnings RUNTIME DESTINATION ${NL_BIN_PREFIX} LIBRARY DESTINATION lib/log_analyser COMPONENT toolsmisc)
