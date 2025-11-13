// 函数: sub_5d8610
// 地址: 0x5d8610
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1
int32_t eax = *(arg1 + 0x2c)

if (eax == 2)
    return 0x2ece

bool cond:1
int32_t var_c
char const* const var_8
void* eax_2
char* ecx_1

if (eax != 7)
    if (eax != 6)
        int32_t eax_9 = *(arg1 + 0x1bc)
        
        if (eax_9 == 0x474)
            eax_2 = sub_5de8b0(*(arg1 + 0x1c0))
            
            if (eax_2 != 0)
                if (*(eax_2 + 0xa4) == 0x3e9)
                    return 0x2b5e
                
                return 0x2cf8
            
            var_8 = "LookupCard"
            var_c = 0x3d96
            ecx_1 = &data_871964
            goto label_5d8756
        
        if (eax_9 != 0x3f1)
            return 0x2b34
        
        int32_t eax_11 = data_b604e0
        int32_t ecx_8 = *(arg1 + 0x1c4)
        
        if (eax_11 == 0xffffffff)
            eax_11 = 0
        
        if (ecx_8 == eax_11)
            return 0x2d35
        
        int32_t eax_13
        eax_13.b = ecx_8 == data_b604e4
        return (eax_13 << 2) + 0x2b96
    
    int32_t eax_5 = *(arg1 + 0x1e0)
    
    if (eax_5 == 6 || eax_5 == 0xd || eax_5 == 0xf)
        return 0x2b34
    
    int32_t eax_6 = data_b604e0
    int32_t ecx_2 = *(arg1 + 0x1e4)
    
    if (eax_6 == 0xffffffff)
        eax_6 = 0
    
    if (ecx_2 == eax_6)
        return 0x2d35
    
    cond:1 = ecx_2 == data_b604e4
else
    eax_2 = *(arg1 + 0x224)
    
    if (eax_2 != 0)
        if (eax_2 == 1)
            return 0x2b34
        
        var_8 = "GetTokenLayer"
        var_c = 0x2fc9
        ecx_1 = "Halt"
    label_5d8756:
        sub_63b870(eax_2, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            var_c, var_8)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t eax_3 = data_b604e0
    
    if (eax_3 == 0xffffffff)
        eax_3 = 0
    
    if (*(arg1 + 0x228) == eax_3)
        return 0x2d35
    
    cond:1 = *(arg1 + 0x1c4) == data_b604e4

if (cond:1)
    return 0x2b9a

return 0x2b96
