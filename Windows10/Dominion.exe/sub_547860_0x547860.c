// 函数: sub_547860
// 地址: 0x547860
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t esi = 7
int32_t* edx_1 = *(eax + 4) + 0x1594

while (*edx_1 != 0x1128)
    if (edx_1[1] == 0x1128)
        break
    
    esi += 1
    edx_1 = &edx_1[4]
    
    if (esi s>= 0x48)
        esi = 0
        break

void* ecx = *(eax + 4)
uint32_t result_1
uint32_t result

if (sub_588650(&result_1, ecx + 0x1a18, ecx, &result_1) != 0)
    result = result_1
label_5478de:
    int32_t* ecx_1 = *(eax + 4)
    int32_t eax_3 = ecx_1[0x541]
    
    if (eax_3 != 3 && eax_3 != 5 && eax_3 != 4 && eax_3 != 6 && ecx_1[0x540].b == 0)
        int32_t eax_4 = 0xffffffff
        
        if (ecx_1[0x673] == 0xffffffff)
            eax_4 = ecx_1[0x674]
        
        sub_59f9b0(eax_4, 0xffffffff, ecx_1, eax_4, 0x3c, 0, nullptr, 0, 0, 0, 0, 0)
    
    void* eax_5 = sub_573400()
    
    if (sub_583720(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), result, arg1, nullptr, 0x476, 0, 0, 4) != 0)
        return result
else
    int32_t ebx_1 = *(eax + 4)
    
    if (esi s>= 0x48)
        sub_591930()
    
    result = *(ebx_1 + esi * 0x10 + 0x152c)
    
    if (result != 0)
        goto label_5478de
return 0
