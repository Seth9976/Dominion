// 函数: _Z12ParticleLoadPKcPv
// 地址: 0xf9db2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v8
int64_t var_70 = entry_v8.q
void* result = GameExists()

if ((result.d & 1) != 0 && *(arg2 + 8) s>= 1)
    int64_t i = 0
    entry_v8.d = 0x3c23d70a
    entry_v8:4.d = 0x3c23d70a
    
    do
        int64_t x22_1 = *arg2
        AttribMap* x21_1 = x22_1 + i * 0x168
        int128_t v0_1
        int128_t v1_1
        result, v0_1, v1_1 = AttribMapFindTag(x21_1, 2)
        
        if (result != 0)
            *(x22_1 + i * 0x168 + 0x10) = (*(result + 8)).d
            result, v0_1, v1_1 = AttribMapRemoveTag(*gParticleAttribTable, x21_1, 2)
        
        int32_t x8_4 = *x21_1
        
        if (x8_4 s>= 1)
            void* x9_2 = x22_1 + i * 0x168
            int64_t x26_1 = 0
            int64_t j = 0
            
            do
                int32_t* x9_6 = *(x9_2 + 8)
                
                if (*(x9_6 + x26_1) == 5)
                    XAsset* x22_2 = *(x9_6 + x26_1 + 8)
                    
                    if (x22_2 != 0)
                        int64_t* x9_3 = *x22_2
                        
                        if (x9_3 == 0)
                            if (*(x22_2 + 8) == 0x15)
                                XString::GetString()
                                XTrace("Unpreloaded sound %s")
                            
                            result, v0_1, v1_1 = AssetCatalogLoadAsset(x22_2, false, true)
                            x9_3 = *x22_2
                            x8_4 = *x21_1
                        
                        v0_1.q = *(x9_2 + 0xf8)
                        int64_t* x9_5 = **x9_3
                        int128_t v0_3 = vcvt_f32_s32(vrev64_s32(v0_1))
                        v1_1.q = *x9_5
                        float v2_1 = *(x9_5 + 0xc) f* x9_5[1].d
                        int128_t v1_2
                        v1_2.d = vcvt_f32_u32(v1_1).d f* v2_1
                        v1_2:4.d = v1_2:4.d f* v2_1
                        *(x9_2 + 0x100) = vdiv_f32(vmul_f32(v1_2, entry_v8, 0), v0_3).q
                
                j += 1
                x26_1 += 0x10
            while (j s< sx.q(x8_4))
        
        i += 1
    while (i s< sx.q(*(arg2 + 8)))

entry_v8.q = var_70
return result
