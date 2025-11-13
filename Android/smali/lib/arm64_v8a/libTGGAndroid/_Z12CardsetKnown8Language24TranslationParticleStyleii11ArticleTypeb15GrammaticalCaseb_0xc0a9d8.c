// 函数: _Z12CardsetKnown8Language24TranslationParticleStyleii11ArticleTypeb15GrammaticalCaseb
// 地址: 0xc0a9d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1
int32_t x22 = arg5
int64_t result
int64_t x5
result, x5 = XString::XString()
XString* entry_x8
XString var_68

if (arg4 == 2)
    bool x23_1 = arg6 & 1
    int64_t x24_1 = zx.q(arg3) << 0x20 s>> 0x1d
    int32_t* x8_2 = *(gLog + 0x28) + x24_1
    int64_t x5_1 = CardnameKnown(zx.q(x21), zx.q(*x8_2), x8_2[1], zx.q(x22), x23_1, x5)
    void* x8_4 = x24_1 + *(gLog + 0x28)
    CardnameKnown(zx.q(x21), zx.q(*(x8_4 + 8)), *(x8_4 + 0xc), zx.q(x22), x23_1, x5_1)
    XString var_70
    LocStringReplace(zx.q(x21), 3, "[one]", &var_68, "[another]", &var_70)
    XString::operator=(entry_x8)
    XString::~XString()
    XString::~XString()
    result = XString::~XString()
else if (arg4 == 1)
    void* x8 = *(gLog + 0x28)
    
    if (*(x8 + (sx.q(arg3) << 3) + 4) != 1)
        goto label_c0ab58
    
    CardnameKnown(zx.q(x21), zx.q(*(x8 + (sx.q(arg3) << 3))), 1, zx.q(x22), arg6 & 1, x5)
    XString::operator=(entry_x8)
    result = XString::~XString()
else if (arg4 s>= 1)
label_c0ab58:
    
    if ((arg8.d & 1) == 0)
        int32_t* x8_11 = *(gLog + 0x28) + (sx.q(arg3) << 3)
        CardnameKnown(zx.q(x21), zx.q(*x8_11), x8_11[1], zx.q(x22), arg6 & 1, x5)
        XString::operator=(entry_x8)
        int64_t x5_5
        result, x5_5 = XString::~XString()
        
        if (arg4 != 1)
            int64_t fp_1 = zx.q(arg4 - 1) - 1
            int64_t x19_2 = sx.q(arg3) << 3
            int64_t i_2 = zx.q(arg4) - 1
            int64_t i
            
            do
                void* x8_14 = *(gLog + 0x28) + x19_2
                CardnameKnown(zx.q(x21), zx.q(*(x8_14 + 8)), *(x8_14 + 0xc), zx.q(x22), arg6 & 1, 
                    x5_5)
                uint64_t x0_14
                int64_t x1_7
                char* x2_6
                XString* x3_8
                char* x4_6
                
                if (fp_1 != 0)
                    x1_7 = 4
                    x0_14 = zx.q(x21)
                    x2_6 = "[first]"
                    x3_8 = entry_x8
                    x4_6 = "[rest]"
                else
                    x1_7 = 5
                    x0_14 = zx.q(x21)
                    x2_6 = "[list]"
                    x3_8 = entry_x8
                    x4_6 = "[last]"
                
                LocStringReplace(x0_14, x1_7, x2_6, x3_8, x4_6, &var_68)
                XString::operator=(entry_x8)
                XString::~XString()
                result, x5_5 = XString::~XString()
                x19_2 += 8
                i = i_2
                i_2 -= 1
                fp_1 -= 1
            while (i != 1)
    else
        int32_t* x8_6 = *(gLog + 0x28) + (sx.q(arg3) << 3)
        CardnameKnown(zx.q(x21), zx.q(*x8_6), x8_6[1], zx.q(x22), arg6 & 1, x5)
        XString::operator=(entry_x8)
        int64_t x5_3
        result, x5_3 = XString::~XString()
        
        if (arg4 != 1)
            int64_t x19_1 = sx.q(arg3) << 3
            int64_t i_3 = zx.q(arg4) - 1
            int64_t i_1
            
            do
                void* x8_9 = *(gLog + 0x28) + x19_1
                CardnameKnown(zx.q(x21), zx.q(*(x8_9 + 8)), *(x8_9 + 0xc), zx.q(x22), arg6 & 1, 
                    x5_3)
                LocStringReplace(zx.q(x21), 4, "[first]", entry_x8, "[rest]", &var_68)
                XString::operator=(entry_x8)
                XString::~XString()
                result, x5_3 = XString::~XString()
                i_1 = i_3
                i_3 -= 1
                x19_1 += 8
            while (i_1 != 1)

if (x21 != 0x11)
    return result

return TranslationAddParticle(0x11, entry_x8, zx.q(arg2))
