// 函数: _ZN6SoLoud21interlace_samples_s16EPKfPsjjj
// 地址: 0x1072878
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 == 0)
    return 

int32_t x8_1 = 0
int32_t x9_1 = arg4 * arg3

do
    if (x8_1 u< x9_1)
        int32_t x11_1 = x8_1 * arg5
        int32_t x12_1 = x8_1
        
        do
            float v0 = arg1[zx.q(x11_1)]
            x11_1 += 1
            arg2[zx.q(x12_1)] = vcvts_s32_f32(v0 * float.s(0x46fffe00))
            x12_1 += arg4
        while (x12_1 u< x9_1)
    
    x8_1 += 1
while (x8_1 != arg4)
