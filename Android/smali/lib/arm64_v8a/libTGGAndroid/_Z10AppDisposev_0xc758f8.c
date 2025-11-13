// 函数: _Z10AppDisposev
// 地址: 0xc758f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(**gAppInterface + 8))()

if (zx.d(*(*gpAppData + 0x40)) != 0)
    GameDispose()

NotificationsDisposeForApp()
NetworkDisposeForApp()
InputDisposeForApp()
AssetUtilDisposeForApp()
SphereTreeDisposeForApp()
FontDisposeForApp()
RendererDisposeForApp()
VRDisposeForApp()
MicrophoneDisposeForApp()
UIDispose()
UI2Dispose()
FabsDispose()
AssetSourceDisposeForApp()
DefinitionsDisposeForApp()
SoundDisposeForApp()
TextureDisposeForApp()
GraphicsDisposeForApp()
RTreesDispose()
PlatformDisposeForApp()
void* x0_1 = *gpAppData

if (x0_1 != 0)
    XPooledFree(x0_1, 0x48)
    *gpAppData = 0

ProfilerDisposeForApp()
AllocatorDisposeForApp()
XMemoryDisposeForApp()
XAssertDisposeForApp()
return XUpcallDisposeForApp() __tailcall
