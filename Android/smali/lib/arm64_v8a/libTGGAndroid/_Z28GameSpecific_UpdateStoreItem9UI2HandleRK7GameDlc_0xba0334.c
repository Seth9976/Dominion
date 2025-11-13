// 函数: _Z28GameSpecific_UpdateStoreItem9UI2HandleRK7GameDlc
// 地址: 0xba0334
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2
int32_t x19 = arg1.d

if (x8 == 0)
    arg1 = DlcToExpansion(zx.q(*(arg2 + 4)))
    
    if (arg1.d != 0)
        void* x0_1 = DomGetExpansionDef(arg1)
        int64_t x8_1 = sx.q(*(x0_1 + 0x24))
        int64_t x8_2
        
        if (x8_1.d u< 3)
            UI2SetState(zx.q(x19), (&data_1153f68)[x8_1], 0xffffffff, 0)
            x8_2 = sx.q(*(x0_1 + 0x20))
        
        if (x8_1.d u>= 3 || x8_2.d u>= 3)
            pthread_kill(pthread_self(), 6)
            return GetActiveRulesPageCards(XNoReturn()) __tailcall
        
        UI2SetState(zx.q(x19), (&data_1153f80)[x8_2], 0xffffffff, 0)
    
    if (*arg2 == 2)
        goto label_ba03d8
else if (x8 == 2)
label_ba03d8:
    int32_t x8_6 = ror.d(*(arg2 + 4) - 0x1000, 0xc)
    
    if (x8_6 u<= 8 && (0x19f u>> x8_6 & 1) != 0)
        int64_t x8_7 = zx.q(x8_6) << 0x20 s>> 0x1d
        int64_t i_1 = *(&data_801e48 + x8_7)
        void* x23_1 = &data_1825510
        int32_t* x24_1 = *(&data_1153f20 + x8_7) + 8
        int64_t i
        
        do
            char* x21_3 = *(x24_1 - 8)
            
            if (*(x23_1 - 0x30) == x21_3 && *(x23_1 - 0x38) == x19 && *(x23_1 - 0x28) == 0xffffffff)
                arg1 = UI2Exists(zx.q(*x23_1))
            
            int32_t x20_1
            
            if (*(x23_1 - 0x30) == x21_3 && *(x23_1 - 0x38) == x19 && *(x23_1 - 0x28) == 0xffffffff
                    && (arg1.d & 1) != 0)
                x20_1 = *x23_1
                
                if (x20_1 != 0)
                    goto label_ba0444
            else
                arg1 = UI2GetHandle(zx.q(x19), x21_3)
                *x23_1 = arg1.d
                
                if (arg1.d != 0)
                    x20_1 = arg1.d
                    *(x23_1 - 0x30) = x21_3
                    *(x23_1 - 0x38) = x19
                    *(x23_1 - 0x28) = 0xffffffff
                label_ba0444:
                    DomCardDef* x0_5 = DomDefGet(zx.q(*x24_1), 0x18)
                    DomDeclareCardComponents(zx.q(x20_1), x0_5, nullptr, 0, 0)
                    DomDeclareType(zx.q(x20_1), x0_5, 0)
                    DomDeclareExpansion(zx.q(x20_1), x0_5)
            x23_1 += 0x40
            i = i_1
            i_1 -= 1
            x24_1 = &x24_1[4]
        while (i != 1)
