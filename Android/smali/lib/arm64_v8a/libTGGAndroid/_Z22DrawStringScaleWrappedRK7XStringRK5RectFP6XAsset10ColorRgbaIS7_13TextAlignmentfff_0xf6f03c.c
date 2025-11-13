// 函数: _Z22DrawStringScaleWrappedRK7XStringRK5RectFP6XAsset10ColorRgbaIS7_13TextAlignmentfff
// 地址: 0xf6f03c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* var_58 = arg3
int128_t var_190
__builtin_memset(&var_190, 0, 0x1c)
int128_t var_180 = zx.o(0)
var_190.q = "NORMAL"
var_190:8.q = &var_58
int128_t var_170
__builtin_memset(&var_170, 0, 0x110)
var_170:0xc.d = arg7
int128_t var_140
var_140:4.d = arg8
var_140:8.d = arg9
arg8 = (*(M3I + 8)).d
var_170:8.d = arg5
uint64_t x4 = zx.q(*gRgbaIWhite)
arg9 = *(M3I + 0x10)
int32_t v3 = *(M3I + 0x14)
int64_t v4 = *(M3I + 0x18)
int32_t v5 = *(M3I + 0x20)
int64_t var_50 = (*M3I).d.q
var_180:0xc.d = arg6
var_170.d = arg4
int32_t var_48 = 0
int32_t var_38 = 0
int32_t var_18 = 0
int64_t var_44 = arg8.q
float var_3c = arg9
int32_t var_34 = v3
int128_t var_30 = (data_71a7f0).d.o
int64_t var_20 = v4
int32_t var_14 = v5
return DrawParentedStringFancy4(arg1, &var_50, arg2, &var_190, x4, nullptr)
