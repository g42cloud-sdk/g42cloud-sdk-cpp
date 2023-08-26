#ifndef G42CLOUD_SDK_VPC_V2_VpcExport_H_
#define G42CLOUD_SDK_VPC_V2_VpcExport_H_

#include <g42cloud/core/EXPORT.h>

#if defined(G42CLOUD_SHARED)
#	if defined(G42CLOUD_VPC_V2_SHARED)
#		define G42CLOUD_VPC_V2_EXPORT G42CLOUD_EXPORT
#	else
#		define G42CLOUD_VPC_V2_EXPORT G42CLOUD_IMPORT
#	endif
#else
#	define G42CLOUD_VPC_V2_EXPORT
#endif

#endif // !G42CLOUD_SDK_VPC_V2_VpcExport_H_