// 函数: _Z19DefParseTreeReplaceP12DefParseTreeRS0_
// 地址: 0xc8b128
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i_4 = *(arg1 + 8)

if (i_4 != 0)
    int64_t* i
    
    do
        i = i_4[1]
        DefParseItemDelete(*i_4)
        i_4 = i
    while (i != 0)
    i_4 = *(arg1 + 8)

if (i_4 != 0)
    int64_t* i_1
    
    do
        i_1 = i_4[1]
        XPooledFree(i_4, 0x18)
        i_4 = i_1
    while (i_1 != 0)

__builtin_memset(arg1 + 8, 0, 0x14)
DefParseTree* x22_1 = *arg2
int64_t* i_6 = *(x22_1 + 8)

if (i_6 != 0)
    int64_t* i_2
    
    do
        int64_t x23_1 = *i_6
        i_2 = i_6[1]
        int64_t* x0_1 = XPooledCalloc(0x18)
        *x0_1 = x23_1
        x0_1[1] = 0
        x0_1[2] = *(arg1 + 0x10)
        void* x8_1 = *(arg1 + 0x10)
        void* __offset(DefParseTree, 0x8) x8_2
        
        if (x8_1 == 0)
            x8_2 = arg1 + 8
        else
            x8_2 = x8_1 + 8
        
        *x8_2 = x0_1
        int32_t x8_3 = *(arg1 + 0x18)
        *(arg1 + 0x10) = x0_1
        *(arg1 + 0x18) = x8_3 + 1
        i_6 = i_2
    while (i_2 != 0)
    x22_1 = *arg2

void* i_5 = *(x22_1 + 8)

if (i_5 != 0)
    void* i_3
    
    do
        i_3 = *(i_5 + 8)
        XPooledFree(i_5, 0x18)
        i_5 = i_3
    while (i_3 != 0)

__builtin_memset(x22_1 + 8, 0, 0x14)
int64_t result = DefParseTreeFree(*arg2)
*arg2 = nullptr
return result
