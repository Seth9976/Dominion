// 函数: android_main
// 地址: 0x1068818
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UIDefFalseLink()
int128_t v0
v0.q = 0
v0:8.q = 0
int64_t** var_58
*gNativeActivityEngine = &var_58
int64_t var_50 = (zx.o(0)).q
int128_t var_40 = zx.o(0)
*arg1 = &var_58
arg1[1] = engine_handle_cmd
arg1[2] = sub_1068a30
var_58 = arg1
int64_t* x0 = arg1[3][1]
(*(*x0 + 0x20))(x0, gAndroidGlobals + 8, 0, v0)
XTrace("Android native activity init")
int64_t* x20 = *(gAndroidGlobals + 8)
int64_t x0_2 = (*(*x20 + 0x30))(x20, "android/os/Build$VERSION")
int32_t x0_6 = (*(*x20 + 0x4b0))(x20, x0_2, (*(*x20 + 0x480))(x20, x0_2, "SDK_INT", &data_76a42d))
XTrace("Android sdk version: %d")

if (x0_6 == 0x13)
    XTrace("Have KitKit")
    *gHaveAndroidKitKat = 1

GameSetUpcallInterface()
OpenGLInterfaceCreate()
SoLoudSoundInterfaceCreate()
AndroidNetworkInterfaceCreate()
*gAndroidGlobals = arg1[3][8]
(*(**gSoundInterface + 0x20))()
MicrophoneInitForApp()
AppInitialize()
AppSetFocus(true)
void* var_68
void var_5c

while (true)
    if ((ALooper_pollAll(zx.q((AppHasFocus() & 1) - 1), 0, &var_5c, &var_68) & 0x80000000) == 0)
        void* x1_4 = var_68
        
        if (x1_4 != 0)
            (*(x1_4 + 0x10))(arg1)
        
        if (*(arg1 + 0x64) != 0)
            break
    else if (var_50 != 0)
        AppUpdate()
        
        if ((GameIsDebugDrawFlagSet(0x40) & 1) == 0 && (GameIsDebugDrawFlagSet(0x20) & 1) == 0)
            continue
        
        AndroidUpdatePhoneStats()
XTrace("destroyRequested")
sub_1068710(&var_58)
XTrace("DetachCurrentThread")
int64_t result = (*(**(*(**gNativeActivityEngine + 0x18) + 8) + 0x28))()
*gNativeActivityEngine = 0
return result
