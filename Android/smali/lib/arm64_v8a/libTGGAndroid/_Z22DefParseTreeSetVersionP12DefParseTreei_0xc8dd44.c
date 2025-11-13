// 函数: _Z22DefParseTreeSetVersionP12DefParseTreei
// 地址: 0xc8dd44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x21_1

if (arg1 != 0)
    int64_t* x8_1 = *(arg1 + 8)
    int32_t i
    
    do
        if (x8_1 == 0)
            goto label_c8dd90
        
        x21_1 = *x8_1
        int64_t* x23_1 = x8_1[1]
        i = strcasecmp(XString::operator char const*(), "_version")
        x8_1 = x23_1
    while (i != 0)

if (arg1 == 0 || x21_1 == 0)
label_c8dd90:
    char* x0_2 = DefParseItemAlloc()
    x21_1 = x0_2
    XString::operator=(x0_2)
    char** x0_3 = XPooledCalloc(0x18)
    *x0_3 = x21_1
    x0_3[1] = 0
    x0_3[2] = *(arg1 + 0x10)
    void* x8_3 = *(arg1 + 0x10)
    void* __offset(DefParseTree, 0x8) x8_4
    
    if (x8_3 == 0)
        x8_4 = arg1 + 8
    else
        x8_4 = x8_3 + 8
    
    *x8_4 = x0_3
    int32_t x8_5 = *(arg1 + 0x18)
    *(arg1 + 0x10) = x0_3
    *(arg1 + 0x18) = x8_5 + 1

XStringFromInt(arg2)
XString::operator=(&x21_1[8])
return XString::~XString()
