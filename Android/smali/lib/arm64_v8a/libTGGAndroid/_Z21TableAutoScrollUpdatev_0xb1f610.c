// 函数: _Z21TableAutoScrollUpdatev
// 地址: 0xb1f610
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_38

if (zx.d(*(gDomClient + 0x1f8e8)) == 0)
    int32_t x0_1 = GameMainUI()
    int32_t x0_3
    
    if (data_182ac78 == "tbl_global_play" && data_182a9d8 == x0_1 && zx.d(data_182a708) != 0)
        x0_3 = UI2Exists(zx.q(data_182a9e0))
    
    int32_t x20_1
    
    if (data_182ac78 != "tbl_global_play" || data_182a9d8 != x0_1 || zx.d(data_182a708) == 0
            || (x0_3 & 1) == 0)
        int32_t x0_5 = UI2GetHandle(zx.q(x0_1), "tbl_global_play")
        x20_1 = x0_5
        data_182a9e0 = x0_5
        
        if (x0_5 != 0)
            data_182ac78 = "tbl_global_play"
            data_182a9d8 = x0_1
            data_182a708 = 1
    else
        x20_1 = data_182a9e0
    
    var_38 = UI2GetScrollExtentsTable(zx.q(x20_1))
    int32_t var_34_1 = 0
    AutoScrollUpdate(zx.q(x20_1), &var_38)
    
    if (zx.d(*(gDomClient + 0x1f8e9)) != 0)
        goto label_b1f654
    
    goto label_b1f708

if (zx.d(*(gDomClient + 0x1f8e9)) == 0)
label_b1f708:
    int32_t x0_8 = GameMainUI()
    int32_t x0_10
    
    if (data_182ac80 == "tbl_player_hand" && data_182a9e8 == x0_8 && zx.d(data_182a710) != 0)
        x0_10 = UI2Exists(zx.q(data_182a9f0))
    
    int32_t x20_2
    
    if (data_182ac80 != "tbl_player_hand" || data_182a9e8 != x0_8 || zx.d(data_182a710) == 0
            || (x0_10 & 1) == 0)
        int32_t x0_12 = UI2GetHandle(zx.q(x0_8), "tbl_player_hand")
        x20_2 = x0_12
        data_182a9f0 = x0_12
        
        if (x0_12 != 0)
            data_182ac80 = "tbl_player_hand"
            data_182a9e8 = x0_8
            data_182a710 = 1
    else
        x20_2 = data_182a9f0
    
    var_38 = UI2GetScrollExtentsTable(zx.q(x20_2))
    int32_t var_34_2 = 0
    AutoScrollUpdate(zx.q(x20_2), &var_38)
    
    if (zx.d(*(gDomClient + 0x1f8ea)) == 0)
        goto label_b1f7b4
else
label_b1f654:
    
    if (zx.d(*(gDomClient + 0x1f8ea)) == 0)
    label_b1f7b4:
        int32_t x0_15 = GameMainUI()
        int32_t x0_17
        
        if (data_182ac88 == "tbl_abilityTriggers" && data_182a9f8 == x0_15
                && zx.d(data_182a718) != 0)
            x0_17 = UI2Exists(zx.q(data_182aa00))
        
        int32_t x20_3
        
        if (data_182ac88 != "tbl_abilityTriggers" || data_182a9f8 != x0_15
                || zx.d(data_182a718) == 0 || (x0_17 & 1) == 0)
            int32_t x0_19 = UI2GetHandle(zx.q(x0_15), "tbl_abilityTriggers")
            x20_3 = x0_19
            data_182aa00 = x0_19
            
            if (x0_19 != 0)
                data_182ac88 = "tbl_abilityTriggers"
                data_182a9f8 = x0_15
                data_182a718 = 1
        else
            x20_3 = data_182aa00
        
        var_38 = UI2GetScrollExtentsTable(zx.q(x20_3))
        int32_t var_34_3 = 0
        AutoScrollUpdate(zx.q(x20_3), &var_38)
