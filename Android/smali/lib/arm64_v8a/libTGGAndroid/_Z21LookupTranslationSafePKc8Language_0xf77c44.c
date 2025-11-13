// 函数: _Z21LookupTranslationSafePKc8Language
// 地址: 0xf77c44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gTranslations != 0)
    int32_t x20_1 = arg2
    ToKey(arg1, nullptr)
    char var_68
    operator==(&var_68, arg1)
    XString::~XString()
    uint64_t x21_1 = *gTranslations
    
    if (x20_1 == 0)
        x20_1 = *(x21_1 + 0x2a0)
    
    XString::XString(&var_68)
    int32_t x0_3 = XHashKey(&var_68)
    int64_t x24_1 = sx.q(x20_1)
    int64_t* x8_1 = x21_1 + (x24_1 << 4)
    void* x20_2 = *(*x8_1 + ((zx.q(x8_1[1].d) & zx.q(x0_3)) << 3))
    void* result
    
    if (x20_2 == 0)
    label_f77ce8:
        XString::~XString()
    else
        while ((XString::operator!=(&var_68) & 1) != 0)
            x20_2 = *(x20_2 + 0x30)
            
            if (x20_2 == 0)
                goto label_f77ce8
        
        result = x20_2 + 8
        XString::~XString()
        
        if (result != 0)
            return result
    
    if (x24_1.d != 1)
        uint64_t x20_3 = *gTranslations
        XString::XString(&var_68)
        int32_t x0_9 = XHashKey(&var_68)
        void* x20_4 = *(*(x20_3 + 0x10) + ((zx.q(*(x20_3 + 0x18)) & zx.q(x0_9)) << 3))
        
        if (x20_4 == 0)
        label_f77d7c:
            result = nullptr
            XString::~XString()
        else
            while (true)
                if ((XString::operator!=(&var_68) & 1) == 0)
                    result = x20_4 + 8
                    XString::~XString()
                    
                    if (result != 0)
                        XString::XString(&var_68)
                        void var_60
                        XString::XString(&var_60)
                        void var_58
                        XString::XString(&var_58)
                        uint64_t x22_1 = *gTranslations
                        int64_t var_49_1 = *(result + 0x1f)
                        int64_t var_50_1 = *(result + 0x18)
                        var_49_1:7.b = 1
                        char var_38
                        XString::XString(&var_38)
                        XMap<XString, Translation>::SetAt(x22_1 + (x24_1 << 4), &var_38)
                        XString::~XString()
                        uint64_t x22_2 = *gTranslations
                        XString::XString(&var_38)
                        int32_t x0_19 = XHashKey(&var_38)
                        int64_t* x8_6 = x22_2 + (x24_1 << 4)
                        void* x19_2 = *(*x8_6 + ((zx.q(x8_6[1].d) & zx.q(x0_19)) << 3))
                        
                        if (x19_2 == 0)
                        label_f77e64:
                            result = nullptr
                        else
                            while (true)
                                if ((XString::operator!=(&var_38) & 1) == 0)
                                    result = x19_2 + 8
                                    break
                                
                                x19_2 = *(x19_2 + 0x30)
                                
                                if (x19_2 == 0)
                                    goto label_f77e64
                        
                        XString::~XString()
                        XString::~XString()
                        XString::~XString()
                        XString::~XString()
                    
                    break
                
                x20_4 = *(x20_4 + 0x30)
                
                if (x20_4 == 0)
                    goto label_f77d7c
        
        return result

return nullptr
