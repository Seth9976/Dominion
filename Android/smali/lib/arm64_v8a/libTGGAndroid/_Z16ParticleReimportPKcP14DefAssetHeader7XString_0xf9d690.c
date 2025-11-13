// 函数: _Z16ParticleReimportPKcP14DefAssetHeader7XString
// 地址: 0xf9d690
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int64_t* x9 = *arg2

if (x9[1].d s>= 1)
    int64_t i = 0
    v9.d = fconvert.s(0.5f)
    v10.d = fconvert.s(-0.5f)
    int64_t* var_a0_1 = x9
    
    do
        int64_t x28_1 = *x9
        int32_t* fp_1 = x28_1 + i * 0x168
        __builtin_memset(&fp_1[5], 0, 0xe2)
        *(fp_1 + 0xf8) = 0x100000001
        *(fp_1 + 0x100) = 0x3c23d70a3c23d70a
        fp_1[0x58] = 0
        AttribMapDispose(*gParticleAttribTable, &fp_1[0x44])
        AttribMapDispose(*gParticleAttribTable, &fp_1[0x48])
        AttribMapDispose(*gParticleAttribTable, &fp_1[0x4c])
        
        if (*fp_1 s>= 1)
            void* x8_6 = x28_1 + i * 0x168
            int64_t x23_1 = 0
            int64_t j = 0
            
            do
                uint32_t* x25_1 = *(x8_6 + 8)
                uint32_t* x19_1 = x25_1 + x23_1
                uint32_t x2 = *x19_1
                int64_t x22_1 = *(x19_1 + 8)
                uint64_t x8_9 = zx.q(x2 - 9)
                
                if (x8_9.d u<= 0x62)
                    switch (x8_9)
                        case 0, 0xe, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 
                                0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 
                                0x2f, 0x33, 0x38, 0x42, 0x43, 0x47, 0x5e, 0x5f, 0x60, 0x61, 0x62
                            AttribMapSetValue(*gParticleAttribTable, &fp_1[0x44], x2, x22_1)
                            x2 = *(x25_1 + x23_1)
                
                if (x2 - 0xf u<= 5)
                    AttribMapSetValue(*gParticleAttribTable, &fp_1[0x48], x2, *(x19_1 + 8))
                    x2 = *(x25_1 + x23_1)
                
                uint64_t x8_11 = zx.q(x2 - 0x1f)
                
                if (x8_11.d u<= 0x44)
                    switch (x8_11)
                        case 0, 1, 2, 0x1a, 0x1b, 0x1c, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 
                                0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x32, 0x33, 0x34, 0x44
                            AttribMapSetValue(*gParticleAttribTable, &fp_1[0x4c], x2, *(x19_1 + 8))
                            x2 = *(x25_1 + x23_1)
                
                uint64_t x8_12 = zx.q(x2 - 5)
                uint32_t x8_15
                
                if (x8_12.d u<= 0x53)
                    switch (x8_12)
                        case 0
                            *(x8_6 + 0x158) = *(x19_1 + 8)
                        case 1
                            float v0_3 = TrackScalarGetValue(x22_1, 0, 0f, 0f)
                            float v1_3
                            
                            if (v0_3 < 0f)
                                v1_3 = v10.d
                            else
                                v1_3 = v9.d
                            
                            uint32_t temp0_2 = vcvts_s32_f32(v0_3 + v1_3)
                            
                            x8_15 = temp0_2 s> 1 ? temp0_2 : 1
                            
                            fp_1[0x3e] = x8_15
                        case 2
                            float v0_1 = TrackScalarGetValue(x22_1, 0, 0f, 0f)
                            float v1_2
                            
                            if (v0_1 < 0f)
                                v1_2 = v10.d
                            else
                                v1_2 = v9.d
                            
                            uint32_t temp0_1 = vcvts_s32_f32(v0_1 + v1_2)
                            
                            x8_15 = temp0_1 s> 1 ? temp0_1 : 1
                            
                            fp_1[0x3f] = x8_15
                        case 3
                            *(x8_6 + 0x140) = *(x19_1 + 8)
                        case 5
                            *(x8_6 + 0x148) = *(x19_1 + 8)
                        case 6
                            *(x8_6 + 0x150) = *(x19_1 + 8)
                        case 7
                            *(var_a0_1 + 0xc) = TrackScalarGetValue(x22_1, 0, 0f, 0f)
                            var_a0_1[3].d = TrackScalarGetValue(x22_1, 0, 0f, fconvert.s(1f))
                        case 8
                            var_a0_1[2].d = TrackScalarGetValue(x22_1, 0, 0f, 0f)
                            *(var_a0_1 + 0x1c) = TrackScalarGetValue(x22_1, 0, 0f, fconvert.s(1f))
                        case 9
                            *(var_a0_1 + 0x14) = TrackScalarGetValue(x22_1, 0, 0f, 0f)
                            var_a0_1[4].d = TrackScalarGetValue(x22_1, 0, 0f, fconvert.s(1f))
                        case 0x10
                            *(x8_6 + 0x108) = fneg(TrackScalarGetValue(x22_1, 0, 0f, 0f))
                        case 0x11
                            *(x8_6 + 0x10c) = fneg(TrackScalarGetValue(x22_1, 0, 0f, 0f))
                        case 0x50
                            if (*(x19_1 + 8) != 0)
                                fp_1[0x58] = 1
                        case 0x51
                            if (*(x19_1 + 8) != 0)
                                fp_1[0x58] = 2
                        case 0x52
                            if (*(x19_1 + 8) != 0)
                                fp_1[0x58] = 3
                        case 0x53
                            if (*(x19_1 + 8) != 0)
                                fp_1[0x58] = 4
                *(x28_1 + i * 0x168 + zx.q(*(x25_1 + x23_1)) + 0x14) = 1
                
                if (*(AttribTagGetDefMap(*gParticleAttribTable, *(x25_1 + x23_1)) + 0x18) == 0xa)
                    *(x28_1 + i * 0x168 + zx.q(*(x25_1 + x23_1)) + 0x85) = (x19_1[2] != 0 ? 1 : 0).b
                
                j += 1
                x23_1 += 0x10
            while (j s< sx.q(*fp_1))
        
        x9 = var_a0_1
        i += 1
    while (i s< sx.q(x9[1].d))

return 1
