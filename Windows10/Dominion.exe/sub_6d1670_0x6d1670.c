// 函数: sub_6d1670
// 地址: 0x6d1670
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t ecx = 0
uint32_t eax = arg3[2]

if (eax s< 0)
    ecx = eax

uint32_t var_8 = ecx
arg3[1] = ecx

if (ecx s< eax)
    while (true)
        uint32_t ecx_1 = arg3[1]
        int32_t esi_1 = arg3[2]
        uint32_t edx_2
        
        if (ecx_1 s>= esi_1)
            eax.b = 0
            edx_2 = ecx_1
        else
            char* ebx_1 = *arg3
            eax.b = ebx_1[ecx_1]
            
            if (eax.b u< 0x1c)
                if (ecx_1 s< esi_1)
                    edx_2 = ecx_1 + 1
                    eax.b = *(ecx_1 + *arg3)
                    arg3[1] = edx_2
                else
                    eax.b = 0
                    edx_2 = ecx_1
            else if (eax.b != 0x1e)
                sub_6d14d0(arg3)
                continue
            else
                eax = ecx_1 + 1
                
                if (eax s<= esi_1 && eax s>= 0)
                    arg3[1] = eax
                    
                    if (eax s>= esi_1)
                        continue
                    else
                        do
                            ecx_1.b = ebx_1[eax]
                            eax += 1
                            uint32_t edx = zx.d(ecx_1.b)
                            arg3[1] = eax
                            
                            if ((edx & 0xf).b == 0xf)
                                break
                            
                            if ((edx & 0xfffffff0) == 0xf0)
                                break
                        while (eax s< esi_1)
                        
                        continue
                
                arg3[1] = esi_1
                continue
        
        eax = zx.d(eax.b)
        
        if (eax == 0xc)
            if (edx_2 s< esi_1)
                eax.b = *(edx_2 + *arg3)
                edx_2 += 1
                arg3[1] = edx_2
            else
                eax.b = 0
            
            eax = zx.d(eax.b) | 0x100
        
        if (eax == arg2)
            uint32_t edx_3 = 0
            uint32_t ecx_4 = ecx_1 - var_8
            int32_t var_18_1 = 0
            int32_t var_14_1 = 0
            
            if (var_8 s>= 0 && ecx_4 s>= 0 && var_8 s<= esi_1 && ecx_4 s<= esi_1 - var_8)
                edx_3 = ecx_4
                var_18_1 = *arg3 + var_8
            
            *arg4 = var_18_1.q
            arg4[1].d = edx_3
            return arg4
        
        var_8 = edx_2
        
        if (edx_2 s>= esi_1)
            break

int32_t var_18 = 0
int32_t var_14 = 0

if (arg3[2] s>= 0)
    var_18 = *arg3

*arg4 = var_18.q
arg4[1].d = 0
return arg4
