// 函数: sub_72e570
// 地址: 0x72e570
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
void* edi = arg1 + 0x20
void* ecx = arg1 + 0xac
void* eax = arg1 + 0xa8

while (true)
    if (*(arg1 + 0x10) != 0)
        if ((*(arg1 + 0x18))(*(arg1 + 0x1c)) != 0
                && (*edi == 0 || *(arg1 + 0xa8) u>= *(arg1 + 0xac)))
            return result
    else if (*eax u>= *ecx)
        return result
    
    char* edx
    edx.b = *arg2
    
    if (edx.b - 0x30 u> 9)
        break
    
    result = sx.d(edx.b) + result * 0xa - 0x30
    char* eax_9 = *(arg1 + 0xa8)
    
    if (eax_9 u>= *(arg1 + 0xac))
        if (*edi == 0)
            *arg2 = 0
            ecx = arg1 + 0xac
            eax = arg1 + 0xa8
        else
            void* eax_13 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
            char ecx_3
            
            if (eax_13 != 0)
                *(arg1 + 0xac) = eax_13 + 0x28 + arg1
                ecx_3 = *(arg1 + 0x28)
                *(arg1 + 0xa8) = arg1 + 0x29
                *arg2 = ecx_3
                ecx = arg1 + 0xac
                eax = arg1 + 0xa8
            else
                *(arg1 + 0x20) = eax_13
                *(arg1 + 0xac) = arg1 + 0x29
                *(arg1 + 0x28) = 0
                ecx_3 = *(arg1 + 0x28)
                *(arg1 + 0xa8) = arg1 + 0x29
                *arg2 = ecx_3
                ecx = arg1 + 0xac
                eax = arg1 + 0xa8
    else
        void* ecx_2
        ecx_2.b = *eax_9
        edi = arg1 + 0x20
        *(arg1 + 0xa8) = &eax_9[1]
        *arg2 = ecx_2.b
        eax = arg1 + 0xa8
        ecx = arg1 + 0xac

return result
