// 函数: _Z20SymbolMapLookupValuePK9SymbolMapPKc
// 地址: 0xfd60ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SymbolMap const* result = arg1
char* s1 = *(arg1 + 8)

while (s1 != 0)
    if (strcasecmp(s1, arg2) == 0)
        return result
    
    s1 = *(result + 0x18)
    result += 0x10

return nullptr
