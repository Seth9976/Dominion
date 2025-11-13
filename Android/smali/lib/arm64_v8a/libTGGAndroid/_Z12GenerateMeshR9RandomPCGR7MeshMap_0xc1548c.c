// 函数: _Z12GenerateMeshR9RandomPCGR7MeshMap
// 地址: 0xc1548c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_20040
int128_t v0
int128_t v1
int128_t v3
int128_t v4
v0, v1, v3, v4 = GeneratePoints(arg1, &var_20040)
int64_t i = 0
MeshMap& x9 = arg2

do
    void* x10_1 = &var_20040 + i
    v0.d = *x10_1
    v1.d = *(x10_1 + 4)
    v0:4.d = *(x10_1 + 8)
    v1:4.d = *(x10_1 + 0xc)
    v0:8.d = *(x10_1 + 0x10)
    v1:8.d = *(x10_1 + 0x14)
    v0:0xc.d = *(x10_1 + 0x18)
    v1:0xc.d = *(x10_1 + 0x1c)
    i += 0x40
    v3.d = *(x10_1 + 0x20)
    v4.d = *(x10_1 + 0x24)
    v3:4.d = *(x10_1 + 0x28)
    v4:4.d = *(x10_1 + 0x2c)
    v3:8.d = *(x10_1 + 0x30)
    v4:8.d = *(x10_1 + 0x34)
    v3:0xc.d = *(x10_1 + 0x38)
    v4:0xc.d = *(x10_1 + 0x3c)
    *x9 = v0.d
    *(x9 + 4) = v1.d
    *(x9 + 8) = 0
    *(x9 + 0xc) = v0:4.d
    *(x9 + 0x10) = v1:4.d
    *(x9 + 0x14) = 0
    *(x9 + 0x18) = v0:8.d
    *(x9 + 0x1c) = v1:8.d
    *(x9 + 0x20) = 0
    *(x9 + 0x24) = v0:0xc.d
    *(x9 + 0x28) = v1:0xc.d
    *(x9 + 0x2c) = 0
    *(x9 + 0x30) = v3.d
    *(x9 + 0x34) = v4.d
    *(x9 + 0x38) = 0
    *(x9 + 0x3c) = v3:4.d
    *(x9 + 0x40) = v4:4.d
    *(x9 + 0x44) = 0
    *(x9 + 0x48) = v3:8.d
    *(x9 + 0x4c) = v4:8.d
    *(x9 + 0x50) = 0
    *(x9 + 0x54) = v3:0xc.d
    *(x9 + 0x58) = v4:0xc.d
    *(x9 + 0x5c) = 0
    x9 += 0x60
while (i != 0x20000)

v0 = data_71ba40
int32_t var_20068 = 0
int64_t* var_20070 = nullptr
int32_t var_20058 = 0
int128_t var_20050 = v0
int64_t var_20060 = 0
jcv_diagram_generate_useralloc(0x4000, &var_20040, &var_20050, 0, 0, 
    jcv_diagram_generate_useralloc+0x16fc, sub_c13c08, &var_20070)
*(arg2 + 0x8ffd0) = 0
int64_t* x21 = var_20070
int64_t* x10_3 = &x21[1]
float i_1

do
    x10_3 = *x10_3
    
    if (x10_3 == 0)
        break
    
    i_1 = *(x10_3 + 0x1c) - *(x10_3 + 0x24)
    
    if (i_1 < 0f)
        i_1 = fneg(i_1)
    
    if (i_1 >= float.s(0x34000000))
        break
    
    i_1 = x10_3[3].d f- x10_3[4].d
    
    if (i_1 < 0f)
        i_1 = fneg(i_1)
while (i_1 < float.s(0x34000000))

int64_t* x11_2 = nullptr

if (x10_3 == 0)
    goto label_c1563c

while (true)
    x11_2 = x10_3
label_c155d8:
    void* x12_1 = x11_2[1]
    
    if (x12_1 != 0)
        void* x13_1 = x11_2[2]
        
        if (x13_1 != 0)
            int64_t x14_1 = sx.q(*(arg2 + 0x8ffd0))
            uint64_t x12_3 = zx.q(*(x12_1 + 8)) | zx.q(*(x13_1 + 8)) << 0x20
            *(arg2 + 0x8ffd0) = x14_1.d + 1
            *(arg2 + (x14_1 << 3) + 0x30000) = x12_3
        label_c1563c:
        label_c15640:
            x10_3 = *x11_2
            
            if (x10_3 == 0)
                break
            
            i_1 = *(x10_3 + 0x1c) - *(x10_3 + 0x24)
            
            if (i_1 < 0f)
                i_1 = fneg(i_1)
            
            if (i_1 >= float.s(0x34000000))
                continue
            else
                i_1 = x10_3[3].d f- x10_3[4].d
                
                if (i_1 < 0f)
                    i_1 = fneg(i_1)
                
                if (i_1 < float.s(0x34000000))
                    break
                
                continue
    
    while (true)
        x11_2 = *x11_2
        
        if (x11_2 == 0)
            break
        
        i_1 = *(x11_2 + 0x1c) - *(x11_2 + 0x24)
        
        if (i_1 < 0f)
            i_1 = fneg(i_1)
        
        if (i_1 >= float.s(0x34000000))
            goto label_c155d8
        
        i_1 = x11_2[3].d f- x11_2[4].d
        
        if (i_1 < 0f)
            i_1 = fneg(i_1)
        
        if (not(i_1 < float.s(0x34000000)))
            goto label_c155d8
    
    break

*(arg2 + 0xeffbc) = 0
int64_t x22_1 = x21[6]
char var_24070[0x30]
int128_t v0_1
int128_t v1_2
int128_t v2
v0_1, v1_2, v2 = memset(&var_24070, 0, 0x4000)
uint64_t x8 = zx.q(var_20068)

if (x8.d s>= 1)
    int64_t x9_2 = 0
    int32_t x17_1 = 0
    
    do
        var_24070[sx.q(*(x22_1 + x9_2 * 0x14 + 8))] = 1
        void** i_2 = *(x22_1 + x9_2 * 0x14 + 0xc)
        int32_t x0_2
        int32_t x2_1
        
        if (i_2 == 0)
            x2_1 = -1
            x0_2 = -1
        else
            x0_2 = -1
            int32_t x5_1 = x17_1
            int32_t x4_1 = -1
            
            do
                void* x17_2 = i_2[2]
                
                if (x17_2 == 0)
                    x2_1 = x4_1
                    x17_1 = x5_1
                else
                    x2_1 = *(x17_2 + 8)
                    
                    if (x0_2 == 0xffffffff)
                        x0_2 = x2_1
                        *(arg2 + (sx.q(*(x22_1 + x9_2 * 0x14 + 8)) << 2) + 0xeffc0) = x5_1
                    
                    x17_1 = x5_1 + 1
                    *(arg2 + (sx.q(x5_1) << 2) + 0xfffc0) = x2_1
                    
                    if (x4_1 != 0xffffffff)
                        int64_t x6_1 = sx.q(x2_1)
                        
                        if (zx.d(var_24070[x6_1]) == 0)
                            int64_t x7_1 = sx.q(x4_1)
                            
                            if (zx.d(var_24070[x7_1]) == 0)
                                int64_t x5_5 = sx.q(*(x22_1 + x9_2 * 0x14 + 8))
                                v0_1.q = *(arg2 + x7_1 * 0xc)
                                v1_2.q = *(arg2 + x5_5 * 0xc)
                                v2.q = *(arg2 + x6_1 * 0xc)
                                uint128_t v0_3 = vmul_f32(vsub_f32(v0_1, v1_2), 
                                    vrev64_s32(vsub_f32(v2, v1_2)), 0)
                                
                                if (not(vsub_f32(v0_3, vdup_laneq_s32(v0_3, 1)).d f< 0f))
                                    int64_t x6_3 = sx.q(*(arg2 + 0xeffbc))
                                    *(arg2 + 0xeffbc) = x6_3.d + 1
                                    *(arg2 + x6_3 * 0xc + 0x8ffd4) =
                                        (zx.q(x5_5.d) & 0xffffffff) | zx.q(x4_1) << 0x20
                                    *(arg2 + x6_3 * 0xc + 0x8ffdc) = x2_1
                
                i_2 = *i_2
                x5_1 = x17_1
                x4_1 = x2_1
            while (i_2 != 0)
        
        *(arg2 + (sx.q(x17_1) << 2) + 0xfffc0) = 0xffffffff
        
        if (x2_1 != 0xffffffff && x0_2 != 0xffffffff)
            int64_t x3_3 = sx.q(x2_1)
            
            if (zx.d(var_24070[x3_3]) == 0)
                int64_t x4_5 = sx.q(x0_2)
                
                if (zx.d(var_24070[x4_5]) == 0)
                    int64_t x1_4 = sx.q(*(x22_1 + x9_2 * 0x14 + 8))
                    v0_1.q = *(arg2 + x3_3 * 0xc)
                    v1_2.q = *(arg2 + x1_4 * 0xc)
                    v2.q = *(arg2 + x4_5 * 0xc)
                    uint128_t v0_5 =
                        vmul_f32(vsub_f32(v0_1, v1_2), vrev64_s32(vsub_f32(v2, v1_2)), 0)
                    
                    if (not(vsub_f32(v0_5, vdup_laneq_s32(v0_5, 1)).d f< 0f))
                        int64_t x3_6 = sx.q(*(arg2 + 0xeffbc))
                        *(arg2 + 0xeffbc) = x3_6.d + 1
                        *(arg2 + x3_6 * 0xc + 0x8ffd4) =
                            (zx.q(x1_4.d) & 0xffffffff) | zx.q(x2_1) << 0x20
                        *(arg2 + x3_6 * 0xc + 0x8ffdc) = x0_2
        
        x9_2 += 1
        x17_1 += 1
    while (x9_2 != x8)

int64_t x19_1 = *(x21 + 0x9c)
void* i_3 = *(x21 + 0x4c)
int64_t x20_1 = *(x21 + 0xac)

for (; i_3 != 0; i_3 = *(x21 + 0x4c))
    *(x21 + 0x4c) = *(i_3 + 8)
    x20_1(x19_1)

return x20_1(x19_1, *x21)
