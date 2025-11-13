// 函数: _Z29GameSpecific_GameCreateUpdateR17GameDlgCreateGame9UI2HandleR9GameSetupbb
// 地址: 0xb341c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg5.d
int32_t x22 = arg4.d
int32_t x20 = arg2
GetKingdomConfig(arg3)
UI2SetHandler(zx.q(x20), DomCreateClick)
UI2SetHandler(zx.q(x20), GameCreateGameCommit)
UI2SetState(zx.q(x20), &data_182eba8, 0xffffffff, 0)
UI2SetState(zx.q(x20), UIS_WIP, 0xffffffff, 0)
int64_t* x8_1

if (zx.d(*(arg1 + 0x70)) == 0)
    x8_1 = &data_182e218
else
    x8_1 = &data_182e200

int64_t* x1_3

if ((x22 & 1) != 0)
    x1_3 = &data_182e200
else
    x1_3 = x8_1

UI2SetState(zx.q(x20), x1_3, 0xffffffff, 0)
int64_t x8_2 = sx.q(*(arg1 + 4))

if (x8_2.d u< 4)
    UI2SetState(zx.q(x20), (&data_1153d18)[x8_2], 0xffffffff, 0)
    
    if ((zx.d(*(arg3 + 0x18)) & 0x20) != 0)
        UI2SetState(zx.q(x20), &data_182ebc0, 0xffffffff, 0)
        
        if ((XString::IsEmpty() & 1) == 0)
            UI2SetState(zx.q(x20), &data_182ebd8, 0xffffffff, 0)
            UI2SetText(zx.q(x20), &data_182ebf0, arg3 + 0x40, 0xffffffff)
    
    if ((x22 & 1) != 0)
        UI2SetState(zx.q(x20), &data_182e170, 0xffffffff, 0)
    
    int64_t* x1_5
    
    if ((x21 & 1) != 0)
        x1_5 = &data_182e188
    else
        x1_5 = &data_182e1a0
    
    UI2SetState(zx.q(x20), x1_5, 0xffffffff, 0)
    DomSetupConfig var_19f0
    DomCreateUpdateRules(zx.q(x20), DomCreateUpdateTime(zx.q(x20), arg3), &var_19f0)
    DomCreateUpdateKingdom(arg1, zx.q(x20), arg3, &var_19f0)
    
    if ((HasNonDefaultKingdom(&var_19f0) & 1) != 0 && (x22 & 1) == 0)
        UI2SetState(zx.q(x20), &data_182e0c8, 0xffffffff, 0)
        UI2SetState(zx.q(x20), &data_182e0e0, 0xffffffff, 0)
    
    if ((x21 & 1) == 0)
        UI2SetState(zx.q(x20), &data_182eb48, 0xffffffff, 0)
    
    int32_t x0_23
    
    if (data_182ab98 == "btn_tabPlayers" && data_182a810 == x20 && zx.d(data_182a658) != 0)
        x0_23 = UI2Exists(zx.q(data_182a818))
    
    int32_t x24_2
    
    if (data_182ab98 != "btn_tabPlayers" || data_182a810 != x20 || zx.d(data_182a658) == 0
            || (x0_23 & 1) == 0)
        int32_t x0_25 = UI2GetHandle(zx.q(x20), "btn_tabPlayers")
        x24_2 = x0_25
        data_182a818 = x0_25
        
        if (x0_25 != 0)
            data_182ab98 = "btn_tabPlayers"
            data_182a810 = x20
            data_182a658 = 1
    else
        x24_2 = data_182a818
    
    int32_t x0_27
    
    if (data_182aba0 == "btn_tabTime" && data_182a820 == x20 && zx.d(data_182a660) != 0)
        x0_27 = UI2Exists(zx.q(data_182a828))
    
    int32_t x25_1
    
    if (data_182aba0 != "btn_tabTime" || data_182a820 != x20 || zx.d(data_182a660) == 0
            || (x0_27 & 1) == 0)
        int32_t x0_29 = UI2GetHandle(zx.q(x20), "btn_tabTime")
        x25_1 = x0_29
        data_182a828 = x0_29
        
        if (x0_29 != 0)
            data_182aba0 = "btn_tabTime"
            data_182a820 = x20
            data_182a660 = 1
    else
        x25_1 = data_182a828
    
    int32_t x0_31
    
    if (data_182aba8 == "btn_tabRules" && data_182a830 == x20 && zx.d(data_182a668) != 0)
        x0_31 = UI2Exists(zx.q(data_182a838))
    
    int32_t x26_1
    
    if (data_182aba8 != "btn_tabRules" || data_182a830 != x20 || zx.d(data_182a668) == 0
            || (x0_31 & 1) == 0)
        int32_t x0_33 = UI2GetHandle(zx.q(x20), "btn_tabRules")
        x26_1 = x0_33
        data_182a838 = x0_33
        
        if (x0_33 != 0)
            data_182aba8 = "btn_tabRules"
            data_182a830 = x20
            data_182a668 = 1
    else
        x26_1 = data_182a838
    
    if (x24_2 != 0)
        int32_t x8_13 = *(arg3 + 0x11ac)
        UI2StateDecl* x1_9
        int32_t x8_14
        
        if (x8_13 == 0)
            int32_t x8_15 = *(arg3 + 0x60)
            int32_t x10_1
            
            x10_1 = x8_15 != 0 ? 2 : 1
            
            int32_t x8_17
            
            if (*(arg3 + 0x28c) == 0)
                x8_17 = x8_15 != 0 ? 1 : 0
            else
                x8_17 = x10_1
            
            int32_t x8_18
            
            if (*(arg3 + 0x4b8) != 0)
                x8_18 = x8_17 + 1
            else
                x8_18 = x8_17
            
            int32_t x8_19
            
            if (*(arg3 + 0x6e4) != 0)
                x8_19 = x8_18 + 1
            else
                x8_19 = x8_18
            
            int32_t x8_20
            
            if (*(arg3 + 0x910) != 0)
                x8_20 = x8_19 + 1
            else
                x8_20 = x8_19
            
            int32_t x8_21
            
            if (*(arg3 + 0xb3c) != 0)
                x8_21 = x8_20 + 1
            else
                x8_21 = x8_20
            
            x8_14 = x8_21 - 3
            
            if (x8_14 u<= 3)
                x1_9 = (&data_1153ca0)[sx.q(x8_14)]
            else
                x1_9 = &data_182e980
        else
            x8_14 = x8_13 - 3
            
            if (x8_14 u> 3)
                x1_9 = &data_182e980
            else
                x1_9 = (&data_1153ca0)[sx.q(x8_14)]
        UI2SetState(zx.q(x24_2), x1_9, 0xffffffff, 0)
    
    if (x25_1 == 0)
        goto label_b34604
    
    int64_t x8_22 = sx.q(*(arg3 + 0x20))
    
    if (x8_22.d u< 6)
        UI2SetState(zx.q(x25_1), (&data_1153cc0)[x8_22], 0xffffffff, 0)
    label_b34604:
        
        if (x26_1 == 0)
            goto label_b3463c
        
        int32_t var_2f8
        int64_t x8_23 = sx.q(var_2f8)
        
        if (x8_23.d u< 5)
            UI2SetState(zx.q(x26_1), (&data_1153cf0)[x8_23], 0xffffffff, 0)
        label_b3463c:
            bool x23_1 = x21.b & 1
            GameCreateUpdatePlayers(zx.q(x20), arg3, x23_1, x22.b & 1, *(arg1 + 0x14), 
                *(arg1 + 0x18), *(arg1 + 0x28), 6)
            
            if ((x21 & 1) != 0)
                GameStatusUpdate(zx.q(x20), arg3)
            
            return GameCreateButtonsUpdate(zx.q(x20), arg3, x23_1)

pthread_kill(pthread_self(), 6)
GameDlgCreateGame* x0_42
UI2ClickInfo* x1_15
GameSetup* x2_5
x0_42, x1_15, x2_5 = XNoReturn()
return GameSpecific_GameCreateClick(x0_42, x1_15, x2_5) __tailcall
