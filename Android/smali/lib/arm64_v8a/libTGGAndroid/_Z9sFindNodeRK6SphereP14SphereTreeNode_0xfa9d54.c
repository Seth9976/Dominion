// 函数: _Z9sFindNodeRK6SphereP14SphereTreeNode
// 地址: 0xfa9d54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x18) != 0)
    int32_t temp0_1 = *(arg1 + 4)
    int128_t v0
    v0.d = temp0_1
    v0:4.d = temp0_1
    int32_t temp0_2 = *(arg1 + 8)
    int128_t v1
    v1.d = temp0_2
    v1:4.d = temp0_2
    int32_t temp0_3 = *(arg1 + 0xc)
    int128_t v2
    v2.d = temp0_3
    v2:4.d = temp0_3
    
    do
        SphereTreeNode* x8_1 = *(arg2 + 0x18)
        SphereTreeNode* x9_2 = *(arg2 + 0x20)
        int128_t v3
        v3.d = *(x8_1 + 4)
        int128_t v4
        v4.d = *(x8_1 + 8)
        int128_t v5
        v5.d = *(x8_1 + 0xc)
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
            arg2 = x8_1
        else
            arg2 = x9_2
    while (*(arg2 + 0x18) != 0)

return arg2
