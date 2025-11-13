// 函数: _Z33OpponentExpandedPodIconRegionSizeR4Vec2S0_
// 地址: 0xba8408
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v1
v1.d = 0x41000000
v1:4.d = 0x41000000
int128_t v0
v0.q = *V21
*arg1 = vmul_f32(v0, v1, 0)
*arg2 = *V21
int64_t result = GameMainUI()

if (result.d != 0)
    int32_t x21_1 = result.d
    int32_t x23_1
    
    if (data_182aca0 != "tbl_opponents" || data_182aa28 != x21_1
            || data_182aca8 != "tbl_opponent_pods" || zx.d(data_182a728) == 0)
        result = UI2GetHandle(zx.q(x21_1), "tbl_opponents", 0)
        data_182aa30 = result.d
        
        if (result.d == 0)
            x23_1 = 0
        else
            result = UI2GetHandle(result, "tbl_opponent_pods")
            x23_1 = result.d
            data_182aa30 = result.d
            data_182aa28 = x21_1
            data_182aca0 = "tbl_opponents"
            data_182aca8 = "tbl_opponent_pods"
            data_182a728 = 1
    else
        x23_1 = data_182aa30
    
    int32_t x22_1
    
    if (data_182acb0 != "tbl_opponents" || data_182aa38 != x21_1
            || data_182acb8 != "tbl_opponent_pods")
        result = UI2GetHandle(zx.q(x21_1), "tbl_opponents", 0, "tbl_opponent_pods", 0)
        x22_1 = result.d
        data_182aa40 = result.d
        
        if (result.d != 0)
            data_182aa38 = x21_1
            data_182acb0 = "tbl_opponents"
            data_182acb8 = "tbl_opponent_pods"
    else
        x22_1 = data_182aa40
    
    if (x23_1 == 0)
        *arg1 = *V21
        
        if (x22_1 != 0)
        label_ba8584:
            int32_t v0_3
            int32_t v1_2
            result, v0_3, v1_2 = UI2GetSize(zx.q(x22_1))
            *arg2 = v0_3
            *(arg2 + 4) = v1_2
        else
            *arg1 = *V21
    else
        int32_t v0_2
        int32_t v1_1
        result, v0_2, v1_1 = UI2GetSize(zx.q(x23_1))
        *arg1 = v0_2
        *(arg1 + 4) = v1_1
        
        if (x22_1 != 0)
            goto label_ba8584
        
        *arg1 = *V21

return result
