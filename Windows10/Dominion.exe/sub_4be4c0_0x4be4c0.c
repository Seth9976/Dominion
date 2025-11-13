// 函数: sub_4be4c0
// 地址: 0x4be4c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8
int32_t eax = sub_571bc0(*arg1, &var_8)
int32_t edx_1 = 0

if (eax s> 0)
    int32_t* esi_1 = var_8
    
    do
        if (*esi_1 == arg1[1])
            if (esi_1 == 0)
                break
            
            if (*arg1 != 1)
                int32_t eax_3 = data_bf23b8
                
                if (eax_3 != 0 && eax_3 == 1)
                    int32_t* ecx_2 = *SteamInternal_ContextInit(&data_cb4518)
                    
                    if ((*(*ecx_2 + 0x1c))(esi_1[2]) != 0)
                        return 0
            
            return esi_1[1]
        
        edx_1 += 1
        esi_1 = &esi_1[0x11]
    while (edx_1 s< eax)

return 3
