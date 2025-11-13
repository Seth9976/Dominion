// 函数: sub_5f4f40
// 地址: 0x5f4f40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result
void* var_c
void* var_8

if (arg4 == 0)
label_5f4f8f:
    
    if (arg3 != 2)
        uint32_t ebx_2 = sub_4daf40(&var_8, &var_c)
        int32_t esi_2 = 0
        
        if (ebx_2 s> 0)
            do
                if (sub_4db700(*(var_8 + (esi_2 << 2)), arg3).b != 0)
                    goto label_5f4f94
                
                esi_2 += 1
            while (esi_2 s< ebx_2)
        
        result.b = 0
        return result
else
    if (arg4 != 1)
        if (arg4 == 2)
            goto label_5f4f8f
        
        sub_63b870(arg4 - 2, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0x7c46, "HasEntitlementForEdition")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    uint32_t ebx_1 = sub_4daf40(&var_8, &var_c)
    int32_t esi_1 = 0
    
    if (ebx_1 s<= 0)
        result.b = 0
        return result
    
    while (true)
        result = sub_4db650(*(var_8 + (esi_1 << 2)), arg3)
        
        if (result.b != 0)
            break
        
        esi_1 += 1
        
        if (esi_1 s>= ebx_1)
            return result
label_5f4f94:
result.b = 1
return result
