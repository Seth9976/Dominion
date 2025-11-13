// 函数: _Z23VRGetHandControllerTypev
// 地址: 0x10610cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = *gGlobalVRAppType

if (x8 != 3)
    return zx.q((x8 == 5 ? 1 : 0) << 1)

return 1
