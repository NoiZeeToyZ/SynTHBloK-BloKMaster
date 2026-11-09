// SynTHBloK-BloKMaster: registers this plugin's modules.
#include "plugin.hpp"

Plugin* pluginInstance;

extern Model* modelBloKMaster;

void init(Plugin* p) {
    pluginInstance = p;
    p->addModel(modelBloKMaster);
}
