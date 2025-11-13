// 函数: sub_510940
// 地址: 0x510940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t i = sub_56b780()
void* eax_3 = sub_573400()
int32_t* esi_1

if (i == 0)
label_510996:
    esi_1 = nullptr
else
    esi_1 = 7
    int32_t* eax_5 = *(eax_3 + 4) + 0x1594
    
    while (*eax_5 != i)
        if (eax_5[1] == i)
            break
        
        esi_1 += 1
        eax_5 = &eax_5[4]
        
        if (esi_1 s>= 0x48)
            goto label_510996

int32_t var_c90[0x321]
int32_t eax_7 = sub_5108a0(&var_c90, esi_1, *(eax_3 + 4), &var_c90)
int32_t* ecx_1 = *(eax_3 + 4)
int32_t var_c9c = eax_7
int32_t* eax_8 = sub_63eda0(eax_7, &var_c90, ecx_1, eax_7, eax_7)
int32_t ebx_1 = 0

if (var_c9c s> 0)
    do
        eax_8 = sub_5822e0(eax_8, 0xffffffff, *(eax_3 + 4), var_c90[ebx_1], 0xb, esi_1, nullptr, 0, 
            0, 0, 0, 0, nullptr, 0, 0xffffffff, nullptr)
        ebx_1 += 1
    while (ebx_1 s< var_c9c)

int32_t* ecx_3 = *(eax_3 + 4)
int32_t result = ecx_3[0x541]

if (result != 3 && result != 5 && result != 4 && result != 6 && ecx_3[0x540].b == 0)
    int32_t eax_10 = 0xffffffff
    
    if (ecx_3[0x673] == 0xffffffff)
        eax_10 = ecx_3[0x674]
    
    result = sub_59f9b0(eax_10, 0xffffffff, ecx_3, eax_10, 0x48, 0, nullptr, 0, i, 0, 0, 0)

CookieCheckFunction(result)
return result
