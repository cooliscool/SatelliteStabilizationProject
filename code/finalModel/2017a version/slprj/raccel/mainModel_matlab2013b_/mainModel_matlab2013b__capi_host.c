#include "mainModel_matlab2013b__capi_host.h"
static mainModel_matlab2013b__host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        mainModel_matlab2013b__host_InitializeDataMapInfo(&(root), "mainModel_matlab2013b_");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
