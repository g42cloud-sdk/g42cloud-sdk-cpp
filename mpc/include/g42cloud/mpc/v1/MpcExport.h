#ifndef G42CLOUD_SDK_MPC_V1_MpcExport_H_
#define G42CLOUD_SDK_MPC_V1_MpcExport_H_

#include <g42cloud/core/EXPORT.h>

#if defined(G42CLOUD_SHARED)
#	if defined(G42CLOUD_MPC_V1_SHARED)
#		define G42CLOUD_MPC_V1_EXPORT G42CLOUD_EXPORT
#	else
#		define G42CLOUD_MPC_V1_EXPORT G42CLOUD_IMPORT
#	endif
#else
#	define G42CLOUD_MPC_V1_EXPORT
#endif

#endif // !G42CLOUD_SDK_MPC_V1_MpcExport_H_