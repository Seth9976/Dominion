// 函数: _Z10DrawLabelsRK5RectFRK13HistogramDataiiffRK14HistogramStyle
// 地址: 0xc39adc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int64_t entry_x22
int64_t var_20 = entry_x22
uint64_t x24 = zx.q(arg4 - 1)

if (arg4 s< 1)
    return 

v8 = arg5.q
arg5 = *arg1
v9.d = arg6 / fconvert.s(1.5f)
int32_t x26_1 = arg3 s/ x24.d
v12.d = v8.d f* fconvert.s(3f)
int32_t x25_1 = 0
int64_t fp_1 = zx.q(arg4) - 1
v13.d = (*(arg1 + 8) - arg5) / float.s(arg3)
HistogramData const& x20_1 = arg2

while (true)
    arg5 = arg5 + v13.d f* float.s(x25_1)
    
    if (x24 == 0)
        v10.d = v12.d f+ arg5
    else
        v10.d = arg5
    
    int32_t x23_1
    
    x23_1 = x24 == 0 ? 9 : 8
    
    int32_t x8_3
    
    if (x24 == 0)
        x8_3 = *(arg2 + 8) + *(arg2 + (sx.q(arg3) << 3) - 8) - *arg2
    else
        x8_3 = *x20_1
    
    int32_t x0
    
    if (x8_3 == 0)
        x0 = 0
    else
        x0 = x8_3 - 1
    
    v11.d = *(arg1 + 0xc) f+ v8.d
    XStringFromInt(x0)
    char* x0_1 = XString::operator char const*()
    entry_x22 = (entry_x22 & 0xffffffff00000000) | zx.q(*(arg7 + 0x10))
    DrawStringScale(x0_1, *arg7, entry_x22, zx.q(x23_1), v10.d, v11.d, v9.d)
    XString::~XString()
    
    if (fp_1 == 0)
        break
    
    arg5 = *arg1
    x24 -= 1
    x20_1 += zx.q(x26_1) << 0x20 s>> 0x1d
    x25_1 += x26_1
    fp_1 -= 1
