// 函数: _Z13AppInitializev
// 地址: 0xc75798
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_18 = TimerStart()
XTrace("AppInitialize")
uint64_t x8 = *gAppInterface

if (x8 != 0)
    XFileExists(*(x8 + 8))

*gCompilingMode = 0
AppSetWorkingDirectory()
XAssertInitForApp()
XMemoryInitForApp()
AllocatorInitForApp()
ProfilerInitForApp()
*gpAppData = XPooledCalloc(0x48)
**gpAppData = XGetMachineTime()
int64_t* x8_2 = *gpAppData
x8_2[2].d = 0
x8_2[1] = *x8_2
float v0

if (zx.d(*(*gAppInterface + 0x3c)) == 0)
    v0 = float.s(0x3c23d70a)
else
    v0 = float.s(0x3c888889)

*gSecondsPerUpdateTarget = v0
PlatformInitForApp()
RTreesInit(0x400)
GraphicsInitForApp()
TextureInitForApp()
SoundInitForApp()
DefinitionsInitForApp()
AssetSourceInitForApp()
TimerStop(&var_18)
VRInitForApp()
TimerStop(&var_18)
XTrace("VRInitialize time %d ms")
RendererInitForApp()
FontInitForApp()
SphereTreeInitForApp()
AssetUtilInitForApp()
InputInitForApp()
NetworkInitForApp()
UIInit()
UI2Init()
FabsInit()
NotificationsInitForApp()
XUpcallInitForApp()
(***gAppInterface)()
TimerStop(&var_18)
return XTrace("AppInitialize time %d ms")
