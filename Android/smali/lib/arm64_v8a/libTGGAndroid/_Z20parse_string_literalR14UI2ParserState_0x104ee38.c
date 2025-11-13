// 函数: _Z20parse_string_literalR14UI2ParserState
// 地址: 0x104ee38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_28
XString::XString(&var_28)
char* x21 = *(arg1 + 8)

while (true)
    uint32_t x8 = zx.d(*x21)
    
    if (x8 s<= 0x5b)
        int32_t* entry_x8
        
        if (x8 == 0)
        label_104eedc:
            void* x8_1 = *arg1
            int64_t x9_1 = *(arg1 + 8)
            int64_t x10_1 = sx.q(*(x8_1 + 0x428))
            *(x8_1 + 0x428) = x10_1.d + 1
            *(x8_1 + x10_1 * 0x38 + 0xa8) = 1
            *(x8_1 + x10_1 * 0x38 + 0xb0) = x9_1
            *(x8_1 + x10_1 * 0x38 + 0xb8) = x21 - x9_1
            *(arg1 + 8) = x21
            XString::XString()
            *entry_x8 = 3
            *(entry_x8 + 8) = x8_1 + x10_1 * 0x38 + 0xa8
            return XString::~XString()
        
        if (x8 == 0x5b)
            XFormatString("invalid char %c")
            XString::operator char const*()
            XString::XString()
        label_104ef70:
            *entry_x8 = 1
            XString::~XString()
            return XString::~XString()
        
        XString::AppendLength(&var_28, x21.d)
    else if (x8 != 0x5c)
        if (x8 == 0x5d)
            goto label_104eedc
        
        XString::AppendLength(&var_28, x21.d)
    else
        uint32_t x1_2 = zx.d(x21[1])
        
        if (x1_2 != 0x5d && x1_2 != 0x5b)
            XFormatString("unknown escape char %c")
            XString::operator char const*()
            XString::XString()
            goto label_104ef70
        
        XString::AppendLength(&var_28, x21.d)
        x21 = &x21[1]
    
    x21 = &x21[1]
