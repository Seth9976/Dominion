// 函数: _Z18RemoveElidedLabelsP12DefParseTreePPKci
// 地址: 0xc920d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0 || arg3 == 0)
    return 

void* __offset(DefParseTree, 0x8) x25_2 = arg1 + 8
void* i = *x25_2

if (i == 0)
    return 

if (arg3 s<= 0)
    do
        void* x22_1 = *i
        i = *(i + 8)
        
        if ((XString::IsEmpty() & 1) == 0)
            XString::operator char const*()
        
        RemoveElidedLabels(*(x22_1 + 0x18), arg2, arg3)
    while (i != 0)
    
    return 

uint64_t x26_1 = zx.q(arg3)

do
    void* i_1 = i
    void* x28_1 = *i
    i = *(i + 8)
    
    if ((XString::IsEmpty() & 1) == 0)
        char* s1 = XString::operator char const*()
        int32_t x0_9 = strcasecmp(s1, *arg2)
        int64_t fp_1
        
        if (x0_9 != 0)
            int64_t x8_7 = 1
            int32_t j
            
            do
                fp_1 = x8_7
                
                if (x26_1 == x8_7)
                    break
                
                j = strcasecmp(s1, arg2[fp_1])
                x8_7 = fp_1 + 1
            while (j != 0)
        
        if (x0_9 == 0 || fp_1 u< x26_1)
            void* x8_1 = *(i_1 + 0x10)
            void* __offset(DefParseTree, 0x8) x8_2
            
            if (x8_1 == 0)
                x8_2 = x25_2
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
    
    RemoveElidedLabels(*(x28_1 + 0x18), arg2, arg3)
while (i != 0)
