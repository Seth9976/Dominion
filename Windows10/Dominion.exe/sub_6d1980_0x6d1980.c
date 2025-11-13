// 函数: sub_6d1980
// 地址: 0x6d1980
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0
int32_t var_10 = 0
int32_t var_c = 0
void var_28
void arg_14
int64_t* eax_1 = sub_6d1670(&var_28, 0x12, &arg_14, &var_28)
int32_t esi = 0
int32_t i = eax_1[1].d
int64_t var_1c = *eax_1
int32_t i_2 = i

for (; var_1c:4.d s< i; i = i_2)
    (&var_10)[esi] = sub_6d14d0(&var_1c)
    esi += 1
    
    if (esi s>= 2)
        break

if (var_c != 0)
    int32_t ecx_2 = var_10
    
    if (ecx_2 != 0)
        int32_t edx = 0
        var_1c.d = 0
        var_1c:4.d = 0
        int32_t arg_8
        
        if (var_c s>= 0 && ecx_2 s>= 0 && var_c s<= arg2 && ecx_2 s<= arg2 - var_c)
            edx = ecx_2
            var_1c.d = arg_8 + var_c
        
        int32_t var_14 = edx
        var_1c = var_1c
        int64_t* eax_8
        int32_t edx_1
        eax_8, edx_1 = sub_6d1670(&var_28, 0x13, &var_1c, &var_28)
        int32_t esi_1 = 0
        int32_t i_1 = eax_8[1].d
        var_1c = *eax_8
        int32_t i_3 = i_1
        
        for (; var_1c:4.d s< i_1; i_1 = i_3)
            uint32_t eax_9
            eax_9, edx_1 = sub_6d14d0(&var_1c)
            (&var_8)[esi_1] = eax_9
            esi_1 += 1
            
            if (esi_1 s>= 1)
                break
        
        int32_t eax_10 = var_8
        
        if (eax_10 == 0)
            *arg1 = 0
            arg1[1] = 0
            arg1[2] = 0
            return arg1
        
        int32_t eax_12 = eax_10 + var_c
        int32_t arg_c
        
        if (eax_12 s<= arg2)
            arg_c = eax_12
        
        if (eax_12 s> arg2 || eax_12 s< 0)
            arg_c = arg2
        
        int64_t* eax_14 = sub_6d13e0(&var_28, edx_1, &arg_8, &var_28)
        int32_t ecx_6 = eax_14[1].d
        *arg1 = *eax_14
        arg1[2] = ecx_6
        return arg1

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
return arg1
