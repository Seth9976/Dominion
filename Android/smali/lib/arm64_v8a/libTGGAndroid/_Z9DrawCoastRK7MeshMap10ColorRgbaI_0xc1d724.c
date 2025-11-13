// 函数: _Z9DrawCoastRK7MeshMap10ColorRgbaI
// 地址: 0xc1d724
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v8
int64_t var_60 = entry_v8.q
int32_t var_64 = arg2
void* result
ColorRgbaI* x3
XAsset* x4
int128_t v0
result, x3, x4, v0 = GetLocalSettings()
int128_t var_80

if (*(result + 0x3c) != 6)
    int32_t x8_1 = *(arg1 + 0xeffbc)
    
    if (x8_1 s>= 1)
        int64_t i = 0
        void* __offset(MeshMap, 0x8ffd8) x27_1 = arg1 + 0x8ffd8
        entry_v8.d = 0x44800000
        entry_v8:4.d = 0x44800000
        
        do
            int64_t x9_1 = sx.q(*(x27_1 - 4))
            v0.d = *(arg1 + x9_1 * 0xc + 8)
            int32_t x9_3
            
            if (v0.d f<= 0f)
                x9_3 = 0
            else
                v0.q = *(arg1 + x9_1 * 0xc)
                x9_3 = 1
                var_80.q = vmul_f32(v0, entry_v8, 0).q
            
            int64_t x10_2 = sx.q(*x27_1)
            v0.d = *(arg1 + x10_2 * 0xc + 8)
            
            if (not(v0.d f<= 0f))
                v0.q = *(arg1 + x10_2 * 0xc)
                *(&var_80 + (zx.q(x9_3) << 3)) = vmul_f32(v0, entry_v8, 0).q
                x9_3 += 1
            
            int64_t x10_5 = sx.q(*(x27_1 + 4))
            v0.d = *(arg1 + x10_5 * 0xc + 8)
            
            if (not(v0.d f<= 0f))
                v0.q = *(arg1 + x10_5 * 0xc)
                *(&var_80 + (zx.q(x9_3) << 3)) = vmul_f32(v0, entry_v8, 0).q
                x9_3 += 1
            
            if (x9_3 == 2)
                float v1_1 = var_80:4.d
                float v3_1 = float.s(0x3a800000)
                v0.d = float.s(0x3f79999a)
                float v2_1 = v1_1 * v3_1
                
                if (not(v2_1 f> v0.d))
                    v0.d = var_80.d
                    v3_1 = v0.d f* v3_1
                    
                    if (not(v3_1 < float.s(0x3ccccccd)) && not(v3_1 > float.s(0x3ffccccd))
                            && not(v2_1 < float.s(0x3ccccccd)))
                        float v5_1 = float.s(0x3a800000)
                        v2_1 = var_80:0xc.d * v5_1
                        
                        if (not(v2_1 > float.s(0x3f79999a)))
                            v5_1 = var_80:8.d * v5_1
                            
                            if (not(v5_1 < float.s(0x3ccccccd)) && not(v5_1 > float.s(0x3ffccccd))
                                    && not(v2_1 < float.s(0x3ccccccd)))
                                CapsuleDraw(&var_64, &var_64, nullptr, x3, x4, v0.d, v1_1)
                                result, x3, x4, v0 = GetLocalSettings()
                                
                                if (*(result + 0x3c) == 5)
                                    break
                                
                                x8_1 = *(arg1 + 0xeffbc)
            
            i += 1
            x27_1 += 0xc
        while (i s< sx.q(x8_1))
else
    var_80 = data_71d140
    result = DrawRectSolid(&var_80, &var_64)
entry_v8.q = var_60
return result
