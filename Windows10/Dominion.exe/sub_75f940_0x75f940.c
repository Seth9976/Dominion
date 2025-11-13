// 函数: sub_75f940
// 地址: 0x75f940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = 0xffffffff
int32_t edi = 0xffffffff
int32_t eax = *(arg1 + 0x1c)

if (eax != 0 && *(arg1 + (eax << 2) + 0x4c) == 0)
    *(arg1 + 0x1c) = eax - 1

int32_t eax_2 = 0
void* edx = arg1 + 0x50

while (true)
    void* ecx = *edx
    
    if (ecx == 0)
        break
    
    if ((*(ecx + 0x10) & 2) == 0)
        int32_t ecx_1 = *(ecx + 8)
        
        if (ecx_1 u< edi)
            edi = ecx_1
            ebx = eax_2
    
    eax_2 += 1
    edx += 4
    
    if (eax_2 s>= 0x400)
        sub_760f30(arg1, ebx)
        return ebx

if (eax_2 + 1 s> *(arg1 + 0x1c))
    *(arg1 + 0x1c) = eax_2 + 1

return eax_2
