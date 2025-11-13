// 函数: sub_752b00
// 地址: 0x752b00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

free(arg1[0x19])
free(arg1[0x1b])
void* ecx = arg1[4]

if (arg1[0x23] != 0)
    if (ecx != 0)
        int32_t eax_5 = *(*(ecx + 8) + 8)
        
        if (eax_5 != 0)
            eax_5(ecx, arg1)
    
    free(arg1[2])
    free(*arg1)
    return free(arg1)

if (ecx != 0)
    int32_t eax_2 = *(*(ecx + 8) + 8)
    
    if (eax_2 != 0)
        eax_2(ecx, arg1)

free(arg1[2])
free(*arg1)
free(arg1[6])
free(arg1[8])
free(arg1[0x1a])
free(arg1[0x1d])
free(arg1[0x25])
return free(arg1)
