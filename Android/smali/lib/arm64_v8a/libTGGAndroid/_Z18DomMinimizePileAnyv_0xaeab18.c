// 函数: _Z18DomMinimizePileAnyv
// 地址: 0xaeab18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(gDomClient + 0x1f8e4)
int32_t x19

if (x8 == 0)
label_aeab90:
    x19 = 0
    
    if (GameMainUI() != 0)
    label_aeab9c:
        int32_t x0_3 = GameMainUI()
        int32_t x0_5
        
        if (data_182ab30 == "tbl_player_reveal_slide" && data_182a748 == x0_3
                && zx.d(data_182a610) != 0)
            x0_5 = UI2Exists(zx.q(data_182a750))
        
        uint64_t x0_6
        
        if (data_182ab30 != "tbl_player_reveal_slide" || data_182a748 != x0_3
                || zx.d(data_182a610) == 0 || (x0_5 & 1) == 0)
            x0_6 = UI2GetHandle(zx.q(x0_3), "tbl_player_reveal_slide")
            data_182a750 = x0_6.d
            
            if (x0_6.d != 0)
                data_182ab30 = "tbl_player_reveal_slide"
                data_182a748 = x0_3
                data_182a610 = 1
        else
            x0_6 = zx.q(data_182a750)
        
        UI2SetScrollPos(x0_6, V20)
else
    uint64_t x10_1 = zx.q(x8.w)
    
    if (x10_1.d u>= *(gDomClient + 0x205e8))
        goto label_aeab90
    
    int64_t x9_1 = *(gDomClient + 0x205e0)
    
    if (*(x9_1 + x10_1 * 0x21d8 + 0x21d0) != x8)
        goto label_aeab90
    
    DomMinimizePile(x9_1 + x10_1 * 0x21d8)
    x19 = 1
    
    if (GameMainUI() != 0)
        goto label_aeab9c

return zx.q(x19)
