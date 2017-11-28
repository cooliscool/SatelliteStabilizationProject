#include "mainModel_withGravityGradientTorq_capi_host.h"
static mainModel_withGravityGradientTorq_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        mainModel_withGravityGradientTorq_host_InitializeDataMapInfo(&(root), "mainModel_withGravityGradientTorq");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
