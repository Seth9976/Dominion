// 函数: _Z8DrawAxisRK5RectFPKciifRK14HistogramStyle
// 地址: 0xc399e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_40 = v10
int64_t v9
int64_t var_38 = v9
int128_t var_50 = (*arg1).d.o
var_50:0xc.d = var_50:4.d + arg5
int64_t result
int128_t v0
result, v0 = DrawRectSolid(&var_50, arg6 + 0x10)

if ((arg4 & 0x80000000) == 0)
    float v2_1 = *arg1
    float v1_1 = *(arg1 + 8) - v2_1
    int128_t var_60 = *arg1
    v0.d = fconvert.s(0.5f)
    v9.d = v1_1 / float.s(arg4)
    v10.d = arg5 f* v0.d
    v0.d = v9.d f* 0f
    v0.d = v0.d f+ v2_1
    v0.d = v0.d f- v10.d
    var_60.d = v0.d
    var_60:8.d = v0.d f+ arg5
    int128_t v0_1
    result, v0_1 = DrawRectSolid(&var_60, arg6 + 0x10)
    
    if (arg4 != 0)
        int32_t x22_1 = 0
        
        do
            float v1_2 = *arg1
            x22_1 += 1
            var_60 = *arg1
            v0_1.d = v9.d f* float.s(x22_1) + v1_2
            v0_1.d = v0_1.d f- v10.d
            var_60.d = v0_1.d
            var_60:8.d = v0_1.d f+ arg5
            result, v0_1 = DrawRectSolid(&var_60, arg6 + 0x10)
        while (arg4 != x22_1)

return result
