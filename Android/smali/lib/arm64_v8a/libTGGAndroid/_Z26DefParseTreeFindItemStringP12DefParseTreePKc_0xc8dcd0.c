// 函数: _Z26DefParseTreeFindItemStringP12DefParseTreePKc
// 地址: 0xc8dcd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString* entry_x8

if (arg1 != 0)
    int64_t* i = *(arg1 + 8)
    
    while (i != 0)
        int64_t x21_1 = *i
        i = i[1]
        
        if (strcasecmp(XString::operator char const*(), arg2) == 0)
            if (x21_1 != 0)
                return XString::XString(entry_x8) __tailcall
            
            break

return XString::XString(entry_x8) __tailcall
