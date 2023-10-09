#include "Vehicle_Model_2Track_capi_host.h"
static Vehicle_Model_2Track_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Vehicle_Model_2Track_host_InitializeDataMapInfo(&(root), "Vehicle_Model_2Track");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
