// 函数: _Z22ProcessCylinderCubeMapP23DefTextureXMLImportSpecP9ImageSpec
// 地址: 0xfd8f94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v14
int64_t var_98 = v14
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t var_a8 = TimerStart()
int32_t x20 = *(arg2 + 0x14)
int32_t x0_1 = TextureFormatPitch(0x400, zx.q(x20))
int64_t x0_3 = XMalloc(TextureFormatLinearImageSize(0x400, 0x1800, zx.q(x20)))
int64_t v11
v11.d = *CIRCLE_HALF
int64_t v12
v12.d = *CIRCLE_FULL
int32_t x23 = 0
int64_t i = 0
int64_t v8
v8.d = fconvert.s(-1f)
int64_t v13
v13.d = fconvert.s(1f)

do
    int64_t j = 0
    int64_t x20_1 = x0_3 + sx.q(x23)
    
    do
        float v0_1 = float.s(j.d)
        v14.d = (v0_1 + v0_1) * float.s(0x3a800000) f+ v8.d + float.s(0x3a000000)
        v15.d = fneg(v14.d)
        int64_t k = 0
        
        if (i != 0)
            do
                v0_1 = float.s(k.d)
                uint64_t x8_2 = zx.q(i.d - 1)
                float v4_1 = (v0_1 + v0_1) * float.s(0x3a800000) f+ v8.d + float.s(0x3a000000)
                float v3_1 = fneg(v4_1)
                float v0_3
                float v1_3
                float y_1
                
                if (x8_2.d u> 3)
                    y_1 = fconvert.s(-1f)
                    v0_3 = v3_1
                    v1_3 = v15.d
                else
                    y_1 = fconvert.s(1f)
                    v0_3 = v3_1
                    v1_3 = v14.d
                    
                    switch (x8_2)
                        case 0
                            v0_3 = fconvert.s(-1f)
                            v1_3 = v3_1
                            y_1 = v15.d
                        case 1
                            v1_3 = fconvert.s(1f)
                            v0_3 = v3_1
                            y_1 = v15.d
                        case 2
                            v1_3 = fconvert.s(-1f)
                            v0_3 = v4_1
                            y_1 = v15.d
                
                v3_1 = v13.d f/ sqrt(v0_3 * v0_3 + v1_3 * v1_3 + y_1 * y_1)
                v8.d = v0_3 * v3_1
                v9.d = v1_3 * v3_1
                v10.d = y_1 * v3_1
                float v0_2 = atan2f(v9.d, v8.d, y_1)
                float v1_2 = sqrt(v8.d f* v8.d + v9.d f* v9.d)
                
                if (v1_2 >= float.s(0x3727c5ac))
                    v1_2 = fconvert.s(0.5f) - v10.d f/ v1_2
                    v8.d = fconvert.s(-1f)
                else
                    v8.d = fconvert.s(-1f)
                    
                    if (v10.d f> 0f)
                        v1_2 = v8.d
                    else
                        v1_2 = v13.d
                
                *(x20_1 + (k << 2)) =
                    ImageBilinearSample(arg2, v13.d f- (v0_2 f+ v11.d) f/ v12.d, v1_2)
                k += 1
            while (k != 0x400)
        else
            float y = v14.d f* v14.d
            
            do
                v0_1 = float.s(k.d)
                v0_1 = (v0_1 + v0_1) * float.s(0x3a800000) f+ v8.d + float.s(0x3a000000)
                v14.d = fconvert.s(-1f)
                v8.d = v13.d f/ sqrt(v0_1 * v0_1 f+ v13.d + y)
                v9.d = v0_1 f* v8.d
                v10.d = v8.d f* v15.d
                float v0_5 = atan2f(v9.d, v8.d, y)
                float v1_5 = sqrt(v8.d f* v8.d + v9.d f* v9.d)
                
                if (not(v1_5 < float.s(0x3727c5ac)))
                    v1_5 = fconvert.s(0.5f) - v10.d f/ v1_5
                else if (v10.d f> 0f)
                    v1_5 = v14.d
                else
                    v1_5 = v13.d
                
                v8.d = fconvert.s(-1f)
                *(x20_1 + (k << 2)) =
                    ImageBilinearSample(arg2, v13.d f- (v0_5 f+ v11.d) f/ v12.d, v1_5)
                k += 1
            while (k != 0x400)
        
        j += 1
        x20_1 += 0x1000
    while (j != 0x400)
    
    i += 1
    x23 += x0_1 << 0xa
while (i != 6)

XFree(*arg2)
*(arg2 + 8) = 0x180000000400
*arg2 = x0_3
*(arg2 + 0x10) = x0_1
*(arg2 + 0x14) = x20
TimerStop(&var_a8)
return XTrace("ProcessCylinderCubeMap time %d ms")
