// 函数: _Z19GLDupCheck_glEnableii12DupStateType
// 地址: 0xf89a98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(*gOpenGLInterface + (zx.q(arg3) << 2) + 0x4020) == arg2)
    return 

if (arg2 == 0)
    glDisable()
else
    glEnable()

*(*gOpenGLInterface + (zx.q(arg3) << 2) + 0x4020) = arg2
