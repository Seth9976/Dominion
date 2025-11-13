// 函数: sub_4dae80
// 地址: 0x4dae80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_bf23b8
char eax_6

if (eax != 0 && eax == 1)
    int32_t* ecx = *SteamInternal_ContextInit(&data_cb4518)
    eax_6 = (*(*ecx + 0x1c))(arg1[2])

if (eax == 0 || eax != 1 || eax_6 == 0)
    int32_t result = arg1[1]
    
    if (result != 0)
        if (result == 4)
            return result
        
        if (result == 5)
            return result
        
        int32_t var_c
        void* var_8
        uint32_t eax_7 = sub_4daf40(&var_8, &var_c)
        int32_t esi_1 = 0
        
        if (eax_7 s<= 0)
            return arg1[1]
        
        while (sub_4db560(*(var_8 + (esi_1 << 2)), *arg1) == 0)
            esi_1 += 1
            
            if (esi_1 s>= eax_7)
                return arg1[1]
        
        if (esi_1 != 0xffffffff)
            if (*(var_c + (esi_1 << 2)) == 0x63)
                return 6

return 0
