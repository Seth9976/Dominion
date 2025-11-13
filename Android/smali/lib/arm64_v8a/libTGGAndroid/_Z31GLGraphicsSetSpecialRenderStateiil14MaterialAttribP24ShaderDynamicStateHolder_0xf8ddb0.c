// 函数: _Z31GLGraphicsSetSpecialRenderStateiil14MaterialAttribP24ShaderDynamicStateHolder
// 地址: 0xf8ddb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v8
int64_t var_50 = entry_v8.q
uint64_t x8 = zx.q(arg4 - 0x5d)
int32_t x20 = 0

if (x8.d u<= 0x26)
    int32_t x19_1 = arg1
    int32_t var_f50
    int32_t var_f48
    int32_t var_f38
    int64_t x8_30
    int64_t x8_45
    int32_t x9_11
    int64_t x10_5
    void* __offset(ShaderDynamicStateHolder, 0x300) x21_2
    float128 entry_v0
    float128 entry_v1
    uint128_t entry_v2
    
    switch (x8)
        case 0
            x20 = 1
            GLDupCheck_glUniformMatrix4fv(x19_1, 1, arg5)
        case 1
            x20 = 1
            GLDupCheck_glUniformMatrix4fv(x19_1, 1, arg5 + 0x40)
        case 2
            x20 = 1
            GLDupCheck_glUniformMatrix4fv(x19_1, 1, arg5 + 0x80)
        case 3, 4, 5
            GLDupCheck_glUniformMatrix4fv(x19_1, Draw3DGetInstanceMatrices(zx.q(arg4), &var_f50), 
                &var_f50)
            x20 = 1
        case 6
            void* x8_10 = *(arg5 + 0x340)
            void* x8_11
            
            if (x8_10 != 0)
                x8_11 = *(x8_10 + 0x38)
            
            if (x8_10 == 0 || x8_11 == 0)
                XTrace("Can't use bones shader on non-animation structure\n")
                x20 = 1
            else
                int32_t x9_5 = *(x8_11 + 0xb8)
                int32_t x1_2
                
                x1_2 = x9_5 s> arg2 ? arg2 : x9_5
                
                GLDupCheck_glUniformMatrix4fv(x19_1, x1_2, *(x8_11 + 0xb0))
                x20 = 1
        case 7, 8, 9, 0xa
            entry_v0.d = *(arg5 + 0x310)
            int32_t var_48 = entry_v0.d
            MaterialTexAnimToMat(&var_f50, *(arg5 + 0x358) + (sx.q(arg4) << 5) + 0xcdc, &var_48, 
                GameGetTimeSimulation())
            int32_t var_f44
            int32_t var_f4c_1 = var_f44
            int32_t var_f48_1 = var_f38
            int32_t var_f4c
            int32_t var_f44_1 = var_f4c
            int32_t var_f34
            int32_t var_f3c_1 = var_f34
            int32_t var_f38_1 = var_f48
            int32_t var_f3c
            int32_t var_f34_1 = var_f3c
            x20 = 1
            glUniformMatrix3fv(zx.q(x19_1), 1, 0, &var_f50)
        case 0xb
            int64_t x8_13 = *gOpenGLInterface + (sx.q(x19_1) << 4)
            
            if (((*(x8_13 + 0x20) ^ *(arg5 + 0x348)) | (*(x8_13 + 0x28) ^ *(arg5 + 0x350))) == 0)
                x20 = 1
            else
                x21_2 = arg5 + 0x348
            label_f8e38c:
                x20 = 1
                glUniform4fv(zx.q(x19_1), 1, x21_2)
                *(*gOpenGLInterface + (sx.q(x19_1) << 4) + 0x20) = *x21_2
        case 0xc
            entry_v8.d = *(arg5 + 0x2fc)
            var_f50 = entry_v8.d
            
            if (*(*gOpenGLInterface + (sx.q(x19_1) << 4) + 0x20) != var_f50)
                glUniform1f(zx.q(x19_1), entry_v8)
                *(*gOpenGLInterface + (sx.q(x19_1) << 4) + 0x20) = entry_v8.d
            
            x20 = 1
        case 0xf
            Draw3DGetRenderingEyePose()
        label_f8dfc0:
            int64_t x8_24 = *gOpenGLInterface + (sx.q(x19_1) << 4)
            int64_t var_f40
            
            if (((*(x8_24 + 0x20) ^ var_f40) | (zx.q(*(x8_24 + 0x28)) ^ zx.q(var_f38))) != 0)
                glUniform3fv(zx.q(x19_1), 1, &var_f40)
                x9_11 = var_f38
                x10_5 = var_f40
                x8_30 = *gOpenGLInterface + (sx.q(x19_1) << 4)
                goto label_f8e0e4
            
            x20 = 1
        case 0x10
            Draw3DGetEyePose(3)
            goto label_f8dfc0
        case 0x11
            int64_t x8_32 = *gOpenGLInterface + (sx.q(x19_1) << 4)
            
            if (((*(x8_32 + 0x20) ^ *(gDraw3DData + 0x3c))
                    | (*(x8_32 + 0x28) ^ *(gDraw3DData + 0x44))) == 0)
                x20 = 1
            else
                x20 = 1
                glUniform4fv(zx.q(x19_1), 1, gDraw3DData + 0x3c)
                *(*gOpenGLInterface + (sx.q(x19_1) << 4) + 0x20) = *(gDraw3DData + 0x3c)
        case 0x12
            x20 = 1
            GLDupCheck_glUniformMatrix4fv(x19_1, 1, arg5 + 0xc0)
        case 0x13
            x20 = 1
            GLDupCheck_glUniformMatrix4fv(x19_1, 1, arg5 + 0x100)
        case 0x14
            entry_v0 = *(arg5 + 0x2ec)
        label_f8e100:
            entry_v1.d = float.s((arg3 u>> 0x10).d)
            entry_v1:2.w = (arg3 u>> 8).d
            entry_v1:4.w = arg3.d
            entry_v1:6.w = (arg3 u>> 0x18).d
            entry_v2.d = 0x437f0000
            entry_v2:4.d = 0x437f0000
            entry_v2:8.d = 0x437f0000
            entry_v2:0xc.d = 0x437f0000
            uint64_t x8_44 = *gOpenGLInterface
            uint128_t v1_1
            v1_1.d = zx.d((entry_v1 & true).w)
            v1_1:4.d = zx.d(v1_1:2.w)
            v1_1:8.d = zx.d(v1_1:4.w)
            v1_1:0xc.d = zx.d(v1_1:6.w)
            entry_v0 = vmulq_f32(vdivq_f32(vcvtq_f32_u32(v1_1), entry_v2), entry_v0, 0)
            x8_45 = x8_44 + (sx.q(x19_1) << 4)
            var_f50.o = entry_v0
            goto label_f8e3e4
        case 0x15
            int32_t x9_14 = *(arg5 + 0x284)
            int64_t x8_39 = *(arg5 + 0x27c)
            var_f50.q = x8_39
            int64_t x10_8 = *gOpenGLInterface + (sx.q(x19_1) << 4)
            
            if (((*(x10_8 + 0x20) ^ x8_39) | (zx.q(*(x10_8 + 0x28)) ^ zx.q(x9_14))) == 0)
                x20 = 1
            else
                glUniform3fv(zx.q(x19_1), 1, &var_f50)
                x9_11 = x9_14
                x10_5 = var_f50.q
                x8_30 = *gOpenGLInterface + (sx.q(x19_1) << 4)
            label_f8e0e4:
                *(x8_30 + 0x28) = x9_11
                *(x8_30 + 0x20) = x10_5
                x20 = 1
        case 0x16
            entry_v0 = *(arg5 + 0x2ac)
            goto label_f8e100
        case 0x17
            x20 = 1
            GLDupCheck_glUniformMatrix4fv(x19_1, 1, arg5 + 0x1cc)
        case 0x18
            x20 = 1
            GLDupCheck_glUniformMatrix4fv(x19_1, 1, arg5 + 0x18c)
        case 0x19
            if (arg2 s< 1)
                x20 = 1
            else
                uint64_t i_5 = zx.q(arg2)
                void* __offset(ShaderDynamicStateHolder, 0x24c) x23_2 = arg5 + 0x24c
                x20 = 1
                uint64_t x8_46 = *gOpenGLInterface
                uint64_t i
                
                do
                    int32_t x9_17 = *(x23_2 + 8)
                    int64_t x10_11 = *x23_2
                    int64_t x11_8 = x8_46 + (sx.q(x19_1) << 4)
                    int64_t x19_2 = sx.q(x19_1)
                    var_f50.q = x10_11
                    
                    if (((*(x11_8 + 0x20) ^ x10_11) | (zx.q(*(x11_8 + 0x28)) ^ zx.q(x9_17))) != 0)
                        glUniform3fv(zx.q(x19_2.d), 1, &var_f50)
                        x8_46 = *gOpenGLInterface
                        int64_t x10_13 = var_f50.q
                        int64_t x11_10 = x8_46 + (x19_2 << 4)
                        *(x11_10 + 0x28) = x9_17
                        *(x11_10 + 0x20) = x10_13
                    
                    x19_1 = x19_2.d + 1
                    x23_2 += 0xc
                    i = i_5
                    i_5 -= 1
                while (i != 1)
        case 0x1a
            int64_t x22_2 = muls.dp.d(arg2, 0xc)
            
            if (memcmp(*gOpenGLInterface + (sx.q(x19_1) << 4) + 0x20, arg5 + 0x27c, x22_2) != 0)
                glUniform3fv(zx.q(x19_1), zx.q(arg2), arg5 + 0x27c)
                memcpy(*gOpenGLInterface + (sx.q(x19_1) << 4) + 0x20, arg5 + 0x27c, x22_2)
            
            x20 = 1
        case 0x1b
            uint128_t entry_v3
            uint128_t entry_v4
            
            if (arg2 s>= 1)
                entry_v0.d = float.s((arg3 u>> 0x10).d)
                entry_v0:2.w = (arg3 u>> 8).d
                entry_v0:4.w = arg3.d
                entry_v0:6.w = (arg3 u>> 0x18).d
                uint128_t v0_4
                v0_4.d = zx.d((entry_v0 & true).w)
                v0_4:4.d = zx.d(v0_4:2.w)
                v0_4:8.d = zx.d(v0_4:4.w)
                v0_4:0xc.d = zx.d(v0_4:6.w)
                entry_v1.d = 0x437f0000
                entry_v1:4.d = 0x437f0000
                entry_v1:8.d = 0x437f0000
                entry_v1:0xc.d = 0x437f0000
                entry_v0 = vdivq_f32(vcvtq_f32_u32(v0_4), entry_v1)
                uint64_t x8_53 = zx.q(arg2)
                int64_t i_6
                
                if (arg2 u>= 4)
                    i_6 = x8_53 & 0xfffffffc
                    entry_v1 = vdupq_laneq_s32(entry_v0, 0)
                    entry_v2 = vdupq_laneq_s32(entry_v0, 1)
                    entry_v3 = vdupq_laneq_s32(entry_v0, 2)
                    entry_v4 = vdupq_laneq_s32(entry_v0, 3)
                    void* x10_20 = arg5 + 0x2ac
                    int32_t* x11_16 = &var_f50
                    int64_t i_4 = i_6
                    int64_t i_1
                    
                    do
                        float128 v16
                        v16.d = *x10_20
                        float128 v17
                        v17.d = *(x10_20 + 4)
                        float128 v18
                        v18.d = *(x10_20 + 8)
                        float128 v19
                        v19.d = *(x10_20 + 0xc)
                        v16:4.d = *(x10_20 + 0x10)
                        v17:4.d = *(x10_20 + 0x14)
                        v18:4.d = *(x10_20 + 0x18)
                        v19:4.d = *(x10_20 + 0x1c)
                        v16:8.d = *(x10_20 + 0x20)
                        v17:8.d = *(x10_20 + 0x24)
                        v18:8.d = *(x10_20 + 0x28)
                        v19:8.d = *(x10_20 + 0x2c)
                        v16:0xc.d = *(x10_20 + 0x30)
                        v17:0xc.d = *(x10_20 + 0x34)
                        v18:0xc.d = *(x10_20 + 0x38)
                        v19:0xc.d = *(x10_20 + 0x3c)
                        x10_20 += 0x40
                        i_1 = i_4
                        i_4 -= 4
                        float128 v20_1 = vmulq_f32(entry_v1, v16, 0)
                        float128 v21_1 = vmulq_f32(entry_v2, v17, 0)
                        float128 v22_1 = vmulq_f32(entry_v3, v18, 0)
                        float128 v23_1 = vmulq_f32(entry_v4, v19, 0)
                        *x11_16 = v20_1.d
                        x11_16[1] = v21_1.d
                        x11_16[2] = v22_1.d
                        x11_16[3] = v23_1.d
                        x11_16[4] = v20_1:4.d
                        x11_16[5] = v21_1:4.d
                        x11_16[6] = v22_1:4.d
                        x11_16[7] = v23_1:4.d
                        x11_16[8] = v20_1:8.d
                        x11_16[9] = v21_1:8.d
                        x11_16[0xa] = v22_1:8.d
                        x11_16[0xb] = v23_1:8.d
                        x11_16[0xc] = v20_1:0xc.d
                        x11_16[0xd] = v21_1:0xc.d
                        x11_16[0xe] = v22_1:0xc.d
                        x11_16[0xf] = v23_1:0xc.d
                        x11_16 = &x11_16[0x10]
                    while (i_1 != 4)
                    
                    if (i_6 != x8_53)
                        goto label_f8e4e8
                else
                    i_6 = 0
                label_f8e4e8:
                    float128* x10_22 = &(&var_f50)[i_6 * 4]
                    int128_t* x11_17 = (i_6 << 4) + arg5 + 0x2ac
                    int64_t i_3 = x8_53 - i_6
                    int64_t i_2
                    
                    do
                        entry_v1 = *x11_17
                        x11_17 = &x11_17[1]
                        i_2 = i_3
                        i_3 -= 1
                        entry_v1 = vmulq_f32(entry_v0, entry_v1, 0)
                        *x10_22 = entry_v1
                        x10_22 = &x10_22[1]
                    while (i_2 != 1)
            
            int64_t x20_3 = zx.q(arg2) << 0x20 s>> 0x1c
            
            if (memcmp(*gOpenGLInterface + (sx.q(x19_1) << 4) + 0x20, &var_f50, x20_3, entry_v0, 
                    entry_v1, entry_v2, entry_v3, entry_v4) != 0)
                glUniform4fv(zx.q(x19_1), zx.q(arg2), &var_f50)
                memcpy(*gOpenGLInterface + (sx.q(x19_1) << 4) + 0x20, &var_f50, x20_3)
            
            x20 = 1
        case 0x1c
            var_f50 = GameGetTimeSimulation()
            int32_t var_f4c_2 = GameGetTimeUI().d
            entry_v0.d = *(*gpRenderAppData + 0x94)
            int32_t var_f44_2 = 0
            var_f48 = entry_v0.d
            x8_45 = *gOpenGLInterface + (sx.q(x19_1) << 4)
        label_f8e3e4:
            
            if (((*(x8_45 + 0x20) ^ var_f50.q) | (*(x8_45 + 0x28) ^ var_f48.q)) == 0)
                x20 = 1
            else
                glUniform4fv(zx.q(x19_1), 1, &var_f50, entry_v0)
                *(*gOpenGLInterface + (sx.q(x19_1) << 4) + 0x20) = var_f50.o
                x20 = 1
        case 0x1d
            int64_t x8_56 = *gOpenGLInterface + (sx.q(x19_1) << 4)
            
            if (((*(x8_56 + 0x20) ^ *(arg5 + 0x310)) | (*(x8_56 + 0x28) ^ *(arg5 + 0x318))) != 0)
                x21_2 = arg5 + 0x310
                goto label_f8e38c
            
            x20 = 1
        case 0x1e
            int64_t x8_61 = *gOpenGLInterface + (sx.q(x19_1) << 4)
            
            if (((*(x8_61 + 0x20) ^ *(arg5 + 0x320)) | (*(x8_61 + 0x28) ^ *(arg5 + 0x328))) != 0)
                x21_2 = arg5 + 0x320
                goto label_f8e38c
            
            x20 = 1
        case 0x1f
            int64_t x8_66 = *gOpenGLInterface + (sx.q(x19_1) << 4)
            
            if (((*(x8_66 + 0x20) ^ *(arg5 + 0x300)) | (*(x8_66 + 0x28) ^ *(arg5 + 0x308))) != 0)
                x21_2 = arg5 + 0x300
                goto label_f8e38c
            
            x20 = 1
        case 0x20
            uint64_t x8_72 = *gOpenGLInterface
            entry_v1.d = *(x8_72 + 0x18)
            entry_v0.d = *(x8_72 + 0x1c)
            x8_45 = x8_72 + (sx.q(x19_1) << 4)
            var_f48.q = 0
            int32_t var_f4c_3 = 0
            entry_v0.d = entry_v0.d f/ entry_v1.d
            var_f50 = entry_v0.d
            goto label_f8e3e4
        case 0x21, 0x22, 0x23, 0x24
            x21_2 = *(arg5 + 0x358) + (sx.q(arg4) << 4) + 0x11fc
            int64_t x8_6 = *gOpenGLInterface + (sx.q(x19_1) << 4)
            
            if (((*(x8_6 + 0x20) ^ *x21_2) | (*(x8_6 + 0x28) ^ *(x21_2 + 8))) != 0)
                goto label_f8e38c
            
            x20 = 1
        case 0x26
            int64_t x8_80 = *gOpenGLInterface + (sx.q(x19_1) << 4)
            
            if (((*(x8_80 + 0x20) ^ *(gDraw3DData + 0x490))
                    | (*(x8_80 + 0x28) ^ *(gDraw3DData + 0x498))) == 0)
                x20 = 1
            else
                x20 = 1
                glUniform4fv(zx.q(x19_1), 1, gDraw3DData + 0x490)
                *(*gOpenGLInterface + (sx.q(x19_1) << 4) + 0x20) = *(gDraw3DData + 0x490)

entry_v8.q = var_50
return zx.q(x20)
