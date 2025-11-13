// 函数: _Z27DefParseTreeGetOrCreateItemP12DefParseTreePKc
// 地址: 0xc8cf5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* result

if (arg1 != 0)
    int64_t* x8_1 = *(arg1 + 8)
    int32_t i
    
    do
        if (x8_1 == 0)
            goto label_c8d018
        
        result = *x8_1
        int64_t* x22_1 = x8_1[1]
        i = strcasecmp(XString::operator char const*(), arg2)
        x8_1 = x22_1
    while (i != 0)

if (arg1 == 0 || result == 0)
label_c8d018:
    result = DefParseItemAlloc()
    char** x0_7 = XPooledCalloc(0x18)
    *x0_7 = result
    x0_7[1] = 0
    x0_7[2] = *(arg1 + 0x10)
    void* x8_3 = *(arg1 + 0x10)
    void* __offset(DefParseTree, 0x8) x8_4
    
    if (x8_3 == 0)
        x8_4 = arg1 + 8
    else
        x8_4 = x8_3 + 8
    
    *x8_4 = x0_7
    int32_t x8_5 = *(arg1 + 0x18)
    *(arg1 + 0x10) = x0_7
    *(arg1 + 0x18) = x8_5 + 1
else
    XString::operator=(&result[8])
    XString::operator=(&result[0x10])
    DefParseTree* x21_1 = *(result + 0x18)
    
    if (x21_1 != 0)
        int64_t* i_3 = *(x21_1 + 8)
        
        if (i_3 != 0)
            int64_t* i_1
            
            do
                i_1 = i_3[1]
                DefParseItemDelete(*i_3)
                i_3 = i_1
            while (i_1 != 0)
            i_3 = *(x21_1 + 8)
        
        if (i_3 != 0)
            int64_t* i_2
            
            do
                i_2 = i_3[1]
                XPooledFree(i_3, 0x18)
                i_3 = i_2
            while (i_2 != 0)
        
        __builtin_memset(x21_1 + 8, 0, 0x14)
        DefParseTreeFree(x21_1)
        *(result + 0x18) = 0

XString::operator=(result)
return result
