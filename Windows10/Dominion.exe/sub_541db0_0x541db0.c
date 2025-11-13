// 函数: sub_541db0
// 地址: 0x541db0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *(sub_573400() + 0xc)
int32_t ecx = 0
void* eax_2 = *(sub_573400() + 4)
int32_t edx = *(eax_2 + 0x1520)

if (edx s> 0)
    void* eax_3 = eax_2 + 0x1a70
    
    do
        if (*(eax_3 - 0x24) == 0xd4a && *eax_3 == esi)
            goto label_541dee
        
        ecx += 1
        eax_3 += 0x64
    while (ecx s< edx)

ecx = 0
label_541dee:
int32_t result
result.b = ecx != 0
return result
