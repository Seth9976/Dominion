// 函数: _Z24DrawStringGetHeightFancyRK7XStringfP6XAssetfPK15FancyStringDataPf
// 地址: 0xf6ee40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* var_18 = arg3
int128_t var_140 = zx.o(0)
int128_t var_130
__builtin_memset(&var_130, 0, 0x110)
int128_t var_150
__builtin_memset(&var_150, 0, 0x18)
uint64_t x4 = zx.q(*gRgbaIWhite)
var_150.q = "NORMAL"
var_150:8.q = &var_18
var_140:8.q = 0x100000000
var_130.d = x4.d
var_130:0xc.d = arg4
int128_t v3
v3.d = float.s(0x49742400)
return WrapperDrawFancy(arg1, M4I, arg5, nullptr, x4, &var_150, arg6, nullptr)
