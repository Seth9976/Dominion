// 函数: _Z18DefParseItemDeleteP12DefParseItem
// 地址: 0xc8b054
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefParseTree* x20 = *(arg1 + 0x18)

if (x20 != 0)
    int64_t* i_2 = *(x20 + 8)
    
    if (i_2 != 0)
        int64_t* i
        
        do
            i = i_2[1]
            DefParseItemDelete(*i_2)
            i_2 = i
        while (i != 0)
        i_2 = *(x20 + 8)
    
    if (i_2 != 0)
        int64_t* i_1
        
        do
            i_1 = i_2[1]
            XPooledFree(i_2, 0x18)
            i_2 = i_1
        while (i_1 != 0)
    
    __builtin_memset(x20 + 8, 0, 0x14)
    DefParseTreeFree(x20)
    *(arg1 + 0x18) = 0

return DefParseItemFree(arg1) __tailcall
