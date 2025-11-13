// 函数: _Z25GetPlayerInitialUncoloredRK8GameSavei
// 地址: 0xc09b88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_70
PlayerGetNameAvatar(arg1 + 8, GameGetPlayer(arg1 + 8, arg2), &var_70)
int32_t x0_4 = strlen(XString::operator char const*())
XString* entry_x8

if (XString::Length() == 0)
    XString::XString(entry_x8)
else
    XString::XString()
    XString::XString()
    XString var_78
    ToFirstLastDigitNames(XString::operator char const*(), &var_70, &var_78)
    char var_80
    XString::XString(&var_80)
    int32_t x8 = *(arg1 + 0x11b4)
    
    if (x8 s< 1)
    label_c09d14:
        XString::operator=(&var_80)
    else
        int64_t x24_1 = 0
        void* __offset(GameSave, 0x70) x25_1 = arg1 + 0x70
        
        while (true)
            if (*x25_1 != arg2)
                uint32_t x9_2 = zx.d(*XString::operator char const*())
                x8 = *(arg1 + 0x11b4)
                
                if (x9_2 == zx.d(*(x25_1 - 0x1c)))
                    break
            
            x24_1 += 1
            x25_1 += 0x22c
            
            if (x24_1 s>= sx.q(x8))
                goto label_c09d14
        
        if (x8 s< 1)
        label_c09d80:
            XString::operator=(&var_80)
        else
            int64_t x25_2 = 0
            void* __offset(GameSave, 0x70) x26_1 = arg1 + 0x70
            
            while (true)
                uint64_t x1_3 = zx.q(*x26_1)
                
                if (x1_3.d != arg2)
                    char var_90
                    PlayerGetNameAvatar(arg1 + 8, GameGetPlayer(arg1 + 8, x1_3), &var_90)
                    XString::XString()
                    XString::XString()
                    char var_98
                    ToFirstLastDigitNames(XString::operator char const*(), &var_90, &var_98)
                    int32_t x0_14 = XString::operator==(&var_98)
                    XString::~XString()
                    XString::~XString()
                    XString::~XString()
                    
                    if ((x0_14 & 1) != 0)
                        int32_t i_2
                        
                        if (x0_4 s< 1)
                            i_2 = 1
                        else
                            i_2 = 1
                            int32_t x27_1 = 1
                            
                            while (true)
                                if (*(arg1 + 0x11b4) s>= 1)
                                    int64_t i = 0
                                    
                                    do
                                        PlayerGetNameAvatar(arg1 + 8, 
                                            GameGetPlayer(arg1 + 8, 
                                                zx.q(*(arg1 + i * 0x22c + 0x70))), 
                                            &var_90)
                                        char* x0_22 = XString::operator char const*()
                                        int32_t j_2 = i_2
                                        char* fp_1 = x0_22
                                        int32_t j
                                        
                                        do
                                            uint32_t x9_3 = zx.d(*fp_1)
                                            
                                            if (x9_3 == 0)
                                                break
                                            
                                            if ((x9_3 & 0x80) != 0)
                                                if ((x9_3 & 0xe0) == 0xc0)
                                                    fp_1 = &fp_1[1]
                                                else if ((x9_3 & 0xf0) == 0xe0)
                                                    fp_1 = &fp_1[2]
                                                else if ((x9_3 & 0xf8) == 0xf0)
                                                    fp_1 = &fp_1[3]
                                            
                                            j = j_2
                                            j_2 -= 1
                                            fp_1 = &fp_1[1]
                                        while (j != 1)
                                        XString::XString()
                                        XString::AppendUTF8_size(&var_90, x0_22.d)
                                        char* x0_24 = XString::operator char const*()
                                        int32_t j_3 = i_2
                                        char* fp_2 = x0_24
                                        int32_t j_1
                                        
                                        do
                                            uint32_t x9_5 = zx.d(*fp_2)
                                            
                                            if (x9_5 == 0)
                                                break
                                            
                                            if ((x9_5 & 0x80) != 0)
                                                if ((x9_5 & 0xe0) == 0xc0)
                                                    fp_2 = &fp_2[1]
                                                else if ((x9_5 & 0xf0) == 0xe0)
                                                    fp_2 = &fp_2[2]
                                                else if ((x9_5 & 0xf8) == 0xf0)
                                                    fp_2 = &fp_2[3]
                                            
                                            j_1 = j_3
                                            j_3 -= 1
                                            fp_2 = &fp_2[1]
                                        while (j_1 != 1)
                                        XString::XString()
                                        XString::AppendUTF8_size(&var_98, x0_24.d)
                                        int32_t x0_27 = XString::operator==(&var_98)
                                        XString::~XString()
                                        XString::~XString()
                                        XString::~XString()
                                        
                                        if ((x0_27 & 1) != 0)
                                            goto label_c09dac
                                        
                                        i += 1
                                    while (i s< sx.q(*(arg1 + 0x11b4)))
                                
                                if ((x27_1 & 1) != 0)
                                    break
                                
                            label_c09dac:
                                x27_1 = 0
                                bool cond:2_1 = i_2 == x0_4
                                i_2 += 1
                                
                                if (cond:2_1)
                                    i_2 = x0_4 + 1
                                    break
                        
                        char* x0_28 = XString::operator char const*()
                        char* x21_1 = x0_28
                        int32_t i_1
                        
                        do
                            uint32_t x8_4 = zx.d(*x21_1)
                            
                            if (x8_4 == 0)
                                break
                            
                            if ((x8_4 & 0x80) != 0)
                                if ((x8_4 & 0xe0) == 0xc0)
                                    x21_1 = &x21_1[1]
                                else if ((x8_4 & 0xf0) == 0xe0)
                                    x21_1 = &x21_1[2]
                                else if ((x8_4 & 0xf8) == 0xf0)
                                    x21_1 = &x21_1[3]
                            
                            i_1 = i_2
                            i_2 -= 1
                            x21_1 = &x21_1[1]
                        while (i_1 != 1)
                        XString::XString()
                        char var_88
                        XString::AppendUTF8_size(&var_88, x0_28.d)
                        XString::operator=(&var_80)
                        XString::~XString()
                        break
                    
                    x8 = *(arg1 + 0x11b4)
                
                x25_2 += 1
                x26_1 += 0x22c
                
                if (x25_2 s>= sx.q(x8))
                    goto label_c09d80
    
    XString::XString(entry_x8)
    XString::~XString()
    XString::~XString()
    XString::~XString()
return XString::~XString()
