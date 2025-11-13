// 函数: _ZNK9UITextBox13GetCharacterXEi
// 地址: 0x105bcf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_30 = v10
void* x19 = arg1
XString::operator char const*()
XString::XString()
char var_38
XString::AppendLength(&var_38, XString::operator char const*())
char* x0_4 = XString::operator char const*()
XAsset* x0_5 = *(x19 + 0x48)
float v0_1

if (x0_5 == 0)
    v0_1 = FontStringWidth(*(x19 + 0x40), x0_4, *(x19 + 0x5c), *(x19 + 0x60))
else
    v0_1 = TTFontStringWidth(x0_5, x0_4, *(x19 + 0x50), *(x19 + 0x5c), *(x19 + 0x60))

int32_t x8 = *(x19 + 0x7c)

if (v0_1 * *(x19 + 0x58) f<= *(x19 + 0x1c))
    if (x8 u<= 8)
        int32_t x8_2 = 1 << x8
        int128_t v8
        int64_t v9
        
        if ((x8_2 & 0x92) != 0)
        label_105bde4:
            v8.d = *(x19 + 0x14)
            v9.d = *(x19 + 0x2c)
            v10.d = *(x19 + 0x24)
            char* x0_10 = XString::operator char const*()
            XAsset* x0_11 = *(x19 + 0x48)
            float v0_5
            
            if (x0_11 == 0)
                v0_5 = FontStringWidth(*(x19 + 0x40), x0_10, *(x19 + 0x5c), *(x19 + 0x60))
            else
                v0_5 = TTFontStringWidth(x0_11, x0_10, *(x19 + 0x50), *(x19 + 0x5c), *(x19 + 0x60))
            
            v8.d = v8.d f+ v9.d f+ v10.d + v0_5 * *(x19 + 0x58)
            return XString::~XString()
        
        if ((x8_2 & 0x124) != 0)
            char* x0_8 = XString::operator char const*()
            XAsset* x0_9 = *(x19 + 0x48)
            int128_t v0_3
            
            if (x0_9 == 0)
                v0_3 = FontStringWidth(*(x19 + 0x40), x0_8, *(x19 + 0x5c), *(x19 + 0x60))
            else
                v0_3 = TTFontStringWidth(x0_9, x0_8, *(x19 + 0x50), *(x19 + 0x5c), *(x19 + 0x60))
            
            v9.d = *(x19 + 0x58)
            char* x0_14 = XString::operator char const*()
            XAsset* x0_15 = *(x19 + 0x48)
            float v0_7
            
            if (x0_15 == 0)
                v0_7 = FontStringWidth(*(x19 + 0x40), x0_14, *(x19 + 0x5c), *(x19 + 0x60))
            else
                v0_7 = TTFontStringWidth(x0_15, x0_14, *(x19 + 0x50), *(x19 + 0x5c), *(x19 + 0x60))
            
            float v5_1 = fconvert.s(0.5f)
            v8.d = v0_7 * *(x19 + 0x58) + *(x19 + 0x24) + *(x19 + 0x2c) + *(x19 + 0x14)
                + *(x19 + 0x1c) * v5_1 - v0_3.d f* v9.d * v5_1
            return XString::~XString()
else if (x8 u<= 8 && (1 << x8 & 0x1b6) != 0)
    goto label_105bde4

pthread_kill(pthread_self(), 6)
int64_t* x0_19 = XNoReturn()
XString::~XString()
sub_1101e04(x0_19)
noreturn
