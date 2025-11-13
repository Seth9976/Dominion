// 函数: sub_6fb1e0
// 地址: 0x6fb1e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char var_118 = 0
void var_117
memset(&var_117, 0, 0x103)
OPENFILENAMEA param0
memset(&param0, 0, 0x58)
param0.hwndOwner = data_147d46c
param0.lpstrFile = &var_118
param0.lStructSize = 0x58
param0.nMaxFile = 0x104
param0.lpstrFilter = arg1
param0.nFilterIndex = 0
param0.lpstrFileTitle = 0
param0.nMaxFileTitle = 0
param0.lpstrInitialDir = 0
param0.Flags = 0x2001808
BOOL result

if (GetOpenFileNameA(&param0) == 0)
    result.b = 0
    CookieCheckFunction(result)
    return result

char* ecx = *arg2

if (ecx == 0 || ecx != &var_118)
    char* esi_1 = &var_118
    
    do
        result.b = *esi_1
        esi_1 = &esi_1[1]
    while (result.b != 0)
    
    int32_t esi_2 = esi_1 - &var_117
    
    if (esi_1 == &var_117)
        if (data_cf65bc != esi_2 && ecx != 0 && *ecx != result.b)
            result = sub_63d4e0(arg2)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(result, *(result + 0xc) + 0x10)
        
        *arg2 = &data_801800
        result.b = 1
        CookieCheckFunction(result)
        return result
    
    sub_63d5e0(result, esi_2, arg2, 0)
    memcpy(*arg2, &var_118, esi_2 + 1)

result.b = 1
CookieCheckFunction(result)
return result
