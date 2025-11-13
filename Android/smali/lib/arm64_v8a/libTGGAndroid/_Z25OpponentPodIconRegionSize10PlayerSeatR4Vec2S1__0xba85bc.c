// 函数: _Z25OpponentPodIconRegionSize10PlayerSeatR4Vec2S1_
// 地址: 0xba85bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2 = *V21
*arg3 = *V21
int64_t result = GameMainUI()

if (result.d != 0)
    int32_t x21_1 = result.d
    int32_t x23_2
    
    if (*(((sx.q(arg1) - 1) << 6) + 0x1834d60) != "tbl_opponents"
            || *(((sx.q(arg1) - 1) << 6) + 0x1834d58) != x21_1
            || *(((sx.q(arg1) - 1) << 6) + 0x1834d68) != arg1 - 1
            || *(((sx.q(arg1) - 1) << 6) + 0x1834d70) != "tbl_opponent_pods"
            || *(((sx.q(arg1) - 1) << 6) + 0x1834d78) != 0xffffffff
            || *(((sx.q(arg1) - 1) << 6) + 0x1834d80) != 0)
        result = UI2GetHandle(zx.q(x21_1), "tbl_opponents", arg1 - 1)
        *(((sx.q(arg1) - 1) << 6) + 0x1834d90) = result.d
        
        if (result.d == 0)
            x23_2 = 0
        else
            result = UI2GetHandle(result, "tbl_opponent_pods")
            x23_2 = result.d
            *(((sx.q(arg1) - 1) << 6) + 0x1834d90) = result.d
            *(((sx.q(arg1) - 1) << 6) + 0x1834d58) = x21_1
            *(((sx.q(arg1) - 1) << 6) + 0x1834d60) = "tbl_opponents"
            *(((sx.q(arg1) - 1) << 6) + 0x1834d68) = arg1 - 1
            *(((sx.q(arg1) - 1) << 6) + 0x1834d70) = "tbl_opponent_pods"
            *(((sx.q(arg1) - 1) << 6) + 0x1834d78) = 0xffffffff
            *(((sx.q(arg1) - 1) << 6) + 0x1834d80) = 0
    else
        x23_2 = *(((sx.q(arg1) - 1) << 6) + 0x1834d90)
    
    int32_t x24_2
    
    if (*(((sx.q(arg1) - 1) << 6) + 0x1834ee0) == "tbl_opponents"
            && *(((sx.q(arg1) - 1) << 6) + 0x1834ed8) == x21_1
            && *(((sx.q(arg1) - 1) << 6) + 0x1834ee8) == arg1 - 1
            && *(((sx.q(arg1) - 1) << 6) + 0x1834ef0) == "tbl_opponent_pods"
            && *(((sx.q(arg1) - 1) << 6) + 0x1834ef8) == 0
            && *(((sx.q(arg1) - 1) << 6) + 0x1834f00) == 0)
        x24_2 = *(((sx.q(arg1) - 1) << 6) + 0x1834f10)
        
        if (x23_2 != 0)
            goto label_ba87b0
        
        goto label_ba87f4
    
    result = UI2GetHandle(zx.q(x21_1), "tbl_opponents", arg1 - 1, "tbl_opponent_pods", 0)
    x24_2 = result.d
    *(((sx.q(arg1) - 1) << 6) + 0x1834f10) = result.d
    
    if (result.d != 0)
        *(((sx.q(arg1) - 1) << 6) + 0x1834ed8) = x21_1
        *(((sx.q(arg1) - 1) << 6) + 0x1834ee0) = "tbl_opponents"
        *(((sx.q(arg1) - 1) << 6) + 0x1834ee8) = arg1 - 1
        *(((sx.q(arg1) - 1) << 6) + 0x1834ef0) = "tbl_opponent_pods"
        *(((sx.q(arg1) - 1) << 6) + 0x1834ef8) = 0
        *(((sx.q(arg1) - 1) << 6) + 0x1834f00) = 0
    
    if (x23_2 == 0)
    label_ba87f4:
        *arg2 = *V21
        
        if (x24_2 != 0)
        label_ba87c0:
            int32_t v0_2
            int32_t v1_2
            result, v0_2, v1_2 = UI2GetSize(zx.q(x24_2))
            *arg3 = v0_2
            *(arg3 + 4) = v1_2
        else
            *arg2 = *V21
    else
    label_ba87b0:
        int32_t v0_1
        int32_t v1_1
        result, v0_1, v1_1 = UI2GetSize(zx.q(x23_2))
        *arg2 = v0_1
        *(arg2 + 4) = v1_1
        
        if (x24_2 != 0)
            goto label_ba87c0
        
        *arg2 = *V21

return result
