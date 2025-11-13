// 函数: _Z14CardTypeString11DomCardTypeb
// 地址: 0xb0ccc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = 0
int64_t x8 = 1
int64_t var_160
uint64_t i

do
    if (x8 != 0x200000000000 && (x8 & arg1) != 0)
        (&var_160)[sx.q(x21)] = x8
        x21 += 1
    
    i = x8 u>> 0x2e
    x8 <<= 1
while (i == 0)
XString* entry_x8

if (x21 == 0)
    return XString::XString(entry_x8)

XString::XString()

if (x21 s>= 1)
    CardTypeIndivString(var_160, (not.d(arg2.d)).b & 1)
    void var_168
    XString::operator=(&var_168)
    XString::~XString()
    
    if (x21 != 1)
        int64_t x26_1 = zx.q(x21 - 1) - 1
        void var_158
        void* x27_1 = &var_158
        int64_t i_2 = zx.q(x21) - 1
        int64_t i_1
        
        do
            CardTypeIndivString(*x27_1, false)
            char* x0_5
            char* x1_2
            char* x3_1
            
            if (x26_1 != 0)
                x0_5 = "dom_prompt_cardtype_separator"
                x1_2 = "[first]"
                x3_1 = "[rest]"
            else
                x0_5 = "dom_prompt_cardtype_final_separator"
                x1_2 = "[list]"
                x3_1 = "[last]"
            
            XString var_170
            DoTranslateWithReplacements(x0_5, x1_2, &var_168, x3_1, &var_170)
            XString::operator=(&var_168)
            XString::~XString()
            XString::~XString()
            x26_1 -= 1
            i_1 = i_2
            i_2 -= 1
            x27_1 += 8
        while (i_1 != 1)

XString::XString(entry_x8)
return XString::~XString()
