// 函数: sub_4f3640
// 地址: 0x4f3640
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_38[0x6]
sub_58bc10(arg1, &var_38)
int32_t eax_2 = *(arg1 + 0xd38)
int32_t var_20

if (eax_2 s> 0)
    __builtin_memcpy(&var_20, &var_38, eax_2 << 2)

int32_t eax_4 = eax_2 << 2 s>> 2
void* var_3c
void* result = sub_4f6220(eax_4, &(&var_20)[eax_2], &var_20, eax_4, var_3c)
int32_t i = 0

if (*(arg1 + 0xd38) s> 0)
    void* result_2
    result = result_2
    int32_t edi_1 = var_20
    void* result_1 = result
    
    do
        int32_t ecx_3 = var_38[i]
        void* eax_6 = ecx_3 - edi_1
        
        if (ecx_3 == edi_1)
            eax_6 = ecx_3 - result
        
        *(arg2 + (i << 2)) = eax_6
        i += 1
        result = result_1
    while (i s< *(arg1 + 0xd38))

CookieCheckFunction(result)
return result
