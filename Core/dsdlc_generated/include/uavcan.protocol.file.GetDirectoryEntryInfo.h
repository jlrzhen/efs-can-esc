

#pragma once
#include <uavcan.protocol.file.GetDirectoryEntryInfo_req.h>
#include <uavcan.protocol.file.GetDirectoryEntryInfo_res.h>

#define UAVCAN_PROTOCOL_FILE_GETDIRECTORYENTRYINFO_ID 46
#define UAVCAN_PROTOCOL_FILE_GETDIRECTORYENTRYINFO_SIGNATURE (0x8C46E8AB568BDA79ULL)


#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
#include <canard/cxx_wrappers.h>
SERVICE_MESSAGE_CXX_IFACE(uavcan_protocol_file_GetDirectoryEntryInfo, UAVCAN_PROTOCOL_FILE_GETDIRECTORYENTRYINFO_ID, UAVCAN_PROTOCOL_FILE_GETDIRECTORYENTRYINFO_SIGNATURE, UAVCAN_PROTOCOL_FILE_GETDIRECTORYENTRYINFO_REQUEST_MAX_SIZE, UAVCAN_PROTOCOL_FILE_GETDIRECTORYENTRYINFO_RESPONSE_MAX_SIZE);
#endif
