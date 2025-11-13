// 函数: _Z13ApplyLabelRecP12DefParseTreePKciS2_
// 地址: 0xba471c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

XString** i = *(arg1 + 8)

while (i != 0)
    XString* x25_1 = *i
    i = i[1]
    int32_t x0_2 = operator==(x25_1, "states")
    DefParseTree* x8_1 = *(x25_1 + 0x18)
    
    if ((x0_2 & 1) == 0)
        ApplyLabelRec(x8_1, arg2, arg3, arg4)
    else if (DefParseTreeFindItem(x8_1, "stateName") != 0
            && strncasecmp(arg2, XString::operator char const*(), sx.q(arg3)).d == 0)
        XString::operator=(x25_1 + 0x10)
