// 函数: _Z16sFindNearestNodeR10SphereTreeRK6SphereRP14SphereTreeNodeS6_RPS5_
// 地址: 0xfa9ddc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SphereTreeNode* x8_1 = *arg1

if (*(x8_1 + 0x18) != 0)
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
        SphereTreeNode* x9_2 = *(x8_1 + 0x18)
        SphereTreeNode* x8 = *(x8_1 + 0x20)
        int128_t v3
        v3.d = *(x9_2 + 4)
        int128_t v4
        v4.d = *(x9_2 + 8)
        int128_t v5
        v5.d = *(x9_2 + 0xc)
        v3:4.d = *(x8 + 4)
        v4:4.d = *(x8 + 8)
        v5:4.d = *(x8 + 0xc)
        int128_t v3_1 = vsub_f32(v3, v0)
        int128_t v4_1 = vsub_f32(v4, v1)
        int128_t v3_2 = vmul_f32(v3_1, v3_1, 0)
        int128_t v5_1 = vsub_f32(v5, v2)
        int128_t v4_2 = vmul_f32(v4_1, v4_1, 0)
        v5 = vmul_f32(v5_1, v5_1, 0)
        uint128_t v3_4 = vadd_f32(vadd_f32(v3_2, v4_2), v5)
        
        if ((vcgt_f32(vdup_laneq_s32(v3_4, 1), v3_4).d & 1) != 0)
            x8_1 = x9_2
        else
            x8_1 = x8
    while (*(x8_1 + 0x18) != 0)

*arg3 = x8_1
SphereTreeNode* x8_2 = *(x8_1 + 0x10)
*arg4 = x8_2
void* __offset(SphereTreeNode, 0x18) x8_4

if (*(x8_2 + 0x18) == *arg3)
    x8_4 = x8_2 + 0x18
else
    x8_4 = x8_2 + 0x20

*arg5 = x8_4
