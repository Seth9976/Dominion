// 函数: _Z18sSphereTreeAddNodeR10SphereTreeP14SphereTreeNode
// 地址: 0xfa9e88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Sphere* x21 = *arg1

if (*(x21 + 0x18) != 0)
    int32_t temp0_1 = *(arg2 + 4)
    int128_t v0
    v0.d = temp0_1
    v0:4.d = temp0_1
    int32_t temp0_2 = *(arg2 + 8)
    int128_t v1
    v1.d = temp0_2
    v1:4.d = temp0_2
    int32_t temp0_3 = *(arg2 + 0xc)
    int128_t v2
    v2.d = temp0_3
    v2:4.d = temp0_3
    
    do
        Sphere* x8_2 = *(x21 + 0x18)
        Sphere* x9_2 = *(x21 + 0x20)
        int128_t v3
        v3.d = *(x8_2 + 4)
        int128_t v4
        v4.d = *(x8_2 + 8)
        int128_t v5
        v5.d = *(x8_2 + 0xc)
        v3:4.d = *(x9_2 + 4)
        v4:4.d = *(x9_2 + 8)
        v5:4.d = *(x9_2 + 0xc)
        int128_t v3_1 = vsub_f32(v3, v0)
        int128_t v4_1 = vsub_f32(v4, v1)
        int128_t v3_2 = vmul_f32(v3_1, v3_1, 0)
        int128_t v5_1 = vsub_f32(v5, v2)
        int128_t v4_2 = vmul_f32(v4_1, v4_1, 0)
        v5 = vmul_f32(v5_1, v5_1, 0)
        uint128_t v3_4 = vadd_f32(vadd_f32(v3_2, v4_2), v5)
        
        if ((vcgt_f32(vdup_laneq_s32(v3_4, 1), v3_4).d & 1) != 0)
            x21 = x8_2
        else
            x21 = x9_2
    while (*(x21 + 0x18) != 0)

Sphere* i_1 = *(x21 + 0x10)
void* x24 = *gSphereTreeGlobals
void** x22

if (*(i_1 + 0x18) == x21)
    x22 = i_1 + 0x18
else
    x22 = i_1 + 0x20

*(gSphereTreeGlobals + 0x14) += 1

if (x24 == 0)
    int64_t* x0_1 = XMalloc(8 + *(gSphereTreeGlobals + 0x10) * 0x28)
    *x0_1 = *(gSphereTreeGlobals + 8)
    int32_t x8_8 = *(gSphereTreeGlobals + 0x10)
    x24 = *gSphereTreeGlobals
    *(gSphereTreeGlobals + 8) = x0_1
    
    if (x8_8 s>= 1)
        int64_t i = 0
        void** x8_9 = &x0_1[1]
        
        do
            void** x10_7 = x8_9
            *x8_9 = x24
            x8_9 = &x8_9[5]
            i += 1
            x24 = x10_7
        while (i s< sx.q(*(gSphereTreeGlobals + 0x10)))
        
        x24 = x8_9 - 0x28
    
    *gSphereTreeGlobals = x24

*gSphereTreeGlobals = *x24
float v0_1
int32_t v1_1
float v2_1
int32_t v3_5
v0_1, v1_1, v2_1, v3_5 = SphereUnion(arg2, x21)
*(x24 + 8) = v2_1
*(x24 + 0xc) = v3_5
*(x24 + 0x18) = arg2
*x24 = v0_1 * float.s(0x3f8ccccd)
*(x24 + 4) = v1_1
*(arg2 + 0x10) = x24
*(x24 + 0x20) = x21
*(x21 + 0x10) = x24
*x22 = x24
*(x24 + 0x10) = i_1
int64_t result

do
    if ((SphereContainsSphere(i_1, *(i_1 + 0x18)) & 1) != 0)
        result = SphereContainsSphere(i_1, *(i_1 + 0x20))
        
        if ((result.d & 1) != 0)
            break
    
    int32_t v0_2
    int32_t v1_2
    int32_t v2_2
    int32_t v3_6
    result, v0_2, v1_2, v2_2, v3_6 = SphereUnion(*(i_1 + 0x18), *(i_1 + 0x20))
    *i_1 = v0_2
    *(i_1 + 4) = v1_2
    *(i_1 + 8) = v2_2
    *(i_1 + 0xc) = v3_6
    i_1 = *(i_1 + 0x10)
while (i_1 != 0)

return result
