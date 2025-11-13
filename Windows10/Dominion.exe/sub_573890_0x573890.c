// 函数: sub_573890
// 地址: 0x573890
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_3 = sub_571b30(arg2, *(arg3 + 0xd48))
uint32_t result = *(eax_3 + 0x98)
*(eax_3 + 0x9c)
int32_t eax_4
int32_t ecx_2
eax_4, ecx_2 = sub_57da30(arg3, *(eax_3 + 0x8c))
int32_t edx_2 = *(arg3 + 0x19cc)
int32_t var_424 = eax_4
int32_t var_434 = ecx_2
void var_418
int32_t edx_3 = sub_576540(&var_418, edx_2, arg3, &var_418)

if ((arg5 & 6) != 0)
    if (*(arg3 + 0x19d8) != 0 && sub_574b70(*(eax_3 + 0x8c)) != 0)
        int32_t var_41c
        edx_3 = sub_574a80(&var_41c, *(arg3 + 0x19cc), arg3, 0xe28, &var_41c)
        
        if (var_41c != 0)
            result |= 2
    
    if ((*(eax_3 + 0x98) & 0x10) != 0)
        char eax_16
        eax_16, edx_3 = sub_5846c0(&var_418, edx_3, arg3, &var_418, 0x1d, 0)
        
        if (eax_16 != 0)
            result |= 2
    
    char eax_18
    eax_18, edx_3 = sub_5846c0(&var_418, edx_3, arg3, &var_418, 0x23, var_424)
    
    if (eax_18 != 0)
        result |= 2

if (((arg5 & 4) | (arg6 & 0x4000)) != 0 && *(arg3 + 0x19d8) != 0 && *(eax_3 + 0x8c) == 0x101)
    int32_t eax_22
    eax_22, edx_3 = sub_590c70(eax_3, *(arg3 + 0x19cc), arg3, 0x454)
    
    if (eax_22 != 0)
        result |= 4

if ((arg5 & 0x80) != 0)
    char eax_27
    eax_27, edx_3 = sub_5846c0(&var_418, edx_3, arg3, &var_418, 0x21, var_424)
    
    if (eax_27 != 0)
        result |= 0x80

if ((arg5 & 8) != 0)
    char eax_32
    eax_32, edx_3 = sub_5846c0(&var_418, edx_3, arg3, &var_418, 0x22, var_424)
    
    if (eax_32 != 0)
        result |= 8

if ((arg5 & 0x40) != 0)
    char eax_37
    eax_37, edx_3 = sub_5846c0(&var_418, edx_3, arg3, &var_418, 0x24, var_424)
    
    if (eax_37 != 0)
        result |= 0x40

char eax_40

if ((arg6 & 0x1000) != 0)
    eax_40, edx_3 = sub_5846c0(&var_418, edx_3, arg3, &var_418, 0x25, var_424)

if ((arg5 & 4) != 0 && (result & 2) != 0
        && sub_5846c0(&var_418, edx_3, arg3, &var_418, 0x35, 0) != 0)
    result |= 4

CookieCheckFunction(result)
return result
