// 函数: _Z16DefParseReadEnumPjjlP12DefParseItem
// 地址: 0xc8b48c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg2 & 0x20) != 0)
    uint32_t x0_6 = AttribTagFindByTagName(arg3, XString::operator char const*())
    
    if (x0_6 == 0xffffffff)
        return 0
    
    *arg1 = x0_6
    return 1

if (arg3 != 0)
    uint32_t* result = SymbolMapLookupValue(arg3, XString::operator char const*())
    
    if (result == 0)
        return result
    
    *arg1 = *result

return zx.q(arg3 != 0 ? 1 : 0)
