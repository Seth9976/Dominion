// 函数: _Z12UI2ItemResetR3UI2R8UI2PropsR14UI2PropsStaticb
// 地址: 0x101819c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
int128_t v1
int128_t v2
int128_t v3

if ((zx.d(data_24b48e0) & 1) == 0)
    int32_t x0_2
    x0_2, v0, v1, v2, v3 = __cxa_guard_acquire(&data_24b48e0)
    
    if (x0_2 != 0)
        v0.q = 0
        v0:8.q = 0
        __builtin_memset(&data_24b4c90, 0, 0x88)
        v0, v1, v2, v3 = __cxa_guard_release(&data_24b48e0, v0)

if ((zx.d(data_24b48e8) & 1) == 0)
    int32_t x0_3
    x0_3, v0, v1, v2, v3 = __cxa_guard_acquire(&data_24b48e8)
    
    if (x0_3 != 0)
        LocString::LocString()
        XString::XString()
        memset(0x24b5438, 0, 0x218)
        DefinitionFillBlockWithDefaultsIgnoreHoles(0x24b5438, *defMapUI2PropsStatic)
        __cxa_atexit(UI2PropsStatic::~UI2PropsStatic, 0x24b5438, &data_1122730)
        v0, v1, v2, v3 = __cxa_guard_release(&data_24b48e8)

*arg2 = data_24b4c90
v0 = data_24b4ca0
v2 = data_24b4cd0
v3 = data_24b4cb0
*(arg2 + 0x30) = data_24b4cc0
*(arg2 + 0x40) = v2
*(arg2 + 0x10) = v0
*(arg2 + 0x20) = v3
v1 = data_24b4d00
v0 = data_24b4ce0
v2 = data_24b4cf0
*(arg2 + 0x80) = data_24b4d10
*(arg2 + 0x60) = v2
*(arg2 + 0x70) = v1
*(arg2 + 0x50) = v0
memcpy(arg3, 0x24b5438, 0x208)
int64_t result
int128_t v2_1
result, v2_1 = XString::operator=(arg3 + 0x208)
*(arg1 + 0xc1c) = zx.o(0)
*(arg1 + 0xc2c) = zx.o(0)
*(arg1 + 0xc38) = zx.o(0)
*(arg1 + 0xc18) = 0x3f800000
*(arg1 + 0xc50) = 0
*(arg1 + 0xc48) = -0xffffffff
__builtin_memset(arg1 + 0xe44, 0, 0x2c)
*(arg1 + 0xe40) = 0x3f800000
*(arg1 + 0xe70) = -0xffffffff
*(arg1 + 0xe78) = 0
__builtin_memset(arg1 + 0xdcc, 0, 0x2c)
*(arg1 + 0xdc8) = 0x3f800000
*(arg1 + 0xdf8) = -0xffffffff
*(arg1 + 0xe00) = 0
v2_1 = *RECT1
__builtin_memset(arg1 + 0xd54, 0, 0x68)
*(arg1 + 0xdbc) = -0xffffffff
*(arg1 + 0xd44) = v2_1
*(arg1 + 0xdc4) = 0
uint32_t x11_6 = *gRgbaIWhite
__builtin_memset(arg1 + 0xfc4, 0, 0x2c)
*(arg1 + 0xff0) = -0xffffffff
*(arg1 + 0xff8) = 0
*(arg1 + 0xfc0) = x11_6
__builtin_memset(arg1 + 0x1000, 0, 0x2c)
*(arg1 + 0xffc) = x11_6
*(arg1 + 0x102c) = -0xffffffff
*(arg1 + 0x1034) = 0
__builtin_memset(arg1 + 0x103c, 0, 0x2c)
*(arg1 + 0x1038) = x11_6
*(arg1 + 0x1068) = -0xffffffff
*(arg1 + 0x1070) = 0
__builtin_memset(arg1 + 0x1078, 0, 0x2c)
*(arg1 + 0x1074) = x11_6
*(arg1 + 0x10a4) = -0xffffffff
*(arg1 + 0x10ac) = 0
__builtin_memset(arg1 + 0x10b4, 0, 0x2c)
*(arg1 + 0x10b0) = x11_6
*(arg1 + 0x10e0) = -0xffffffff
*(arg1 + 0x10e8) = 0
uint32_t x9_6 = *gRgbaINone
*(arg1 + 0x110c) = zx.o(0)
*(arg1 + 0x10ec) = x9_6
__builtin_memset(arg1 + 0x10f0, 0, 0x20)
*(arg1 + 0x111c) = -0xffffffff
*(arg1 + 0x1124) = 0
__builtin_memset(arg1 + 0xe7c, 0, 0x30)
*(arg1 + 0xeac) = -0xffffffff
__builtin_memset(arg1 + 0xeb4, 0, 0x34)
*(arg1 + 0xee8) = -0xffffffff
*(arg1 + 0xef0) = 0
v2_1.q = data_24b48d8
__builtin_memset(arg1 + 0xefc, 0, 0x40)
*(arg1 + 0xf3c) = -0xffffffff
*(arg1 + 0xef4) = v2_1.q
*(arg1 + 0xf44) = 0
*(arg1 + 0x14c4) = 0x3f800000
*(arg1 + 0x14e4) = 0x3f800000
*(arg1 + 0x1484) = 0x42480000
*(arg1 + 0x148c) = 0x3f800000
*(arg1 + 0x1608) = 0
return result
