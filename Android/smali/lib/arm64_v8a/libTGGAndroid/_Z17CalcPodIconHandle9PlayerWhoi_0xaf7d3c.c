// 函数: _Z17CalcPodIconHandle9PlayerWhoi
// 地址: 0xaf7d3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1
uint64_t result = GameMainUI()

if (result.d != 0)
    if (x21 == 0xffffffff)
        int32_t x20_2 = *(BoardAreaPile(0xd00) + 0x2148)
        
        if (x20_2 == 0)
            return 0
        
        int64_t x21_3 = sx.q(arg2)
        
        if (*((x21_3 << 6) + 0x18381f0) == "tbl_assocPile" && *((x21_3 << 6) + 0x18381e8) == x20_2
                && *((x21_3 << 6) + 0x18381f8) == 0 && *((x21_3 << 6) + 0x1838200) == 0
                && (UI2Exists(zx.q(*((x21_3 << 6) + 0x1838220))) & 1) != 0)
            return zx.q(*((x21_3 << 6) + 0x1838220))
        
        result = UI2GetHandle(zx.q(x20_2), "tbl_assocPile", 0)
        *((x21_3 << 6) + 0x1838220) = result.d
        
        if (result.d != 0)
            *((x21_3 << 6) + 0x18381f0) = "tbl_assocPile"
            *((x21_3 << 6) + 0x18381e8) = x20_2
            *((x21_3 << 6) + 0x18381f8) = 0
            *((x21_3 << 6) + 0x1838200) = 0
    else
        int32_t x20_1 = result.d
        int32_t x8_1 = *(gDomClient + 0x38)
        uint64_t x1
        
        if (x8_1 == 0xffffffff)
            x1 = 0
        else
            x1 = zx.q(x8_1)
        
        if (x1.d != x21)
            int64_t x21_4 = sx.q(PlayerWhoToSeat(zx.q(x21), x1)) - 1
            int32_t x0_8
            
            if (*((x21_4 << 6) + 0x1834160) == "tbl_opponents"
                    && *((x21_4 << 6) + 0x1834158) == x20_1
                    && *((x21_4 << 6) + 0x1834168) == x21_4.d && *((x21_4 << 6) + 0x1834170) == 0)
                x0_8 = UI2Exists(zx.q(*((x21_4 << 6) + 0x1834190)))
            
            int32_t x22_3
            
            if (*((x21_4 << 6) + 0x1834160) != "tbl_opponents"
                    || *((x21_4 << 6) + 0x1834158) != x20_1
                    || *((x21_4 << 6) + 0x1834168) != x21_4.d || *((x21_4 << 6) + 0x1834170) != 0
                    || (x0_8 & 1) == 0)
                int32_t x0_11 = UI2GetHandle(zx.q(x20_1), "tbl_opponents", x21_4.d)
                x22_3 = x0_11
                *((x21_4 << 6) + 0x1834190) = x0_11
                
                if (x0_11 != 0)
                    *((x21_4 << 6) + 0x1834160) = "tbl_opponents"
                    *((x21_4 << 6) + 0x1834158) = x20_1
                    *((x21_4 << 6) + 0x1834168) = x21_4.d
                    *((x21_4 << 6) + 0x1834170) = 0
            else
                x22_3 = *((x21_4 << 6) + 0x1834190)
            
            int32_t x0_13
            
            if (*((x21_4 << 6) + 0x18342e0) == "tbl_opponent_pods"
                    && *((x21_4 << 6) + 0x18342d8) == x22_3
                    && *((x21_4 << 6) + 0x18342e8) == 0xffffffff)
                x0_13 = UI2Exists(zx.q(*((x21_4 << 6) + 0x1834310)))
            
            uint64_t x0_14
            
            if (*((x21_4 << 6) + 0x18342e0) != "tbl_opponent_pods"
                    || *((x21_4 << 6) + 0x18342d8) != x22_3
                    || *((x21_4 << 6) + 0x18342e8) != 0xffffffff || (x0_13 & 1) == 0)
                x0_14 = UI2GetHandle(zx.q(x22_3), "tbl_opponent_pods")
                *((x21_4 << 6) + 0x1834310) = x0_14.d
                
                if (x0_14.d != 0)
                    *((x21_4 << 6) + 0x18342e0) = "tbl_opponent_pods"
                    *((x21_4 << 6) + 0x18342d8) = x22_3
                    *((x21_4 << 6) + 0x18342e8) = 0xffffffff
            else
                x0_14 = zx.q(*((x21_4 << 6) + 0x1834310))
            
            if (UI2GetSize(x0_14) f!= 0f)
                return UI2Selector::Lookup(&data_17d8c70 + (x21_4 << 0xb) + (sx.q(arg2) << 6), 
                    zx.q(x20_1), "tbl_opponents", zx.q(x21_4.d), "tbl_opponent_pods") __tailcall
            
            return 0
        
        int64_t x22_1 = sx.q(arg2)
        
        if (*((x22_1 << 6) + 0x17dbc78) == "tbl_player_pods"
                && *(&data_17dbc70 + (x22_1 << 6)) == x20_1 && *((x22_1 << 6) + 0x17dbc80) == arg2
                && *((x22_1 << 6) + 0x17dbc88) == 0
                && (UI2Exists(zx.q(*((x22_1 << 6) + 0x17dbca8))) & 1) != 0)
            return zx.q(*((x22_1 << 6) + 0x17dbca8))
        
        result = UI2GetHandle(zx.q(x20_1), "tbl_player_pods", arg2)
        *((x22_1 << 6) + 0x17dbca8) = result.d
        
        if (result.d != 0)
            *((x22_1 << 6) + 0x17dbc78) = "tbl_player_pods"
            *(&data_17dbc70 + (x22_1 << 6)) = x20_1
            *((x22_1 << 6) + 0x17dbc80) = arg2
            *((x22_1 << 6) + 0x17dbc88) = 0

return result
