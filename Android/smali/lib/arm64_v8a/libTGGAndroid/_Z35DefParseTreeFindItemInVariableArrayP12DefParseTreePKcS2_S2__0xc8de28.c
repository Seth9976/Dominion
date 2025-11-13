// 函数: _Z35DefParseTreeFindItemInVariableArrayP12DefParseTreePKcS2_S2_
// 地址: 0xc8de28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i = *(arg1 + 8)

while (i != 0)
    void* x22_1 = *i
    i = i[1]
    
    if (strcasecmp(XString::operator char const*(), arg2) == 0)
        void* x8_1 = *(x22_1 + 0x18)
        
        if (x8_1 != 0)
            int64_t* j = *(x8_1 + 8)
            
            while (j != 0)
                int64_t x23_1 = *j
                j = j[1]
                
                if (strcasecmp(XString::operator char const*(), arg3) == 0)
                    if (x23_1 != 0 && strcasecmp(XString::operator char const*(), arg4) == 0)
                        return *(x22_1 + 0x18)
                    
                    break

return 0
