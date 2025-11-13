// 函数: sub_56e770
// 地址: 0x56e770
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_ca4 = arg1
int32_t var_ca8 = 0
int32_t ebx
ebx.b = 0
int32_t var_c98
uint32_t i

for (i = sub_568960(__security_cookie ^ &var_c98, 0, 0x3ea, 0); i s< arg1; 
        i = sub_568960(i, 0, 0x3ea, 0))
    void* eax_2 = sub_573400()
    int32_t var_ca4_1 = 0xc
    int32_t ecx_1
    i, ecx_1 = sub_588db0(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 0x3ea, 0, *(eax_2 + 0x28), 
        *(eax_2 + 0x2c), *(eax_2 + 0x30), &var_c98, 0)
    
    if (i == 0 || var_c98 == 0)
        if (ebx.b != 0)
            break
        
        ebx.b = 1
    
    int32_t var_ca4_2 = ecx_1
    int32_t var_ca8_1 = 0

CookieCheckFunction(i)
return i
