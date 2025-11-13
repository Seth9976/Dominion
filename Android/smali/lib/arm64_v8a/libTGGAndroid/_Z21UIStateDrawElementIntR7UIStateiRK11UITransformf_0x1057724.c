// 函数: _Z21UIStateDrawElementIntR7UIStateiRK11UITransformf
// 地址: 0x1057724
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DlgShowTransform(*(arg1 + 8), arg2, arg3, arg4)
int64_t* x19 = *(arg1 + 8)
int64_t* x8 = *x19

if (x8 == 0)
    if (x19[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x19, false, true)
    x8 = *x19

int64_t x22 = **x8
UIElement* x19_1 = x22 + muls.dp.d(arg2, 0x178)
UIStateElement* result
int128_t v0
int128_t v1
int128_t v2
int128_t v3
result, v0, v1, v2, v3 = UIStateElementGet(arg1, arg2, &data_793a18)
uint64_t x8_4 = zx.q(*(x19_1 + 4) - 1)

if (x8_4.d u<= 8)
    UIStateElement* result_1 = result
    int64_t x23_1 = sx.q(arg2)
    int128_t var_120
    int64_t var_b0
    int64_t var_a0
    int128_t var_90
    int128_t var_80
    int128_t var_70
    
    switch (x8_4)
        case 0
            return UIStateDrawImage(x19_1, result_1, &var_b0, nullptr, nullptr, nullptr, nullptr)
        case 1
            if (*(x22 + x23_1 * 0x178 + 0xc8) != 0)
                int32_t x8_7 = *(result_1 + 0x148)
                int32_t x9_1 = *result_1
                int64_t x8_10
                uint64_t x21_1
                int64_t x24_1
                uint64_t x9_4
                
                if (x8_7 s<= x9_1)
                    uint64_t x10_3 = zx.q(*(x22 + x23_1 * 0x178 + 0xac))
                    x24_1 = zx.q(*(x10_3 + 0xb0)) | (0xffffffff & x10_3) << 0x20
                    x21_1 = x24_1 u>> 0x20
                    
                    if (x8_7 s<= x9_1)
                        x9_4 = zx.q(*(x22 + x23_1 * 0x178 + 0xac))
                        x8_10 = zx.q(*(x9_4 + 0xb0)) | (0xffffffff & x9_4) << 0x20
                    else
                        result, v0, v1, v2, v3 = XString::operator char const*()
                        x8_10 = *(result_1 + 0x14c)
                else
                    result, v0, v1, v2, v3 = XString::operator char const*()
                    x24_1 = *(result_1 + 0x154)
                    x21_1 = x24_1 u>> 0x20
                    
                    if (*(result_1 + 0x148) s> *result_1)
                        result, v0, v1, v2, v3 = XString::operator char const*()
                        x8_10 = *(result_1 + 0x14c)
                    else
                        x9_4 = zx.q(*(x22 + x23_1 * 0x178 + 0xac))
                        x8_10 = zx.q(*(x9_4 + 0xb0)) | (0xffffffff & x9_4) << 0x20
                v0 = var_90
                v1 = var_80
                v2 = var_70
                int64_t var_b8 = x8_10
                int128_t var_100_1 = v0
                int128_t var_f0_1 = v1
                int128_t var_e0_1 = v2
                int128_t var_60
                int128_t var_d0_1 = var_60
                var_120 = var_b0.o
                int128_t var_110_2 = var_a0.o
                v0.q = *(result_1 + 0x180)
                v1.q = var_120.q
                var_120.q = vadd_f32(v0, v1)
                
                if (x21_1.d s>= 1 && x24_1.d s>= 1)
                    int64_t x22_1 = 0
                    
                    do
                        int64_t i = 0
                        
                        do
                            int64_t var_128 = x22_1 << 0x20 | i
                            UIStateTableTransform(x19_1, result_1, &var_120, &var_128, &var_b8, 
                                nullptr)
                            UITransform var_188
                            result = UIStateDraw(
                                *(UIStateSubstate(x19_1, result_1, &var_128) + 0x450), &var_188, 
                                fconvert.s(1f))
                            i += 1
                        while ((x24_1 & 0xffffffff) != i)
                        
                        x22_1 += 1
                    while (x22_1 != x21_1)
            
            return result
        case 2
            return UIStateDrawText(x19_1, result_1, &var_b0, nullptr, nullptr)
        case 3, 5
            return result
        case 4
            return UIStateDrawButton(x19_1, result_1, &var_b0)
        case 8
            int128_t v0_1
            int128_t v1_1
            result, v0_1, v1_1 = ParticleTryToGet(zx.q(*(result_1 + 0xc4)))
            
            if (result == 0)
                return result
            
            void* x20_1 = x22 + x23_1 * 0x178
            v1_1 = *(x20_1 + 0x30)
            var_120 = *(x20_1 + 0x20)
            int128_t var_110_1 = v1_1
            int128_t v0_2
            int128_t v1_2
            int128_t v2_1
            int128_t v3_1
            int128_t v5_1
            int128_t v6_1
            int128_t v7_1
            int128_t v16_1
            v0_2, v1_2, v2_1, v3_1, v5_1, v6_1, v7_1, v16_1 =
                UIRectAligned(x20_1 + 0x10, &var_120, &var_70:0xc, &var_90:0xc, &var_80:0xc)
            v6_1.q = var_b0
            v5_1.d = 0f
            v0_2:4.d = v1_2.d
            v1_2.q = var_a0
            int64_t var_98
            v16_1.q = var_98
            v2_1:4.d = v3_1.d
            float var_a4
            v5_1.d = vmax_f32(var_a4, v5_1.d)
            v0_2.d = v0_2.d f* v5_1.d
            v0_2:4.d = v0_2:4.d f* v5_1.d
            v2_1.d = v2_1.d f* v5_1.d
            v2_1:4.d = v2_1:4.d f* v5_1.d
            v7_1.d = fconvert.s(1f)
            v7_1:4.d = fconvert.s(1f)
            int128_t v0_3 = vadd_f32(v6_1, v0_2)
            int128_t v2_2 = vadd_f32(v6_1, v2_1)
            v3_1 = *TI
            int128_t v1_3 = vadd_f32(v1_2, v7_1)
            v5_1.q = *(x20_1 + 0x98)
            v7_1.q = *(x20_1 + 0xa0)
            int128_t v0_4 = vsub_f32(v0_3, v16_1)
            int128_t v2_3 = vsub_f32(v2_2, v16_1)
            int128_t v0_5 = vmul_f32(v1_3, v0_4, 0)
            int128_t v1_4 = vmul_f32(v1_3, v2_3, 0)
            int128_t v0_6 = vadd_f32(v16_1, v0_5)
            int128_t v1_6 = vsub_f32(vadd_f32(v16_1, v1_4), v0_6)
            var_120 = v3_1
            int32_t x8_11 = *(TI + 0x10)
            int128_t v3_2 = vmul_f32(v5_1, v1_6, 0)
            int128_t v1_7 = vmul_f32(v1_6, v7_1, 0)
            v2_3.d = 0x3f000000
            v2_3:4.d = 0x3f000000
            var_110_1:0xc.d = 0
            var_110_1.d = x8_11
            var_110_1:4.q = vmul_f32(vadd_f32(vadd_f32(v0_6, v3_2), vadd_f32(v0_6, v1_7)), v2_3, 0)
            var_120.d = var_a4
            return ParticleDrawTransform(result, &var_120)

pthread_kill(pthread_self(), 6)
uint32_t x0_18
UITransform* x1_10
float v0_12
x0_18, x1_10, v0_12 = XNoReturn()
return UIStateDraw(x0_18, x1_10, v0_12) __tailcall
