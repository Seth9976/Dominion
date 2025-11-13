// 函数: sub_4bb2f0
// 地址: 0x4bb2f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = *arg2
int32_t edx_3 = (i s>> 4 | i) & arg1[1]
int32_t* eax_1 = *arg1
int32_t* ecx = eax_1[edx_3]
int32_t* edx_4 = nullptr

if (ecx != 0)
    while (i != *ecx)
        edx_4 = ecx
        ecx = ecx[2]
        
        if (ecx == 0)
            return eax_1
    
    int32_t eax_2 = ecx[2]
    
    if (edx_4 == 0)
        eax_1[edx_3] = eax_2
        int32_t* eax_3 = sub_64c080(ecx, 0xc)
        arg1[2] -= 1
        return eax_3
    
    edx_4[2] = eax_2
    eax_1 = sub_64c080(ecx, 0xc)
    arg1[2] -= 1

return eax_1
