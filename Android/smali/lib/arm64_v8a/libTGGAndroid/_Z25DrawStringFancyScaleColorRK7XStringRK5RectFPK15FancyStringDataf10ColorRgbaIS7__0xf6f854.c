// 函数: _Z25DrawStringFancyScaleColorRK7XStringRK5RectFPK15FancyStringDataf10ColorRgbaIS7_
// 地址: 0xf6f854
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (not(arg4 != 0f))
    return 

int128_t v6
v6.d = *(M3I + 0x20)
int64_t v1
v1.d = (*M3I).d f* arg4
v1:4.d = v1:4.d f* arg4
int64_t v2
v2.d = (*(M3I + 8)).d f* arg4
v2:4.d = v2:4.d f* arg4
float v3 = *(M3I + 0x10) * arg4
float v4 = *(M3I + 0x14) * arg4
int64_t v5
v5.d = (*(M3I + 0x18)).d f* arg4
v5:4.d = v5:4.d f* arg4
int32_t var_48 = 0
int32_t var_38 = 0
int32_t var_18 = 0
int128_t var_30 = data_71a7f0
int64_t var_50 = v1
int64_t var_44 = v2
float var_3c = v3
float var_34 = v4
int64_t var_20 = v5
float var_14 = v6.d f* arg4
DrawParentedStringFancy4(arg1, &var_50, arg2, arg3, zx.q(arg5), arg6)
