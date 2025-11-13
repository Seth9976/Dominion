// 函数: sub_5bc200
// 地址: 0x5bc200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t i = arg2
int32_t* var_24 = arg1
int32_t* var_24_1 = arg1
void var_b
void* edi = &var_b

if (i s>= 0)
    do
        edi -= 1
        uint32_t i_3 = i u/ 0xa
        i.b -= i_3.b * 0xa
        i.b += 0x30
        *edi = i.b
        i = i_3
    while (i != 0)
else
    int32_t i_1 = neg.d(i)
    
    do
        edi -= 1
        int32_t i_2 = i_1 u/ 0xa
        i_1.b -= i_2.b * 0xa
        i_1.b += 0x30
        *edi = i_1.b
        i_1 = i_2
    while (i_1 != 0)
    
    edi -= 1
    *edi = 0x2d

__builtin_memset(arg1, 0, 0x18)
arg1[4] = 0

if (edi == &var_b)
    arg1[5] = 0xf
    *arg1 = 0
    CookieCheckFunction(arg1)
    return arg1

char* count = &var_b - edi

if (count u> 0x7fffffff)
    sub_5b0860()
    noreturn

if (count u> 0xf)
    void* const eax_6 = count | 0xf
    char* ecx_5
    void* const var_28_1
    uint32_t eax_7
    
    if (eax_6 u<= 0x7fffffff)
        if (eax_6 u< 0x16)
            eax_6 = 0x16
        
        var_28_1 = eax_6
        ecx_5 = eax_6 + 1
        
        if (ecx_5 != 0)
            if (ecx_5 u>= 0x1000)
                eax_7 = &ecx_5[0x23]
                
                if (eax_7 u> ecx_5)
                    goto label_5bc2fe
                
                sub_4f7ee0()
                noreturn
            
            ecx_5 = operator new(ecx_5)
            eax_6 = var_28_1
    else
        var_28_1 = 0x7fffffff
        eax_7 = 0x80000023
    label_5bc2fe:
        int32_t eax_8 = operator new(eax_7)
        
        if (eax_8 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        ecx_5 = (eax_8 + 0x23) & 0xffffffe0
        *(ecx_5 - 4) = eax_8
        eax_6 = var_28_1
    *arg1 = ecx_5
    arg1[4] = count
    arg1[5] = eax_6
    memcpy(ecx_5, edi, count)
    *(ecx_5 + count) = 0
else
    arg1[4] = count
    arg1[5] = 0xf
    memcpy(arg1, edi, count)
    *(count + arg1) = 0

CookieCheckFunction(arg1)
return arg1
