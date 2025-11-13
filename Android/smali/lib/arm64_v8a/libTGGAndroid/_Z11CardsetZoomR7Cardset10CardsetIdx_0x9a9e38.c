// 函数: _Z11CardsetZoomR7Cardset10CardsetIdx
// 地址: 0x9a9e38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x1538)
Cardset& x19 = arg1
void* __offset(Cardset, 0x1540) x20 = arg1 + 0x1540
float v0
float v1

if (x8 == arg2)
    v0 = *(x19 + 0x1544)
    v1 = *gSecondsPerUpdate
    
    if (zx.d(*x20) == 0)
        float v2 = fconvert.s(1f)
        
        if (not(v0 == v2))
            v0 = v1 * fconvert.s(4f) + v0
            v1 = vmin_f32(v0, v2)
        label_9a9f8c:
            
            v0 = v0 < 0f ? 0f : v1
            
            *(x19 + 0x1544) = v0
    else if (not(v0 == 0f))
        v0 = v0 + v1 * fconvert.s(-4f)
        v1 = vmin_f32(v0, fconvert.s(1f))
        goto label_9a9f8c
else if (*(x19 + 0x1548) != arg2)
    v0 = *(x19 + 0x153c)
    *(x19 + 0x1548) = x8
    *(x19 + 0x154c) = v0
    *(x19 + 0x1538) = arg2
    *(x19 + 0x153c) = 0
    
    if (*(x19 + 0x258) == 0)
    label_9a9f00:
        arg1 = UI2TableGetRange(zx.q(*(x19 + 0x1550)))
        *(x20 + 0x14) = 0
        int32_t x8_5 = *(x19 + 0x1538)
        
        if (x8_5 != 0xffffffff)
            uint32_t x9_2 = (arg1 u>> 0x20).d
            
            if (x8_5 s< arg1.d || x8_5 s> x9_2)
                int32_t x9_3 = x9_2 - arg1.d
                int32_t x10
                
                x10 = x8_5 s< arg1.d ? x9_3 : 0
                
                int32_t x9_4
                
                x9_4 = x8_5 s< arg1.d ? 0 : x9_3
                
                uint64_t var_18 = zx.q(x8_5 - x9_4) | zx.q(x8_5 + x10) << 0x20
                int64_t x0_2
                int32_t v0_1
                int32_t v1_1
                x0_2, v0_1, v1_1 = UI2TableGetRangeTarget(zx.q(*(x19 + 0x1550)), &var_18)
                *(x19 + 0x1558) = v0_1
                *(x19 + 0x155c) = v1_1
                *(x20 + 0x14) = 1
else
    v0 = *(x19 + 0x154c)
    v1 = *(x19 + 0x153c)
    *(x19 + 0x1548) = x8
    *(x19 + 0x1538) = arg2
    *(x19 + 0x154c) = v1
    *(x19 + 0x153c) = v0
    *x20 = 0
    *(x19 + 0x1544) = 0
    
    if (*(x19 + 0x258) == 0)
        goto label_9a9f00
