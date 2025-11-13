// 函数: sub_5f5f40
// 地址: 0x5f5f40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *arg4
char* eax_12

if (eax == 1)
    int32_t i = 0
    int32_t* ecx_21 = arg2
    
    do
        int32_t eax_19 = *ecx_21
        
        if (eax_19 == 0)
            break
        
        if (eax_19 == 1 && ecx_21[1] == arg4[1])
            memmove(ecx_21, &ecx_21[4], (9 - i) << 4)
            arg2[0x24] = 0
            return sub_4e4cb0(arg3)
        
        i += 1
        ecx_21 = &ecx_21[4]
    while (i s< 0xa)
    
    int32_t ecx_22 = 0
    void* edx_18 = &arg2[0x28]
    
    while (true)
        eax_12 = *edx_18
        
        if (eax_12 == 0)
            break
        
        if (eax_12 == 1)
            eax_12 = *(edx_18 + 4)
            
            if (eax_12 == arg4[1])
                memmove(edx_18, edx_18 + 0x48, 0xd8 - ecx_22 * 0x48)
                arg2[0x5e] = 0
                return sub_4e4cb0(arg3)
        
        ecx_22 += 1
        edx_18 += 0x48
        
        if (ecx_22 s>= 4)
            return eax_12
else
    if (eax != 2)
        int32_t eax_3 = eax - 3
        int32_t var_30_1
        
        if (eax == 3)
            int32_t ecx = arg4[3]
            eax_3 = arg4[2]
            int32_t var_1c
            
            if (ecx u<= 0 && (ecx u< 0 || eax_3 u<= 0x20000000))
                if (eax_3 == 0x20000000 && ecx == 0)
                    var_1c = ecx
                    int32_t var_18_1 = 2
                    sub_5f5ee0(&arg2[0x2f6], &var_1c)
                    return sub_4e4cb0(arg3)
                
                if (eax_3 == 0x400 && ecx == 0)
                    var_1c = ecx
                    int32_t var_18_2 = 2
                    sub_5f5ee0(&arg2[0x2f4], &var_1c)
                    return sub_4e4cb0(arg3)
                
                if (eax_3 == 0x8000000 && ecx == 0)
                    var_1c = ecx
                    int32_t var_18_3 = 2
                    sub_5f5ee0(&arg2[0x2f8], &var_1c)
                    return sub_4e4cb0(arg3)
                
                if (eax_3 == 0x10000000 && ecx == 0)
                    var_1c = ecx
                    int32_t var_18_4 = 1
                    sub_5f5ee0(&arg2[0x2fa], &var_1c)
                    return sub_4e4cb0(arg3)
            else if (eax_3 == 0)
                if (ecx == 0x40)
                    arg2[0x2fe].b = eax_3.b
                    return sub_4e4cb0(arg3)
                
                if (eax_3 == 0)
                    if (ecx == 0x100)
                        var_1c = eax_3
                        int32_t var_18_5 = 2
                        sub_5f5ee0(&arg2[0x2fc], &var_1c)
                        return sub_4e4cb0(arg3)
                    
                    if (eax_3 == 0 && ecx == 0x800)
                        *(arg2 + 0xbf9) = eax_3.b
                        return sub_4e4cb0(arg3)
            char const* const var_2c_4 = "GameCreateRemoveCard"
            var_30_1 = 0x8050
        else
            char const* const var_2c_1 = "GameCreateRemoveCard"
            var_30_1 = 0x8056
        
        sub_63b870(eax_3, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            var_30_1, "GameCreateRemoveCard")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t* eax_11 = arg4[2]
    char* var_10
    
    if (eax_11 == 2)
    label_5f6136:
        void* ecx_15 = &arg2[0x272]
        int32_t esi_2 = arg4[2]
        int32_t edx_14 = 0
        var_10 = nullptr
        
        while (true)
            int32_t eax_15 = *ecx_15
            
            if (eax_15 != 0)
                if (eax_15 == esi_2)
                    break
                
                edx_14 += 1
                ecx_15 += 0x10
                
                if (edx_14 s< 0x20)
                    continue
            
            ecx_15 = (edx_14 << 4) + 0x9c8 + arg2
            int32_t eax_17 = (edx_14 + 0x9d) * 2
            *ecx_15 = zx.o(0)
            arg2[eax_17 * 2] = 0
            char* edx_15 = var_10
            *ecx_15 = esi_2
            arg2[eax_17 * 2 + 1] = edx_15
            break
        
        int32_t var_14 = 0
        var_10 = 0xa
        sub_5f5ee0(ecx_15 + 8, &var_14)
        return sub_4e4cb0(arg3)
    
    void* var_c
    eax_12 = sub_4daf40(&var_c, &var_10)
    int32_t esi_1 = 0
    var_10 = eax_12
    
    if (eax_12 s> 0)
        while (true)
            char eax_14 = sub_4db700(*(var_c + (esi_1 << 2)), eax_11)
            
            if (eax_14 != 0)
                break
            
            esi_1 += 1
            
            if (esi_1 s>= var_10)
                return eax_14
        
        goto label_5f6136

return eax_12
