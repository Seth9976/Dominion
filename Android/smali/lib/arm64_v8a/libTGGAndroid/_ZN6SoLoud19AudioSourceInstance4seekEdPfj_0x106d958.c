// 函数: _ZN6SoLoud19AudioSourceInstance4seekEdPfj
// 地址: 0x106d958
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v8 = arg1
arg1 = arg1 - *(arg2 + 0x60)
double v1

if (not(arg1 > 0.0))
    int32_t x0_1
    x0_1, v1 = (*(*arg2 i+ 0x28))(arg2, arg1)
    arg1 = v8
    
    if (x0_1 != 0)
        return 6

v1.d = arg2[0x11]
uint32_t x23_1 = vcvtmd_s32_f64(arg1 * fconvert.d(v1.d))

if (x23_1 != 0)
    uint32_t x22_1
    uint32_t temp0_2
    
    do
        int32_t entry_x2
        uint32_t x9_2 = entry_x2 u/ arg2[0x12]
        
        x22_1 = x9_2 s> x23_1 ? x23_1 : x9_2
        
        (*(*arg2 i+ 0x10))(arg2, arg3, zx.q(x22_1), zx.q(x22_1))
        temp0_2 = x23_1
        x23_1 -= x22_1
    while (temp0_2 != x22_1)

*(arg2 + 0x60) = v8
return 0
