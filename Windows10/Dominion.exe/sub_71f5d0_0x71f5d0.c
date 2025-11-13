// 函数: sub_71f5d0
// 地址: 0x71f5d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*arg6 = 8
arg6[2] = 0
arg6[1] = 0
void* (* const var_10)(uint32_t _Size) = malloc
int32_t* eax_1 = malloc(0x4818)
*eax_1 = arg3
sub_725250(eax_1)
eax_1[0x11f9] = 0
eax_1[0x11fa] = 0xffffffff
eax_1[0x11f1].b = 0xff
int32_t ebx
ebx.b = sub_722720(eax_1)
int32_t eax_3 = arg3[0x2d]
arg3[0x2a] = arg3[0x2c]
arg3[0x2b] = eax_3
free(eax_1)

if (ebx.b == 0xd8)
    int32_t* eax_4 = malloc(0x4818)
    *eax_4 = arg3
    int32_t var_3c_1 = 0
    uint32_t eax_6 = sub_7252d0(sub_725250(eax_4), arg2, eax_4, arg4, arg5)
    free(eax_4)
    return eax_6

int32_t eax_8 = sub_726640(arg3)
arg3[0x2a] = arg3[0x2c]
arg3[0x2b] = arg3[0x2d]

if (eax_8 != 0)
    int32_t* esi_2 = nullptr
    int32_t var_3c_3 = 0
    int32_t* edx_2
    int32_t* var_1c
    
    if (sub_7279d0(0, arg3) == 0)
        edx_2 = var_1c
    else
        int32_t var_18
        int32_t eax_10 = var_18
        
        if (eax_10 s< 8)
            eax_10 = 8
        
        edx_2 = nullptr
        *arg6 = eax_10
        int32_t var_1c_1 = 0
        *arg2 = *arg3
        *arg4 = arg3[1]
        
        if (arg5 != 0)
            *arg5 = arg3[2]
        
        esi_2 = var_1c
    free(edx_2)
    int32_t var_1c_2 = 0
    int32_t var_20
    free(var_20)
    int32_t var_20_1 = 0
    int32_t var_24
    free(var_24)
    return esi_2

int32_t eax_16 = sub_728810(arg3)
arg3[0x2a] = arg3[0x2c]
arg3[0x2b] = arg3[0x2d]

if (eax_16 != 0)
    int32_t* var_3c_7 = arg6
    int32_t var_40_2 = 0
    return sub_728e50(eax_16, arg2, arg3, arg4, arg5)

int32_t eax_18 = sub_72c020(arg3)
arg3[0x2a] = arg3[0x2c]
arg3[0x2b] = arg3[0x2d]

if (eax_18 != 0)
    return sub_72d3f0(arg4, arg5)

uint32_t eax_20 = sub_7202a0(arg3)
uint32_t eax_22 = sub_7202a0(arg3) + (eax_20 << 0x10)
arg3[0x2a] = arg3[0x2c]
int32_t ecx_23 = arg3[0x2d]
arg3[0x2b] = ecx_23

if (eax_22 == 0x38425053)
    int32_t var_3c_8 = ecx_23
    int32_t* var_40_3 = arg6
    return sub_72b070(eax_22, arg2, arg3, arg4, arg5, arg6)

if (sub_72b660(arg3, 0x88dd38) != 0)
    int32_t i_1 = 0x54
    int32_t i_2 = 0x54
    int32_t i
    
    do
        void* eax_25 = arg3[0x2a]
        
        if (eax_25 u< arg3[0x2b])
            arg3[0x2a] = eax_25 + 1
        else if (arg3[8] != 0)
            void* eax_29 = arg3[4](arg3[7], &arg3[0xa], arg3[9])
            
            if (eax_29 != 0)
                arg3[0x2b] = eax_29 + 0x28 + arg3
            else
                arg3[8] = eax_29
                arg3[0x2b] = arg3 + 0x29
                arg3[0xa].b = 0
            
            i_1 = i_2
            arg3[0x2a] = arg3 + 0x29
        
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)
    
    if (sub_72b660(arg3, "PICT") != 0)
        arg3[0x2a] = arg3[0x2c]
        int32_t eax_64 = arg3[0x2d]
        arg3[0x2b] = eax_64
        return sub_72be50(eax_64, arg2, arg3, arg4, arg5)

int32_t eax_34 = arg3[0x2d]
arg3[0x2a] = arg3[0x2c]
arg3[0x2b] = eax_34

if (sub_72e200(arg3) == 0)
    int32_t eax_57 = sub_72d560(arg3)
    
    if (eax_57 != 0)
        int32_t* esi_11 = arg5
        int32_t* edi_2 = arg4
        int32_t* var_3c_13 = arg6
        int32_t var_40_6 = 0
        float* eax_58 = sub_72d900(eax_57, arg2, arg3, edi_2, esi_11)
        return sub_7208e0(eax_58, *arg2, eax_58, esi_11, edi_2, *edi_2, *esi_11)
    
    int32_t eax_60 = sub_72a0d0(arg3)
    
    if (eax_60 == 0)
        return 0
    
    int32_t* var_3c_14 = arg6
    int32_t var_40_7 = 0
    return sub_72a480(eax_60, arg2, arg3, arg4, arg5)

if (sub_72e6b0(&arg3[1], arg3, arg3, &arg3[1], &arg3[2]) != 0)
    *arg2 = *arg3
    *arg4 = arg3[1]
    
    if (arg5 != 0)
        *arg5 = arg3[2]
    
    int32_t esi_8 = arg3[2]
    int32_t ebx_4 = arg3[1]
    int32_t ecx_33 = *arg3
    
    if (esi_8 s>= 0 && ecx_33 s>= 0)
        int32_t eax_41
        int32_t edx_7
        
        if (ecx_33 != 0)
            edx_7:eax_41 = 0x7fffffff
        
        if (ecx_33 == 0 || esi_8 s<= divs.dp.d(edx_7:eax_41, ecx_33))
            int32_t* eax_44 = esi_8 * ecx_33
            
            if (eax_44 s>= 0 && ebx_4 s>= 0)
                int32_t eax_45
                int32_t edx_9
                
                if (ebx_4 != 0)
                    edx_9:eax_45 = 0x7fffffff
                
                if (ebx_4 == 0 || eax_44 s<= divs.dp.d(edx_9:eax_45, ebx_4))
                    int32_t ecx_34
                    int32_t esi_9
                    
                    if (ecx_33 != 0)
                        if (esi_8 s<= divs.dp.d(0x7fffffff, ecx_33))
                            esi_9 = esi_8 * ecx_33
                            ecx_34 = esi_9
                            goto label_71f955
                    else
                        ecx_34 = ecx_33 * esi_8
                        esi_9 = ecx_34
                    label_71f955:
                        int32_t eax_49
                        int32_t edx_13
                        
                        if (ebx_4 != 0)
                            edx_13:eax_49 = 0x7fffffff
                        
                        if (ebx_4 == 0 || ecx_34 s<= divs.dp.d(edx_13:eax_49, ebx_4))
                            int32_t eax_51 = malloc(ebx_4 * esi_9)
                            
                            if (eax_51 != 0)
                                uint32_t eax_54 = arg3[2] * arg3[1] * *arg3
                                sub_720200(eax_54, eax_51, arg3, eax_54)
                                return eax_51

return 0
