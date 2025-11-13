// 函数: sub_698dd0
// 地址: 0x698dd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* var_44
int32_t var_c = __security_cookie ^ &var_44
int32_t ebx
ebx.b = arg6
var_44 = arg2
void* var_40 = arg3
arg3:1.b = arg5
int32_t eax_1
eax_1.b = arg4[1]
arg2.b = arg4[3]
*arg4 = eax_1.b
char* eax_2 = var_44
uint32_t result = 0
arg4[1] = arg3:1.b
arg4[2] = arg2.b
arg4[3] = ebx.b
*(arg4 + 8) = 0xffffffff

if (eax_2[1] != 0 || eax_2[3] != 0 || eax_2[2] != 0)
    arg4[1] = 0
    CookieCheckFunction(0)
    return 0

arg3.b = arg2.b
eax_2.b = ebx.b
int32_t var_3c[0xc]

if (arg2.b == 0 && ebx.b == 1 && arg3:1.b == ebx.b)
    int32_t* ebx_1 = *(var_40 + 0x150)
    
    if (ebx_1 != 0)
        sub_6883d0(ebx_1, &var_3c)
        eax_2, arg3 = sub_688660(&var_3c, arg4, 0)
        arg3.b = arg4[2]
        eax_2.b = arg4[3]
    
    if (*var_44 == 0)
        arg4[4] = 1
    else
        result = 1

if (arg3.b == 1)
    eax_2.b = arg4[3]
    
    if (eax_2.b == 0)
        if (*arg4 != arg3.b)
            goto label_698ea1
        
        if (arg4[4] == arg3.b)
            result = 1
else if (eax_2.b == 0)
label_698ea1:
    
    if (*arg4 == 0 && arg4[1] == 1)
        int32_t* ecx_2 = *(var_40 + 0x158)
        
        if (ecx_2 != 0)
            sub_6883d0(ecx_2, &var_3c)
            sub_688660(&var_3c, arg4, result)

if (arg4[3] == 0)
    arg4[4] = 0

CookieCheckFunction(result)
return result
