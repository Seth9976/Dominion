// 函数: _Z11RulesUpdate9UI2Handle
// 地址: 0x9c561c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, RulesClick)
int64_t* var_68
int32_t x0_1 = GameSpecific_GetRulesDefs(&var_68)
int32_t var_e8[0x20]
int32_t x0_3 = CalcActiveExpansions(&var_e8)
uint64_t x20_1

if (x0_1 s< 2)
    x20_1 = 0
else
    x20_1 = zx.q(x0_1 - 1)
    
    if (x0_3 s<= 0)
        int64_t x24_1 = 0
        int64_t x21_2 = 0
        void* x25_3 = &data_11d0ff8
        
        do
            int64_t* x26_2 = var_68
            int32_t x0_14
            
            if (*(x25_3 - 0x30) == "tblRulesItem" && *(x25_3 - 0x38) == x19
                    && x21_2 == zx.q(*(x25_3 - 0x28)) && *(x25_3 - 0x20) == 0)
                x0_14 = UI2Exists(zx.q(*x25_3))
            
            uint64_t x0_15
            
            if (*(x25_3 - 0x30) != "tblRulesItem" || *(x25_3 - 0x38) != x19
                    || x21_2 != zx.q(*(x25_3 - 0x28)) || *(x25_3 - 0x20) != 0 || (x0_14 & 1) == 0)
                x0_15 = UI2GetHandle(zx.q(x19), "tblRulesItem", x21_2.d)
                *x25_3 = x0_15.d
                
                if (x0_15.d != 0)
                    *(x25_3 - 0x30) = "tblRulesItem"
                    *(x25_3 - 0x38) = x19
                    *(x25_3 - 0x28) = x21_2.d
                    *(x25_3 - 0x20) = 0
                    
                    if (x0_15.d != 0)
                    label_9c5948:
                        UI2StateDecl* x1_2 = *(x26_2 + x24_1 + 0x30)
                        
                        if (x1_2 != 0)
                            UI2SetState(x0_15, x1_2, 0xffffffff, 0)
            else
                x0_15 = zx.q(*x25_3)
                
                if (x0_15.d != 0)
                    goto label_9c5948
            
            if (*(x26_2 + x24_1 + 0x40) == 0)
                UI2SetState(zx.q(x19), &data_11cfa28, x21_2.d, 0)
            
            x21_2 += 1
            x24_1 += 0x30
            x25_3 += 0x40
        while (x20_1 != x21_2)
    else
        int64_t x21_1 = 0
        uint64_t x26_1 = zx.q(x0_3)
        int64_t x27_1 = 1
        
        do
            int64_t* x23_1 = var_68
            int32_t x0_5
            
            if (*((x21_1 << 6) + 0x11d0fc8) == "tblRulesItem" && *((x21_1 << 6) + 0x11d0fc0) == x19
                    && x21_1 == zx.q(*((x21_1 << 6) + 0x11d0fd0))
                    && *((x21_1 << 6) + 0x11d0fd8) == 0)
                x0_5 = UI2Exists(zx.q(*((x21_1 << 6) + &data_11d0ff8)))
            
            int32_t x25_2
            
            if (*((x21_1 << 6) + 0x11d0fc8) != "tblRulesItem" || *((x21_1 << 6) + 0x11d0fc0) != x19
                    || x21_1 != zx.q(*((x21_1 << 6) + 0x11d0fd0))
                    || *((x21_1 << 6) + 0x11d0fd8) != 0 || (x0_5 & 1) == 0)
                int32_t x0_7 = UI2GetHandle(zx.q(x19), "tblRulesItem", x21_1.d)
                x25_2 = x0_7
                *((x21_1 << 6) + &data_11d0ff8) = x0_7
                
                if (x0_7 != 0)
                    *((x21_1 << 6) + 0x11d0fc8) = "tblRulesItem"
                    *((x21_1 << 6) + 0x11d0fc0) = x19
                    *((x21_1 << 6) + 0x11d0fd0) = x21_1.d
                    *((x21_1 << 6) + 0x11d0fd8) = 0
            else
                x25_2 = *((x21_1 << 6) + &data_11d0ff8)
            
            int32_t x8_8
            
            if (x21_1 + 3 != zx.q(var_e8[0]))
                int64_t x10_1 = 1
                int64_t x9_4
                
                do
                    x9_4 = x10_1
                    
                    if (x26_1 == x10_1)
                        break
                    
                    x10_1 = x9_4 + 1
                while (x21_1 + 3 != zx.q(var_e8[x9_4]))
                
                x8_8 = x9_4 u< x26_1 ? 1 : 0
                
                if (x25_2 != 0)
                    goto label_9c5790
            else
                x8_8 = 1
                
                if (x25_2 != 0)
                label_9c5790:
                    
                    if (x8_8 != 0)
                        UI2SetState(zx.q(x25_2), &data_11cfa58, 0xffffffff, 0)
            
            if (x25_2 != 0)
                UI2StateDecl* x1_1 = x23_1[x27_1 * 6]
                
                if (x1_1 != 0)
                    UI2SetState(zx.q(x25_2), x1_1, 0xffffffff, 0)
            
            if (*(x23_1 + x27_1 * 0x30 + 0x10) == 0)
                UI2SetState(zx.q(x19), &data_11cfa28, x21_1.d, 0)
            
            x21_1 += 1
            x27_1 += 1
        while (x21_1 != x20_1)

int64_t result = UI2SetInt(zx.q(x19), &data_11cf9f8, x20_1.d, 0xffffffff)

if (*(gGameDlgManager + 0x2c) != 0x27)
    if (*(gGameDlgManager + 0x3c) == 0x27 && *(gGameDlgManager + 0x40) != 0)
        return UI2SetState(zx.q(x19), &data_11cfa40, 0xffffffff, 0)
else if (*(gGameDlgManager + 0x30) != 0)
    return UI2SetState(zx.q(x19), &data_11cfa40, 0xffffffff, 0)

return result
