// 函数: _Z24UI2Parse_StyleExpressionR14UI2ParserState
// 地址: 0x1050304
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Parse_Identifier(arg1)
int32_t var_48
int32_t* entry_x8

if (var_48 - 2 u>= 3)
    *entry_x8 = var_48.o
    XString::XString(&entry_x8[4])
else
    void* var_40
    char* s1 = *(var_40 + 8)
    size_t n = *(var_40 + 0x10)
    int32_t x8_3
    
    if (strncasecmp(s1, "linear", n) == 0)
        x8_3 = 1
    else if (strncasecmp(s1, "wave", n) == 0)
        x8_3 = 0x18
    else
        x8_3 = 1
    
    void* x9_1 = *arg1
    int64_t x10_1 = sx.q(*(x9_1 + 0x428))
    *(x9_1 + 0x428) = x10_1.d + 1
    *(x9_1 + x10_1 * 0x38 + 0xa8) = 0xc
    *(x9_1 + x10_1 * 0x38 + 0xb0) = x8_3
    XString::XString()
    *entry_x8 = 3
    *(entry_x8 + 8) = x9_1 + x10_1 * 0x38 + 0xa8
return XString::~XString()
