// 函数: _Z24PlayerPodIconRegionSizesR4Vec2S0_
// 地址: 0xba82b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v1
v1.d = fconvert.s(14f)
v1:4.d = fconvert.s(14f)
int128_t v0
v0.q = *V21
*arg1 = vmul_f32(v0, v1, 0)
*arg2 = *V21
int64_t result = GameMainUI()

if (result.d != 0)
    int32_t x21_1 = result.d
    int32_t x0_1
    
    if (data_182ac90 == "tbl_player_pods" && data_182aa08 == x21_1 && zx.d(data_182a720) != 0)
        x0_1 = UI2Exists(zx.q(data_182aa10))
    
    int32_t x22_1
    
    if (data_182ac90 != "tbl_player_pods" || data_182aa08 != x21_1 || zx.d(data_182a720) == 0
            || (x0_1 & 1) == 0)
        int32_t x0_3 = UI2GetHandle(zx.q(x21_1), "tbl_player_pods")
        x22_1 = x0_3
        data_182aa10 = x0_3
        
        if (x0_3 != 0)
            data_182ac90 = "tbl_player_pods"
            data_182aa08 = x21_1
            data_182a720 = 1
    else
        x22_1 = data_182aa10
    
    int32_t x0_5
    
    if (data_182ac98 == "tbl_player_pods" && data_182aa18 == x21_1)
        x0_5 = UI2Exists(zx.q(data_182aa20))
    
    int32_t x23_1
    
    if (data_182ac98 != "tbl_player_pods" || data_182aa18 != x21_1 || (x0_5 & 1) == 0)
        int32_t x0_7 = UI2GetHandle(zx.q(x21_1), "tbl_player_pods", 0)
        x23_1 = x0_7
        data_182aa20 = x0_7
        
        if (x0_7 != 0)
            data_182ac98 = "tbl_player_pods"
            data_182aa18 = x21_1
    else
        x23_1 = data_182aa20
    
    int32_t v0_2
    int32_t v1_1
    v0_2, v1_1 = UI2GetSize(zx.q(x22_1))
    *arg1 = v0_2
    *(arg1 + 4) = v1_1
    int32_t v0_3
    int32_t v1_2
    result, v0_3, v1_2 = UI2GetSize(zx.q(x23_1))
    *arg2 = v0_3
    *(arg2 + 4) = v1_2

return result
