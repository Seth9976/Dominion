// 函数: _Z17DrawStringWrappedRK7XStringRK5RectFP6XAsset10ColorRgbaI13TextAlignment
// 地址: 0xf6f294
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
XAsset* var_58 = arg3
int128_t var_190
__builtin_memset(&var_190, 0, 0x40)
var_190.q = "NORMAL"
var_190:8.q = &var_58
int128_t var_170
var_170:0xc.d = 0x3f800000
int128_t var_130
__builtin_memset(&var_130, 0, 0xd0)
int128_t var_150
__builtin_memset(&var_150, 0, 0x24)
v0.q = *M3I
int64_t v1 = *(M3I + 8)
int32_t v2 = *(M3I + 0x10)
int32_t v3 = *(M3I + 0x14)
int64_t v4 = *(M3I + 0x18)
int32_t v5 = *(M3I + 0x20)
uint32_t x9 = *gRgbaINone
int128_t var_180
var_180:8.d = 0
var_180:0xc.d = arg5
uint64_t x4 = zx.q(*gRgbaIWhite)
int64_t var_50 = v0.q
var_170.d = arg4
var_170:8.d = x9
int32_t var_48 = 0
int32_t var_38 = 0
int32_t var_18 = 0
var_180.q = 0
int64_t var_44 = v1
int32_t var_3c = v2
int32_t var_34 = v3
int128_t var_30 = data_71a7f0
int64_t var_20 = v4
int32_t var_14 = v5
return DrawParentedStringFancy4(arg1, &var_50, arg2, &var_190, x4, nullptr)
