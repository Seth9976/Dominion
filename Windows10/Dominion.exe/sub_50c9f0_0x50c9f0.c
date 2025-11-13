// 函数: sub_50c9f0
// 地址: 0x50c9f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
int32_t esi = 7
int32_t* ecx_1 = *(eax_2 + 4) + 0x1594
int32_t ebx

while (true)
    if (*ecx_1 == 0x718 || ecx_1[1] == 0x718)
        ebx = *(eax_2 + 4)
        
        if (esi s>= 0x48)
            sub_591930()
        
        break
    
    esi += 1
    ecx_1 = &ecx_1[4]
    
    if (esi s< 0x48)
        continue
    
    ebx = *(eax_2 + 4)
    esi = 0
    break

int32_t var_38[0xc]
int32_t eax_7 = sub_5108a0(&var_38, esi, *(eax_2 + 4), &var_38)

if (eax_7 s> 0xc)
    sub_63b870(eax_7, &data_801800, "num <= 12", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x813, "Start_SameReward")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t eax_8 = sub_63ed10(*(eax_2 + 4), eax_7)
int32_t ebx_1 = *(eax_2 + 4)
uint32_t esi_1 = zx.d((var_38[eax_8]).w)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t i = *((esi << 4) + ebx + 0x152c)
int32_t* result = *(esi_1 * 0x64 + ebx_1 + 0x1a4c)
int32_t* result_1 = result
void* ebx_4

for (; i != 0; i = *(ebx_4 + 0x1aa4))
    int32_t eax_11 = *(eax_2 + 4)
    uint32_t ebx_2 = zx.d(i.w)
    
    if (ebx_2 u>= 0x320)
        sub_591930()
    
    result = result_1
    ebx_4 = ebx_2 * 0x64 + eax_11
    
    if (*(ebx_4 + 0x1a4c) != result)
        sub_50c960(result, i, *(eax_2 + 4), result)
        result = result_1

int32_t* ecx_5 = *(eax_2 + 4)
int32_t edx_3 = ecx_5[0x541]

if (edx_3 != 3 && edx_3 != 5 && edx_3 != 4 && edx_3 != 6 && ecx_5[0x540].b == 0)
    int32_t edx_4 = 0xffffffff
    
    if (ecx_5[0x673] == 0xffffffff)
        edx_4 = ecx_5[0x674]
    
    result = sub_59f9b0(result, 0xffffffff, ecx_5, edx_4, 0x4d, 0, nullptr, 0, result, 0, 0, 0)

CookieCheckFunction(result)
return result
