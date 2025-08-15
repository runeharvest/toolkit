#pragma warning(disable : 4786)

// max.h include uses min/max in 3dsmax 2010 sdk
#include "Max.h"
#include <assert.h>
#ifdef min
#undef min
#endif
#ifdef max
#undef max
#endif

#define NOMINMAX
#include "buildver.h"
#include "decomp.h"
#include "dllentry.h"
#include "locale.h"
#include <algorithm>
#include <iparamb2.h>
#include <windows.h>
