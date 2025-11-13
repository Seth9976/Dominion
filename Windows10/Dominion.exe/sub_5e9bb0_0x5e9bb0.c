// 函数: sub_5e9bb0
// 地址: 0x5e9bb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = 0
int32_t ecx = *(arg3 + 0x11a8)

if (ecx s> 0)
    void* edi_1 = arg3
    
    do
        arg1 = *(edi_1 + 0x68)
        
        if (arg1 == 0x3e9)
            *arg2 = *(edi_1 + 0x64)
            *arg4 = 5
            int32_t* eax_4
            eax_4.b = 1
            return eax_4
        
        if (arg1 == 0x3ec || arg1 == 0x3ed)
            *arg2 = *(esi * 0x22c + arg3 + 0x64)
            *arg4 = 6
            int32_t* eax_2
            eax_2.b = 1
            return eax_2
        
        esi += 1
        edi_1 += 0x22c
    while (esi s< ecx)

arg1.b = 0
return arg1
