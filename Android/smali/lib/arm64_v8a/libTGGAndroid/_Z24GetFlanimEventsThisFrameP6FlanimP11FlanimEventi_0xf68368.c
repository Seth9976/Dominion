// 函数: _Z24GetFlanimEventsThisFrameP6FlanimP11FlanimEventi
// 地址: 0xf68368
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = *(arg1 + 0x10)
XAsset* x0 = *arg1
float v2 = float.s(*(arg1 + 0x14) - 1)
float v1 = *(arg1 + 8) * v2
uint32_t temp0 = vcvts_s32_f32(*(arg1 + 0xc) * v2)
FlanimEvent* x19 = arg2
int32_t x24 = x22 + temp0
uint32_t temp0_1 = vcvts_s32_f32(v1)
DefFlanim* x0_1 = FlanimGetDef(x0)
int32_t i_3

if (temp0 != temp0_1 || *(arg1 + 0xc) != 0f)
    int32_t x9_2 = *(x0_1 + 0x18)
    
    if (x9_2 s< 1)
        i_3 = 0
    else
        int32_t x8_3 = x22 + temp0_1
        int64_t x10_3 = 0
        int64_t x11_1 = 0
        i_3 = 0
        
        if (temp0 s> temp0_1)
            while (true)
                void* x13_3 = *(x0_1 + 0x10) + x10_3
                int32_t x14_1 = *(x13_3 + 8)
                
                if (((x24 s< x14_1 ? 1 : 0) & (x8_3 s>= x14_1 ? 1 : 0) & 1) != 0
                        || (x14_1 | x24) == 0 || x14_1 == 0)
                    *(x19 + muls.dp.d(i_3, 0x18)) = x13_3
                    
                    if (i_3 + 1 == arg3)
                        break
                    
                    x9_2 = *(x0_1 + 0x18)
                    i_3 += 1
                
                x11_1 += 1
                x10_3 += 0x20
                
                if (x11_1 s>= sx.q(x9_2))
                    goto label_f6852c
        else
            while (true)
                void* x13_5 = *(x0_1 + 0x10) + x10_3
                int32_t x14_3 = *(x13_5 + 8)
                
                if (((x24 s< x14_3 ? 1 : 0) & (x8_3 s>= x14_3 ? 1 : 0) & 1) != 0
                        || (x14_3 | x24) == 0)
                    *(x19 + muls.dp.d(i_3, 0x18)) = x13_5
                    
                    if (i_3 + 1 == arg3)
                        break
                    
                    x9_2 = *(x0_1 + 0x18)
                    i_3 += 1
                
                x11_1 += 1
                x10_3 += 0x20
                
                if (x11_1 s>= sx.q(x9_2))
                    goto label_f6852c
        
        i_3 = arg3
else
    int32_t x10_1 = *(x0_1 + 0x18)
    
    if (x10_1 s< 1)
        i_3 = 0
    else
        int64_t x8_2 = 0
        int64_t x9_1 = 0
        i_3 = 0
        
        while (true)
            void* x13_1 = *(x0_1 + 0x10) + x8_2
            
            if (x24 == *(x13_1 + 8))
                *(x19 + muls.dp.d(i_3, 0x18)) = x13_1
                
                if (i_3 + 1 == arg3)
                    break
                
                x10_1 = *(x0_1 + 0x18)
                i_3 += 1
            
            x9_1 += 1
            x8_2 += 0x20
            
            if (x9_1 s>= sx.q(x10_1))
                goto label_f6852c
        
        i_3 = arg3

label_f6852c:
int32_t x8_4 = *(arg1 + 0x10)
int32_t x9_6 = *(arg1 + 0x14) - 1
float v0_1 = *(arg1 + 8) * float.s(x9_6) + float.s(x8_4)
float temp0_2 = vrndm_f32(v0_1)
uint32_t x10_4 = zx.d(*(arg1 + 0x9d))
float v1_1

if (temp0_2 < 0f)
    v1_1 = fconvert.s(-0.5f)
else
    v1_1 = fconvert.s(0.5f)

int32_t x8_5 = x9_6 + x8_4
uint32_t temp0_3 = vcvts_s32_f32(temp0_2 + v1_1)
int32_t x24_1

if (x8_5 s> temp0_3)
    x24_1 = temp0_3 + 1
else
    x24_1 = temp0_3

int64_t v8

if (((x10_4 == 0 ? 1 : 0) & (x8_5 s> temp0_3 ? 1 : 0)) != 0)
    v8.d = v0_1 - temp0_2
else
    v8.d = 0f

if (i_3 s>= 1)
    uint64_t i_2 = zx.q(i_3)
    float var_108
    float var_104
    float var_100
    float var_fc
    
    if (v8.d f== 0f)
        int32_t i
        
        do
            ParseEvent(*x19)
            int32_t x1 = *(*x19 + 0xc)
            
            if (x1 != 0xffffffff)
                FlanimGetShapeTransformAtFrame(x0_1, x1, temp0_3, &var_108)
                float v0_2 = *(arg1 + 0x24)
                float v1_2 = *(arg1 + 0x38)
                float v3_1 = *(arg1 + 0x40) + v1_2 * var_104
                *(x19 + 8) = *(arg1 + 0x30) + v0_2 * var_108
                *(x19 + 0xc) = v3_1
                *(x19 + 0x10) = v0_2 * var_100
                *(x19 + 0x14) = v1_2 * var_fc
            
            i = i_2
            i_2 -= 1
            x19 += 0x18
        while (i != 1)
    else
        uint64_t i_1
        
        do
            ParseEvent(*x19)
            int32_t x25_1 = *(*x19 + 0xc)
            
            if (x25_1 != 0xffffffff)
                FlanimShapeTransform var_98
                FlanimGetShapeTransformAtFrame(x0_1, x25_1, temp0_3, &var_98)
                FlanimShapeTransform var_d0
                FlanimGetShapeTransformAtFrame(x0_1, x25_1, x24_1, &var_d0)
                FlanimLerpShapeTransform(&var_108, &var_98, &var_d0, v8.d)
                float v0_4 = *(arg1 + 0x24)
                float v1_3 = *(arg1 + 0x38)
                float v3_2 = *(arg1 + 0x40) + v1_3 * var_104
                *(x19 + 8) = *(arg1 + 0x30) + v0_4 * var_108
                *(x19 + 0xc) = v3_2
                *(x19 + 0x10) = v0_4 * var_100
                *(x19 + 0x14) = v1_3 * var_fc
            
            i_1 = i_2
            i_2 -= 1
            x19 += 0x18
        while (i_1 != 1)

return zx.q(i_3)
