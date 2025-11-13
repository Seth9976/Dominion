// 函数: _Z35GameSpecific_UpdateExpansionButtons9UI2Handle20ExpansionButtonStylei
// 地址: 0xb315d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x25 = arg1
int32_t x20 = arg2
int32_t* var_68
int32_t x0_1 = DomGetExpansions(&var_68)

if (x20 u<= 7)
    int32_t x28_1 = x0_1
    int64_t* x1 = &data_1831368
    
    switch (x20)
        case 0, 5
            UI2SetState(zx.q(x25), &data_1831380, 0xffffffff, 0)
            x1 = &data_18313b0
        case 4
            x1 = &data_1831350
        case 6, 7
            UI2SetState(zx.q(x25), &data_1831398, 0xffffffff, 0)
            x1 = &data_18313b0
    
    UI2SetState(zx.q(x25), x1, 0xffffffff, 0)
    int32_t x8_3
    
    if ((x20 & 0xfffffffb) == 3)
        x8_3 = -1
    else
        x8_3 = 0
    
    int32_t x8_4
    
    x8_4 = x20 == 6 ? -2 : x8_3
    
    if (x28_1 + x8_4 - 0xf u< 4)
        UI2SetState(zx.q(x25), (&data_1153c68)[sx.q(x28_1 + x8_4 - 0xf)], 0xffffffff, 0)
        int32_t var_8c_1
        
        if (x28_1 s<= 0)
            GetActiveProfile()
            var_8c_1 = 0
        else
            int64_t i = 0
            int32_t x23_1 = 0
            int32_t var_78
            
            do
                int32_t* x8_7 = var_68
                int32_t x9_1 = *(x8_7 + i)
                bool z_1
                
                if (x9_1 != 0)
                    z_1 = x9_1 == 0x13
                else
                    z_1 = true
                
                if (not(z_1))
                    var_78 = 0xffffffff
                    x23_1 += ExpIsSelected(zx.q(*(x8_7 + i)), zx.q(x20), &var_78) & 1
                
                i += 0x28
            while (mulu.dp.d(x28_1, 0x28) != i)
            
            void* x0_8 = GetActiveProfile()
            
            if (x28_1 s< 1)
                var_8c_1 = 0
            else
                int64_t x24_1 = 0
                int32_t x12_1 = 0
                int32_t x10_2 = x20 & 0xfffffffe
                int32_t x13_1 = x20 - 1
                uint64_t x11_2 = zx.q(x28_1)
                int32_t x9_3 = (x20 == 3 ? 1 : 0) | (x20 == 6 ? 1 : 0)
                var_8c_1 = 0
                int32_t var_b4_1 = x10_2
                int32_t var_b0_1 = x28_1
                uint64_t var_c0_1 = x11_2
                int32_t var_c4_1 = x9_3
                
                while (true)
                    int32_t fp_1
                    
                    if (x10_2 != 6)
                        fp_1 = x24_1.d
                    else
                        fp_1 = x12_1 + 1
                    
                    if (fp_1 s>= x28_1)
                        break
                    
                    int32_t* x14_1 = var_68
                    void* x13_2 = x14_1 + mulu.dp.d(fp_1, 0x28)
                    int32_t x27_1 = *x13_2
                    
                    if (x27_1 != 0 && (x9_3 & (x27_1 == 0x13 ? 1 : 0) & 1) == 0)
                        int32_t x0_13
                        
                        if (*((x24_1 << 6) + 0x1810b18) == "tblExpansions"
                                && *(&data_1810b10 + (x24_1 << 6)) == x25
                                && x24_1 == zx.q(*((x24_1 << 6) + 0x1810b20))
                                && *((x24_1 << 6) + 0x1810b28) == 0)
                            x0_13 = UI2Exists(zx.q(*((x24_1 << 6) + 0x1810b48)))
                        
                        int32_t x28_4
                        
                        if (*((x24_1 << 6) + 0x1810b18) != "tblExpansions"
                                || *(&data_1810b10 + (x24_1 << 6)) != x25
                                || x24_1 != zx.q(*((x24_1 << 6) + 0x1810b20))
                                || *((x24_1 << 6) + 0x1810b28) != 0 || (x0_13 & 1) == 0)
                            int32_t x0_15 = UI2GetHandle(zx.q(x25), "tblExpansions", x24_1.d)
                            *((x24_1 << 6) + 0x1810b48) = x0_15
                            
                            if (x0_15 == 0)
                                x10_2 = var_b4_1
                                x28_1 = var_b0_1
                                x11_2 = var_c0_1
                            else
                                x28_4 = x0_15
                                *((x24_1 << 6) + 0x1810b18) = "tblExpansions"
                                *(&data_1810b10 + (x24_1 << 6)) = x25
                                *((x24_1 << 6) + 0x1810b20) = x24_1.d
                                *((x24_1 << 6) + 0x1810b28) = 0
                            label_b3195c:
                                uint64_t x21_2 = zx.q(fp_1)
                                void* x19_4 = x14_1 + x21_2 * 0x28
                                UI2SetState(zx.q(x28_4), *(x19_4 + 0x10), 0xffffffff, 0)
                                UI2SetState(zx.q(x28_4), *(x19_4 + 0x10), 0xffffffff, 0)
                                
                                if (x20 == 6)
                                    int64_t x9_8 = 0
                                    int32_t x12_2 = 0
                                    int32_t x10_3 = 0
                                    int64_t x8_23 = 0
                                    
                                    while (true)
                                        void* x11_4 = x0_8 + x9_8
                                        uint64_t x13_3 = zx.q(*(x11_4 + 0x3614))
                                        int32_t x11_3
                                        
                                        if (x13_3.d == 0)
                                            x11_3 = x12_2
                                        else
                                            if (*(x11_4 + 0x360c) != x27_1)
                                                x11_3 = x12_2
                                            else
                                                int64_t x11_7 = sx.q(*(x0_8 + x9_8 + 0x3610))
                                                
                                                if (x11_7.d u>= 4)
                                                    goto label_b31eb4
                                                
                                                x11_3 = *(&data_71c4b0 + (x11_7 << 2))
                                                
                                                if (x11_3 s<= x12_2)
                                                    x11_3 = x12_2
                                                else
                                                    uint64_t x10_5 = zx.q(*(x0_8 + x9_8 + 0x3618))
                                                    
                                                    if (x10_5.d s< 1)
                                                        x10_3 = 0
                                                        x8_23 = (x8_23 & 0xffffffff00000000) | x13_3
                                                    else
                                                        x8_23 = (x8_23 & 0xffffffff00000000) | x10_5
                                                        x10_3 = 1
                                            
                                            x9_8 += 0x14
                                            x12_2 = x11_3
                                            
                                            if (x9_8 != 0xc80)
                                                continue
                                        
                                        var_78.q = zx.q(x11_3) | zx.q(x10_3) << 0x20
                                        int64_t var_70_1 = x8_23
                                        DeclareCampaignMedal(zx.q(x28_4), &var_78, 0xffffffff)
                                        break
                                
                                int32_t var_ac_1
                                void* x19_5
                                
                                if (x20 == 4 && x27_1 s>= 4)
                                    UI2SetState(zx.q(x28_4), &data_18314d0, 0xffffffff, 0)
                                    UI2SetState(zx.q(x28_4), &data_1831470, 0xffffffff, 0)
                                    x19_5 = x13_2
                                    var_ac_1 = 0
                                    UI2SetState(zx.q(x28_4), &data_18315f0, 0xffffffff, 0)
                                else if (x27_1 != 0x13)
                                    if ((ProfileHasEntitlementForExpansion(zx.q(x27_1), &var_78)
                                        & 1) == 0)
                                    label_b31b18:
                                        UI2SetState(zx.q(x28_4), &data_18314d0, 0xffffffff, 0)
                                        x19_5 = x13_2
                                        var_ac_1 = 0
                                        
                                        if (x13_1 u>= 2)
                                            UI2SetState(zx.q(x28_4), &data_1831470, 0xffffffff, 0)
                                    else
                                        if (var_78 != 0x63)
                                            goto label_b31b38
                                        
                                        x19_5 = x13_2
                                        var_ac_1 = 1
                                        UI2SetState(zx.q(x28_4), &data_18314b8, 0xffffffff, 0)
                                else
                                    if ((ProfileHasAnyPromos() & 1) == 0)
                                        goto label_b31b18
                                    
                                label_b31b38:
                                    x19_5 = x13_2
                                    var_ac_1 = 1
                                    UI2SetState(zx.q(x28_4), &data_18314a0, 0xffffffff, 0)
                                
                                int32_t var_7c = 0xffffffff
                                int32_t x0_27 = ExpIsSelected(zx.q(x27_1), zx.q(x20), &var_7c)
                                int32_t x8_28 = *x19_5
                                int32_t x25_1
                                
                                if (x20 != 5 || x8_28 != 2)
                                    x25_1 = x0_27 ^ 1
                                    
                                    if ((x20 & 0xfffffffd) == 5 && x23_1 s<= arg3 && x8_28 != 0x13
                                            && (x25_1 & 1) == 0)
                                        if (x8_28 != 0x13)
                                            if ((ProfileHasEntitlementForExpansion(zx.q(x8_28), 
                                                    nullptr) & 1) != 0)
                                                UI2SetState(zx.q(x28_4), &data_1831488, 0xffffffff, 
                                                    0)
                                        else if ((ProfileHasAnyPromos() & 1) != 0)
                                            UI2SetState(zx.q(x28_4), &data_1831488, 0xffffffff, 0)
                                else
                                    UI2SetState(zx.q(x28_4), &data_1831488, 0xffffffff, 0)
                                    x25_1 = x0_27 ^ 1
                                
                                *(x14_1 + x21_2 * 0x28 + 0x18)
                                int32_t x26_1
                                
                                if ((x0_27 & 1) != 0)
                                    x26_1 = var_7c
                                else
                                    x26_1 = -1
                                
                                XFormatString("dom_expansion_name_%s")
                                DomExpansionName(XString::operator char const*(), zx.q(x26_1), 
                                    zx.q(*x19_5))
                                XString::~XString()
                                void var_88
                                UI2SetText(zx.q(x28_4), &data_1831608, &var_88, 0xffffffff)
                                
                                if ((x0_27 & 1) == 0)
                                    UI2SetState(zx.q(x28_4), &data_1831458, 0xffffffff, 0)
                                label_b31ce0:
                                    
                                    if (x13_1 u<= 1)
                                        int32_t x19_6 = *x19_5
                                        int64_t i_1 = 0
                                        int32_t x27_2 = 0
                                        void* x26_2 = GetActiveProfile() + 0x6458
                                        
                                        do
                                            uint64_t x0_43 = zx.q(*(x26_2 + i_1))
                                            
                                            if (x0_43.d == 0)
                                                break
                                            
                                            i_1 += 4
                                            
                                            if (DomCardExp(x0_43, &var_78) == x19_6)
                                                x27_2 += 1
                                        while (i_1 != 0xaf0)
                                        
                                        int32_t x19_7 = *x13_2
                                        int64_t i_2 = 0
                                        int32_t x26_3 = 0
                                        void* x28_5 = GetActiveProfile() + 0x5964
                                        
                                        do
                                            uint64_t x0_46 = zx.q(*(x28_5 + i_2))
                                            
                                            if (x0_46.d == 0)
                                                break
                                            
                                            i_2 += 4
                                            
                                            if (DomCardExp(x0_46, &var_78) == x19_7)
                                                x26_3 += 1
                                        while (i_2 != 0xaf0)
                                        
                                        int32_t x0_49 = GetNumSelected(zx.q(*x13_2))
                                        int32_t x19_8
                                        
                                        if (x27_2 == 0)
                                            x27_2 = *((x24_1 << 2) + 0x18336b8)
                                            x19_8 = x25
                                        else
                                            x19_8 = x25
                                            UI2SetState(zx.q(x19_8), &data_1831530, x24_1.d, 0)
                                            *((x24_1 << 2) + 0x18336b8) = x27_2
                                        
                                        XStringFromInt(x27_2)
                                        UI2SetText(zx.q(x19_8), &data_1831578, &var_78, x24_1.d)
                                        XString::~XString()
                                        int32_t x0_54
                                        
                                        if (x26_3 == 0)
                                            x0_54 = *((x24_1 << 2) + 0x1833758)
                                        else
                                            UI2SetState(zx.q(x19_8), &data_1831548, x24_1.d, 0)
                                            x0_54 = x26_3
                                            *((x24_1 << 2) + 0x1833758) = x26_3
                                        
                                        XStringFromInt(x0_54)
                                        UI2SetText(zx.q(x19_8), &data_1831590, &var_78, x24_1.d)
                                        XString::~XString()
                                        
                                        if (x20 == 1)
                                            if (x0_49 != 0)
                                                UI2SetState(zx.q(x25), &data_1831560, x24_1.d, 0)
                                                *((x24_1 << 2) + 0x18337f8) = x0_49
                                                
                                                if (x26_3 == 0)
                                                    UI2SetState(zx.q(x25), &data_18315c0, x24_1.d, 
                                                        0)
                                            
                                            XStringFromInt(*((x24_1 << 2) + 0x18337f8))
                                            UI2SetText(zx.q(x25), &data_18315a8, &var_78, x24_1.d)
                                            XString::~XString()
                                else
                                    UI2SetState(zx.q(x28_4), &data_1831440, 0xffffffff, 0)
                                    
                                    if (x20 != 0)
                                        goto label_b31ce0
                                    
                                    if (*(DomGetExpansionDef(zx.q(x27_1)) + 8) != 0 && (
                                            ProfileHasEntitlementForFirstEdition(zx.q(x27_1)) & 1) != 0)
                                        UI2SetState(zx.q(x28_4), &data_1831518, 0xffffffff, 0)
                                
                                var_8c_1 |= var_ac_1 & x25_1
                                XString::~XString()
                                x10_2 = var_b4_1
                                x28_1 = var_b0_1
                                x11_2 = var_c0_1
                        else
                            x28_4 = *((x24_1 << 6) + 0x1810b48)
                            
                            if (x28_4 != 0)
                                goto label_b3195c
                            
                            x10_2 = var_b4_1
                            x28_1 = var_b0_1
                            x11_2 = var_c0_1
                        x9_3 = var_c4_1
                    
                    x24_1 += 1
                    x12_1 += 1
                    
                    if (x24_1 == x11_2)
                        break
        
        return zx.q(var_8c_1) & 1

label_b31eb4:
pthread_kill(pthread_self(), 6)
int32_t x0_59
int32_t x1_13
x0_59, x1_13 = XNoReturn()
return GetModifierFromButton(x0_59, x1_13) __tailcall
