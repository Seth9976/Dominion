// 函数: sub_67d9e0
// 地址: 0x67d9e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__builtin_memset(arg4, 0, 0x34)
arg4[0xe] = 0
arg4[0xd] = 0xffffffff

if (arg3[1] != 1)
    arg4[0xc] = 1
    *arg4 = sub_64c460(*arg3, &arg3[3])
    arg4[1] = sub_64c460(*arg3, &arg3[8])
else
    int32_t eax = arg3[0x1c]
    
    if (eax s> 3)
        sub_63b870(eax, &data_801800, "expr.numKeys <= MAX_GRAPH_KEYS", 
            "C:\x\ax2017\Engine\UI2.cpp", 0x901, "PropGraphSet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    arg4[0xc] = eax
    int32_t i_1 = 0
    
    if (arg3[0x1c] s> 0)
        void* ebx = &arg3[2]
        void* esi_1 = &arg4[3]
        int32_t i
        
        do
            *(esi_1 - 4) = *(ebx + 0x2c)
            *esi_1 = *ebx
            *(esi_1 - 0xc) = sub_64c460(*arg3, ebx + 4)
            *(esi_1 - 8) = sub_64c460(*arg3, ebx + 0x18)
            ebx += 0x34
            esi_1 += 0x10
            i = i_1 + 1
            i_1 = i
        while (i s< arg3[0x1c])

return arg4
