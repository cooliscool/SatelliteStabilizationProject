#include "mainModel_matlab2013a_debugVersion_capi_host.h"
static mainModel_matlab2013a_debugVersion_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        mainModel_matlab2013a_debugVersion_host_InitializeDataMapInfo(&(root), "mainModel_matlab2013a_debugVersion");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
