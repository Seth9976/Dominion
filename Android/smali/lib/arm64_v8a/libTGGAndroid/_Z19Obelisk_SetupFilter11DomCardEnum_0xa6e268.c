// 函数: _Z19Obelisk_SetupFilter11DomCardEnum
// 地址: 0xa6e268
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d == 0x923)
    return 1

int32_t x19 = arg1.d

if ((PregameCardIs(arg1, 0x2000000000000) & 1) == 0
        && (PregameCardIs(zx.q(x19), 0x1000000000000) & 1) == 0)
    return PregameCardIs(zx.q(x19), 4) __tailcall

return 0
