#ifndef QRESTCLIENT_H
#define QRESTCLIENT_H

#include <QtCore/qglobal.h>

#if defined(QT_BUILD_RESTCLIENT_LIB)
#	define Q_RESTCLIENT_EXPORT Q_DECL_EXPORT
#else
#	define Q_RESTCLIENT_EXPORT Q_DECL_IMPORT
#endif

#endif // QRESTCLIENT_H