#include "mainModel_matlab2013b_working_attitude_capi_host.h"
static mainModel_matlab2013b_working_attitude_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        mainModel_matlab2013b_working_attitude_host_InitializeDataMapInfo(&(root), "mainModel_matlab2013b_working_attitude");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
