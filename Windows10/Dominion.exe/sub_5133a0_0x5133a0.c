// 函数: sub_5133a0
// 地址: 0x5133a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = sub_573400()
void* result_1 = result
int32_t esi = 7
int32_t* ecx_1 = *(result + 4) + 0x1594
int32_t edi

while (true)
    if (*ecx_1 == 0x1128 || ecx_1[1] == 0x1128)
        edi = *(result + 4)
        
        if (esi s>= 0x48)
            sub_591930()
            result = result_1
        
        break
    
    esi += 1
    ecx_1 = &ecx_1[4]
    
    if (esi s< 0x48)
        continue
    
    edi = *(result + 4)
    esi = 0
    break

int32_t* ebx = nullptr
int32_t i = *(edi + esi * 0x10 + 0x152c)

while (i != 0)
    uint32_t eax = *(result + 4)
    uint32_t edi_1 = zx.d(i.w)
    uint32_t var_c_1 = eax
    
    if (edi_1 u>= 0x320)
        eax = sub_591930()
    
    void* edi_3 = edi_1 * 0x64 + var_c_1
    
    if (ebx != 0)
        sub_50c960(eax, i, *(result_1 + 4), ebx)
    else
        ebx = *(edi_3 + 0x1a4c)
    
    i = *(edi_3 + 0x1aa4)
    result = result_1

return result
