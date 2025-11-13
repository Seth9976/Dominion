// 函数: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7reserveEm
// 地址: 0x10e3098
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = arg1
uint64_t entry_x1

if (entry_x1 u>= 0x3ffffffffffffff0)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    uint64_t x24_1 = zx.q(*x19)
    int64_t x8_1
    uint64_t x22_1
    
    if ((x24_1.d & 1) != 0)
        x22_1 = *(x19 + 8)
        x8_1 = (*x19 & 0xfffffffffffffffe) - 1
    else
        x22_1 = x24_1 u>> 1
        x8_1 = 4
    
    uint64_t x9_1
    
    x9_1 = x22_1 u> entry_x1 ? x22_1 : entry_x1
    
    int64_t x23_1
    
    if (x9_1 u> 4)
        x23_1 = ((x9_1 + 4) & 0xfffffffffffffffc) - 1
    else
        x23_1 = 4
    
    if (x23_1 == x8_1)
        return 
    
    int32_t x25_1 = x23_1 == 4 ? 1 : 0
    wchar_t* s1
    wchar_t* s2
    
    if (x23_1 == 4)
        s2 = *(x19 + 0x10)
        s1 = x19 + 4
        
        if ((x24_1.d & 1) == 0)
            goto label_10e3160
        
        goto label_10e3174
    
    uint64_t x9_4 = (x23_1 + 1) u>> 0x3e
    
    if (x23_1 u<= x8_1)
        if (x9_4 != 0)
            sub_ef2a0c()
            noreturn
        
        arg1 = operator new((x23_1 + 1) << 2)
        goto label_10e3154
    
    if (x9_4 == 0)
        arg1 = operator new((x23_1 + 1) << 2)
    label_10e3154:
        s1 = arg1
        
        if ((x24_1.d & 1) != 0)
            s2 = *(x19 + 0x10)
        label_10e3174:
            int64_t x8_6 = *(x19 + 8)
            x25_1 = 1
            
            if (x8_6 u< -1)
                wmemcpy(s1, s2, x8_6 + 1)
        else
            s2 = x19 + 4
        label_10e3160:
            uint64_t x8_5 = x24_1 u>> 1 & 0x7fffffff
            
            if (x8_5 u< -1)
                wmemcpy(s1, s2, x8_5 + 1)
        
        if (x25_1 != 0)
            operator delete(s2)
        
        if (x23_1 == 4)
            *x19 = (x22_1.d << 1).b
            return 
        
        *x19 = (x23_1 + 1) | 1
        *(x19 + 8) = x22_1
        *(x19 + 0x10) = s1
        return 

sub_ef2a0c()
noreturn
