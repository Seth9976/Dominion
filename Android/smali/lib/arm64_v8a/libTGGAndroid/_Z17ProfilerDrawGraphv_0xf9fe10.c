// 函数: _Z17ProfilerDrawGraphv
// 地址: 0xf9fe10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v14
int64_t var_98 = v14
int64_t v9
int64_t var_70 = v9
int64_t entry_x22
int64_t var_20 = entry_x22
int64_t v8
v8.d = float.s(*(*gAppInterface + 0x2c))
int64_t v10

if ((InVRMode() & 1) != 0)
    v10.d = float.s(0x437a0000)
else
    v10.d = v8.d

float var_b0 = 0f
int32_t var_a8 = 0x43240000
int32_t var_a4 = v10.d
float var_ac = v10.d f+ float.s(0xc2a6aaab)
int32_t var_c0 = 0x40000000
int64_t result = DrawRectSolid(&var_b0, &var_c0)
int32_t x21 = 0
int64_t v11
v11.d = fconvert.s(2f)
int64_t v12
v12.d = fconvert.s(4f)
int64_t v13
v13.d = fconvert.s(5f)
v8.d = v10.d f+ fconvert.s(-2f)
bool cond:1_1

do
    uint64_t x23_1 = *gProfilerGlobals
    int32_t x8_5 = (x21 + 1 + *(x23_1 + 0xb9b680)) s% 0x28
    int64_t* x25_1 = x23_1 + muls.dp.d(x8_5, 0x4a490)
    
    if (zx.d(*(x25_1 + 0x4a48c)) != 0)
        int64_t x26_1 = sx.q(x8_5)
        int32_t x8_7 = *(x23_1 + x26_1 * 0x4a490 + 0x3a980)
        
        if (x8_7 != 0)
            v9.d = float.s(x21) f* v12.d + var_b0 f+ v11.d
            
            if (x8_7 != 0x2710)
                int64_t x10_2 = sx.q(*(x23_1 + 0xbc6620))
                uint64_t x8_13
                float v0_2
                
                if (x10_2.d == 0xffffffff)
                    v0_2 = XMillisecondsFromMachineTimeDiffFloat(*x25_1, 
                        *(x23_1 + x26_1 * 0x4a490 + muls.dp.d(x8_7 - 1, 0x18)))
                    x8_13 = *gProfilerGlobals
                    v0_2 = v0_2 f* v13.d
                else
                    int32_t x9_7 = *(x23_1 + 0xbc6614)
                    int64_t x8_11 = sx.q(*(x23_1 + (x10_2 << 2) + 0xbc2788))
                    float* x8_16
                    int16_t x9_11
                    
                    if (x9_7 == 0)
                        x8_16 = x23_1 + x26_1 * 0x4a490 + (x8_11 << 4)
                        x9_11 = -0x5570
                    label_fa0094:
                        x8_13 = x23_1
                        v0_2 = *(x8_16 + (zx.q(x9_11) | 0x30000)) f* v13.d
                    else
                        if (x9_7 != 2)
                            x8_16 = x23_1 + x26_1 * 0x4a490 + (x8_11 << 4)
                            x9_11 = -0x5574
                            goto label_fa0094
                        
                        x8_13 = x23_1
                        v0_2 = float.s(*(x23_1 + x26_1 * 0x4a490 + (x8_11 << 4) + 0x3aa94))
                
                int32_t x8_1 = *(x8_13 + 0xbc661c)
                v14.d = vmin_f32(v0_2, float.s(0x4326aaab))
                v11.d = 0f
                v15.d = v9.d f+ fconvert.s(3f)
                
                if (x8_1 == 0x28)
                    if (*(x8_13 + 0xbc6620) != 0xffffffff)
                        x8_1 = 0x28
                    else if (*(x23_1 + x26_1 * 0x4a490 + 0x3aa88) s< 2)
                        x8_1 = 0x28
                    else
                        int64_t i = 0
                        ColorRgbaI* x23_2 = x23_1 + x26_1 * 0x4a490 + 0x3a990
                        v11.d = 0f
                        
                        do
                            i += 1
                            float v0_4 =
                                XMillisecondsFromMachineTimeDiffFloat(*x25_1, *(x23_2 + 8)) f* v13.d
                            float v1_3 = v10.d f- v11.d
                            
                            if (v0_4 f> v14.d)
                                v11.d = v14.d
                            else
                                v11.d = v0_4
                            
                            var_c0 = v9.d
                            float var_bc_2 = v10.d f- v11.d
                            int32_t var_b8_2 = v15.d
                            float var_b4_2 = v1_3
                            DrawRectSolid(&var_c0, x23_2)
                            x23_2 += 0x10
                        while (i s< sx.q(*(x23_1 + x26_1 * 0x4a490 + 0x3aa88)) - 1)
                        
                        x8_1 = *(*gProfilerGlobals + 0xbc661c)
                
                int32_t x8_2
                
                x8_2 = x8_1 == x21 ? -0x3fa3a301 : -0x3f000001
                
                var_c0 = v9.d
                float var_bc_1 = v10.d f- v14.d
                int32_t var_c4 = x8_2
                int32_t var_b8_1 = v15.d
                float var_b4_1 = v10.d f- v11.d
                result = DrawRectSolid(&var_c0, &var_c4)
                v11.d = fconvert.s(2f)
            else
                if ((zx.d(data_2421e28) & 1) == 0 && __cxa_guard_acquire(&data_2421e28) != 0)
                    data_2421e20 = AssetPtrFromPath("sys/DebugFont.font", 0x12)
                    __cxa_guard_release(&data_2421e28)
                    v11.d = fconvert.s(2f)
                
                entry_x22 = (entry_x22 & 0xffffffff00000000) | zx.q(*gRgbaIWhite)
                result = DrawString("Overflow", data_2421e20, entry_x22, 7, v9.d, v8.d)
    
    cond:1_1 = x21 == 0x27
    x21 += 1
while (not(cond:1_1))
return result
