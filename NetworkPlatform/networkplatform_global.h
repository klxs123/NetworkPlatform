#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(NETWORKPLATFORM_LIB)
#  define NETWORKPLATFORM_EXPORT Q_DECL_EXPORT
# else
#  define NETWORKPLATFORM_EXPORT Q_DECL_IMPORT
# endif
#else
# define NETWORKPLATFORM_EXPORT
#endif
