// 函数: _Z32DefParseTreeRemoveItemNotDeletedP12DefParseTreePKc
// 地址: 0xc8da3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 != 0)
    void* i = *(arg1 + 8)
    
    while (i != 0)
        void* i_1 = i
        int64_t result = *i_1
        i = *(i + 8)
        
        if (strcasecmp(XString::operator char const*(), arg2) == 0)
            void* x8_1 = *(i_1 + 0x10)
            void* __offset(DefParseTree, 0x8) x8_2
            
            if (x8_1 == 0)
                x8_2 = arg1 + 8
            else
                x8_2 = x8_1 + 8
            
            *x8_2 = *(i_1 + 8)
            void* x8_3 = *(i_1 + 8)
            void* __offset(DefParseTree, 0x10) x8_4
            
            if (x8_3 == 0)
                x8_4 = arg1 + 0x10
            else
                x8_4 = x8_3 + 0x10
            
            *x8_4 = *(i_1 + 0x10)
            *(arg1 + 0x18) -= 1
            XPooledFree(i_1, 0x18)
            return result

return 0
