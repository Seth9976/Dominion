// 函数: _Z17DeclareSmartplays9UI2HandleiPPK12SmartPlayDef
// 地址: 0xb02d84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1.d
UI2SetState(arg1, &data_182db70, 0xffffffff, 0)
UI2SetInt(zx.q(x20), &data_182db88, arg2, 0xffffffff)
int64_t result = GetCurrentLanguage()
int32_t var_294 = result.d

if (arg2 s>= 1)
    int64_t i = 0
    
    do
        if (*((i << 6) + 0x1833510) == "tbl_options" && *((i << 6) + 0x1833508) == x20
                && i == zx.q(*((i << 6) + 0x1833518)) && *((i << 6) + 0x1833520) == 0)
            result = UI2Exists(zx.q(*((i << 6) + 0x1833540)))
        
        char* x0_3
        void* x8_9
        
        if (*((i << 6) + 0x1833510) == "tbl_options" && *((i << 6) + 0x1833508) == x20
                && i == zx.q(*((i << 6) + 0x1833518)) && *((i << 6) + 0x1833520) == 0
                && (result.d & 1) != 0)
            if (*((i << 6) + 0x1833540) == 0)
                break
            
            x8_9 = arg3[i]
            x0_3 = *(x8_9 + 0x88)
            
            if (x0_3 == 0)
                goto label_b02f28
            
            goto label_b02ec4
        
        result = UI2GetHandle(zx.q(x20), "tbl_options", i.d)
        *((i << 6) + 0x1833540) = result.d
        
        if (result.d == 0)
            break
        
        *((i << 6) + 0x1833510) = "tbl_options"
        *((i << 6) + 0x1833508) = x20
        *((i << 6) + 0x1833518) = i.d
        *((i << 6) + 0x1833520) = 0
        x8_9 = arg3[i]
        x0_3 = *(x8_9 + 0x88)
        char var_280
        char* x0_4
        
        if (x0_3 != 0)
        label_b02ec4:
            DoTranslate(x0_3)
            x0_4 = *(arg3[i] + 0x90)
            
            if (x0_4 == 0)
            label_b02f44:
                XString::XString(&var_280)
                CardKey(zx.q(*(arg3[i] + 4)))
                char var_288
                XString::XString(&var_288)
                XString::operator+(&var_280)
                DoTranslate(XString::operator char const*())
                XString::~XString()
                XString::~XString()
                XString::~XString()
            else
                DoTranslate(x0_4)
        else
        label_b02f28:
            GetCardName(zx.q(var_294), zx.q(*(x8_9 + 4)))
            x0_4 = *(arg3[i] + 0x90)
            
            if (x0_4 == 0)
                goto label_b02f44
            
            DoTranslate(x0_4)
        void var_270
        UI2SetText(zx.q(x20), &data_182dbb8, &var_270, 0xffffffff)
        void var_278
        UI2SetText(zx.q(x20), &data_182dbd0, &var_278, 0xffffffff)
        int32_t j = *arg3[i]
        int32_t x0_15 = LocalWho()
        void* x0_18 = GameGetPlayer(ActiveGame() + 8, zx.q(x0_15))
        int32_t x0_20 = GetSmartplayDefault(zx.q(j))
        uint64_t x8_15 = zx.q(*(x0_18 + 0x228))
        int32_t fp_1 = x0_20
        int32_t x21_4
        
        if (x8_15.d s< 1)
        label_b03020:
            x21_4 = 1
        else
            void* x9_3 = x0_18 + 0x2c
            
            while (*(x9_3 - 4) != j)
                uint64_t temp0_1 = x8_15
                x8_15 -= 1
                x9_3 += 8
                
                if (temp0_1 == 1)
                    goto label_b03020
            
            int32_t x8_16 = *x9_3
            x21_4 = fp_1 == x8_16 ? 1 : 0
            fp_1 = x8_16
        
        XString::XString()
        int64_t j_1 = 0
        int32_t x27_1 = 0
        void var_268
        
        if (x21_4 != 0)
            do
                int32_t* x8_17 = arg3[i]
                
                if (*(x8_17 + j_1 * 0x18 + 0x98) == 0)
                    break
                
                int32_t k = *x8_17
                void* x0_21 = GetActiveProfile()
                
                if (*(x0_21 + 0x5960) == 0)
                    DefaultSmartplays()
                    CopySmartplays(x0_21 + 0x5760, &var_268)
                
                int32_t x0_24 = GetSmartplayDefault(zx.q(k))
                uint64_t x8_19 = zx.q(*(x0_21 + 0x5960))
                
                if (x8_19.d s< 1)
                label_b030dc:
                    
                    if (fp_1 == x0_24)
                        UI2SetState(zx.q(x20), &data_182dc30, i.d, 0)
                else
                    void* x9_6 = x0_21 + 0x5764
                    
                    while (*(x9_6 - 4) != k)
                        uint64_t temp1_1 = x8_19
                        x8_19 -= 1
                        x9_6 += 8
                        
                        if (temp1_1 == 1)
                            goto label_b030dc
                    
                    if (fp_1 == *x9_6)
                        UI2SetState(zx.q(x20), &data_182dc30, i.d, 0)
                
                int64_t x8_20 = arg3[i]
                
                if (*(x8_20 + j_1 * 0x18 + 0x98) == fp_1)
                    DoTranslate(*(x8_20 + j_1 * 0x18 + 0xa0))
                    XString::operator=(&var_280)
                    XString::~XString()
                    x27_1 = 1
                
                j_1 += 1
            while (j_1 != 8)
        else
            while (*(arg3[i] + j_1 * 0x18 + 0x98) != 0)
                UI2SetState(zx.q(x20), &data_182dc18, i.d, 0)
                int32_t j_2 = *arg3[i]
                void* x0_30 = GetActiveProfile()
                
                if (*(x0_30 + 0x5960) == 0)
                    DefaultSmartplays()
                    CopySmartplays(x0_30 + 0x5760, &var_268)
                
                int32_t x0_33 = GetSmartplayDefault(zx.q(j_2))
                uint64_t x8_27 = zx.q(*(x0_30 + 0x5960))
                
                if (x8_27.d s< 1)
                label_b031f8:
                    
                    if (fp_1 == x0_33)
                        UI2SetState(zx.q(x20), &data_182dc30, i.d, 0)
                else
                    void* x9_9 = x0_30 + 0x5764
                    
                    while (*(x9_9 - 4) != j_2)
                        uint64_t temp2_1 = x8_27
                        x8_27 -= 1
                        x9_9 += 8
                        
                        if (temp2_1 == 1)
                            goto label_b031f8
                    
                    if (fp_1 == *x9_9)
                        UI2SetState(zx.q(x20), &data_182dc30, i.d, 0)
                
                int64_t x8_28 = arg3[i]
                
                if (*(x8_28 + j_1 * 0x18 + 0x98) == fp_1)
                    DoTranslate(*(x8_28 + j_1 * 0x18 + 0xa0))
                    XString::operator=(&var_280)
                    XString::~XString()
                    x27_1 = 1
                
                j_1 += 1
                
                if (j_1 == 8)
                    break
        
        if ((x27_1 & 1) == 0)
            DoTranslate(*(arg3[i] + 0xa0))
            XString::operator=(&var_280)
            XString::~XString()
        
        UI2SetText(zx.q(x20), &data_182dbe8, &var_280, 0xffffffff)
        XString::~XString()
        XString::~XString()
        result = XString::~XString()
        i += 1
    while (i != zx.q(arg2))

return result
