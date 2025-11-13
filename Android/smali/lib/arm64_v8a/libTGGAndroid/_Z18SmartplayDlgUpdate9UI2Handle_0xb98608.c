// 函数: _Z18SmartplayDlgUpdate9UI2Handle
// 地址: 0xb98608
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, SmartplayClick)
int64_t x20 = sx.q(*(gSmartplayGlobals + 4))
int64_t x22 = x20 * 6
int32_t x25

if (0x1c - x22.d s< 6)
    x25 = 0x1c - x22.d
else
    x25 = 6

if (x20.d != 0)
    UI2SetState(zx.q(x19), &data_1832538, 0xffffffff, 0)

if (x20.d == 0 || x20.d != 4)
    UI2SetState(zx.q(x19), &data_1832550, 0xffffffff, 0)

UI2SetInt(zx.q(x19), &data_18321d8, x25, 0xffffffff)
int64_t result = GetCurrentLanguage()
int32_t var_8c = result.d

if (x22.d s<= 0x1b)
    int64_t x21_1 = 0
    uint64_t fp_1
    
    if (x25 s> 1)
        fp_1 = zx.q(x25)
    else
        fp_1 = 1
    
    do
        int64_t x25_1 = x21_1 + x22
        char* x0_6 = *(x25_1 * 0x158 + &data_1151698)
        char* x0_7
        
        if (x0_6 == 0)
            GetCardName(zx.q(var_8c), zx.q(*(x25_1 * 0x158 + 0x1151614)))
            x0_7 = *(x25_1 * 0x158 + &data_11516a0)
            
            if (x0_7 != 0)
                DoTranslate(x0_7)
            else
            label_b987a0:
                char var_80
                XString::XString(&var_80)
                CardKey(zx.q(*(x25_1 * 0x158 + 0x1151614)))
                char var_88
                XString::XString(&var_88)
                XString::operator+(&var_80)
                DoTranslate(XString::operator char const*())
                XString::~XString()
                XString::~XString()
                XString::~XString()
        else
            DoTranslate(x0_6)
            x0_7 = *(x25_1 * 0x158 + &data_11516a0)
            
            if (x0_7 == 0)
                goto label_b987a0
            
            DoTranslate(x0_7)
        void var_68
        UI2SetText(zx.q(x19), &data_182dbb8, &var_68, x21_1.d)
        void var_70
        UI2SetText(zx.q(x19), &data_182dbd0, &var_70, x21_1.d)
        int32_t i = *(&data_1151610 + x25_1 * 0x158)
        void* x0_18 = GetSmartplays(zx.q(*gSmartplayGlobals))
        int32_t x0_20 = GetSmartplayDefault(zx.q(i))
        uint64_t x8_8 = zx.q(*(x0_18 + 0x200))
        int32_t x26_1 = x0_20
        int32_t x27_1
        
        if (x8_8.d s< 1)
        label_b9886c:
            x27_1 = 1
        else
            void* x9_1 = x0_18 + 4
            
            while (*(x9_1 - 4) != i)
                uint64_t temp0_1 = x8_8
                x8_8 -= 1
                x9_1 += 8
                
                if (temp0_1 == 1)
                    goto label_b9886c
            
            int32_t x8_9 = *x9_1
            x27_1 = x26_1 == x8_9 ? 1 : 0
            x26_1 = x8_9
        
        XString::XString()
        int32_t x28_2 = *(x25_1 * 0x158 + 0x11516a8)
        void var_78
        char* x0_3
        int32_t x27_2
        
        if (x27_1 != 0)
            if (x28_2 == 0)
                goto label_b986e8
            
            x27_2 = x28_2 == x26_1 ? 1 : 0
            
            if (x28_2 == x26_1)
                DoTranslate(*(x25_1 * 0x158 + &data_11516b0))
                XString::operator=(&var_78)
                XString::~XString()
            
            int32_t x8_13 = *(x25_1 * 0x158 + 0x11516c0)
            
            if (x8_13 == 0)
                goto label_b98cc8
            
            if (x8_13 == x26_1)
                DoTranslate(*(x25_1 * 0x158 + &data_11516c8))
                XString::operator=(&var_78)
                XString::~XString()
                x27_2 = 1
            
            int32_t x8_16 = *(x25_1 * 0x158 + 0x11516d8)
            
            if (x8_16 == 0)
                goto label_b98cc8
            
            if (x8_16 == x26_1)
                DoTranslate(*(x25_1 * 0x158 + &data_11516e0))
                XString::operator=(&var_78)
                XString::~XString()
                x27_2 = 1
            
            int32_t x8_19 = *(x25_1 * 0x158 + 0x11516f0)
            
            if (x8_19 == 0)
                goto label_b98cc8
            
            if (x8_19 == x26_1)
                DoTranslate(*(x25_1 * 0x158 + 0x11516f8))
                XString::operator=(&var_78)
                XString::~XString()
                x27_2 = 1
            
            int32_t x8_22 = *(x25_1 * 0x158 + 0x1151708)
            
            if (x8_22 == 0)
                goto label_b98cc8
            
            if (x8_22 == x26_1)
                DoTranslate(*(x25_1 * 0x158 + 0x1151710))
                XString::operator=(&var_78)
                XString::~XString()
                x27_2 = 1
            
            int32_t x8_25 = *(x25_1 * 0x158 + 0x1151720)
            
            if (x8_25 == 0)
                goto label_b98cc8
            
            if (x8_25 == x26_1)
                DoTranslate(*(x25_1 * 0x158 + 0x1151728))
                XString::operator=(&var_78)
                XString::~XString()
                x27_2 = 1
            
            int32_t x8_28 = *(x25_1 * 0x158 + 0x1151738)
            
            if (x8_28 == 0)
                goto label_b98cc8
            
            if (x8_28 == x26_1)
                DoTranslate(*(x25_1 * 0x158 + 0x1151740))
                XString::operator=(&var_78)
                XString::~XString()
                x27_2 = 1
            
            int32_t x8_31 = *(x25_1 * 0x158 + 0x1151750)
            
            if (x8_31 == 0 || x8_31 != x26_1)
                goto label_b98cc8
            
            x0_3 = *(x25_1 * 0x158 + 0x1151758)
            goto label_b986f0
        
        if (x28_2 == 0)
        label_b986e8:
            x0_3 = *(x25_1 * 0x158 + &data_11516b0)
        label_b986f0:
            DoTranslate(x0_3)
            XString::operator=(&var_78)
            XString::~XString()
        else
            UI2SetState(zx.q(x19), &data_182dc18, x21_1.d, 0)
            x27_2 = x28_2 == x26_1 ? 1 : 0
            
            if (x28_2 == x26_1)
                DoTranslate(*(x25_1 * 0x158 + &data_11516b0))
                XString::operator=(&var_78)
                XString::~XString()
            
            int32_t x28_3 = *(x25_1 * 0x158 + 0x11516c0)
            
            if (x28_3 != 0)
                UI2SetState(zx.q(x19), &data_182dc18, x21_1.d, 0)
                
                if (x28_3 == x26_1)
                    DoTranslate(*(x25_1 * 0x158 + &data_11516c8))
                    XString::operator=(&var_78)
                    XString::~XString()
                    x27_2 = 1
                
                int32_t x28_4 = *(x25_1 * 0x158 + 0x11516d8)
                
                if (x28_4 == 0)
                    goto label_b98cc8
                
                UI2SetState(zx.q(x19), &data_182dc18, x21_1.d, 0)
                
                if (x28_4 == x26_1)
                    DoTranslate(*(x25_1 * 0x158 + &data_11516e0))
                    XString::operator=(&var_78)
                    XString::~XString()
                    x27_2 = 1
                
                int32_t x28_5 = *(x25_1 * 0x158 + 0x11516f0)
                
                if (x28_5 == 0)
                    goto label_b98cc8
                
                UI2SetState(zx.q(x19), &data_182dc18, x21_1.d, 0)
                
                if (x28_5 == x26_1)
                    DoTranslate(*(x25_1 * 0x158 + 0x11516f8))
                    XString::operator=(&var_78)
                    XString::~XString()
                    x27_2 = 1
                
                int32_t x28_6 = *(x25_1 * 0x158 + 0x1151708)
                
                if (x28_6 == 0)
                    goto label_b98cc8
                
                UI2SetState(zx.q(x19), &data_182dc18, x21_1.d, 0)
                
                if (x28_6 == x26_1)
                    DoTranslate(*(x25_1 * 0x158 + 0x1151710))
                    XString::operator=(&var_78)
                    XString::~XString()
                    x27_2 = 1
                
                int32_t x28_7 = *(x25_1 * 0x158 + 0x1151720)
                
                if (x28_7 == 0)
                    goto label_b98cc8
                
                UI2SetState(zx.q(x19), &data_182dc18, x21_1.d, 0)
                
                if (x28_7 == x26_1)
                    DoTranslate(*(x25_1 * 0x158 + 0x1151728))
                    XString::operator=(&var_78)
                    XString::~XString()
                    x27_2 = 1
                
                int32_t x28_8 = *(x25_1 * 0x158 + 0x1151738)
                
                if (x28_8 == 0)
                    goto label_b98cc8
                
                UI2SetState(zx.q(x19), &data_182dc18, x21_1.d, 0)
                
                if (x28_8 == x26_1)
                    DoTranslate(*(x25_1 * 0x158 + 0x1151740))
                    XString::operator=(&var_78)
                    XString::~XString()
                    x27_2 = 1
                
                int32_t x28_9 = *(x25_1 * 0x158 + 0x1151750)
                
                if (x28_9 == 0)
                    goto label_b98cc8
                
                UI2SetState(zx.q(x19), &data_182dc18, x21_1.d, 0)
                
                if (x28_9 != x26_1)
                    goto label_b98cc8
                
                x0_3 = *(x25_1 * 0x158 + 0x1151758)
                goto label_b986f0
            
        label_b98cc8:
            
            if ((x27_2 & 1) == 0)
                goto label_b986e8
        
        UI2SetText(zx.q(x19), &data_182dbe8, &var_78, x21_1.d)
        XString::~XString()
        XString::~XString()
        result = XString::~XString()
        x21_1 += 1
    while (x21_1 != fp_1)

return result
