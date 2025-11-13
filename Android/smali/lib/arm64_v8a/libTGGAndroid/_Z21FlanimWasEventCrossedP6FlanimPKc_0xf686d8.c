// 函数: _Z21FlanimWasEventCrossedP6FlanimPKc
// 地址: 0xf686d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = *(arg1 + 0x10)
int64_t v8
v8.d = *(arg1 + 0xc)
XAsset* x0 = *arg1
float v1 = float.s(*(arg1 + 0x14) - 1)
float v0 = *(arg1 + 8) * v1
uint32_t temp0 = vcvts_s32_f32(v8.d f* v1)
int32_t x20 = x23 + temp0
uint32_t temp0_1 = vcvts_s32_f32(v0)
void* x0_1 = FlanimGetDef(x0)
int64_t x21 = sx.q(*(x0_1 + 0x18))

if (v8.d f!= 0f || temp0 != temp0_1)
    if (x21.d s>= 1)
        int64_t x22_2 = 0
        void* x24_1 = *(x0_1 + 0x10) + 8
        
        while (true)
            int32_t x8_5 = *x24_1
            
            if (x20 s< x8_5 && x23 + temp0_1 s>= x8_5 && strcasecmp(arg2, *(x24_1 - 8)) == 0)
                return 1
            
            x22_2 += 1
            x24_1 += 0x20
            
            if (x22_2 s>= x21)
                return 0
else if (x21.d s>= 1)
    int64_t x22_1 = 0
    void* x23_1 = *(x0_1 + 0x10) + 8
    
    do
        if (x20 == *x23_1 && strcasecmp(arg2, *(x23_1 - 8)) == 0)
            return 1
        
        x22_1 += 1
        x23_1 += 0x20
    while (x22_1 s< x21)

return 0
