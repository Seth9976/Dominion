// 函数: sub_64fe30
// 地址: 0x64fe30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm1 = arg7
int32_t xmm0 = (zx.o(0)).d

if (not(0f > xmm1))
    xmm0 = _mm_min_ss(0x3f800000, xmm1)

xmm1 f- xmm0
arg1:1.b = (xmm1 f== xmm0 ? 1 : 0) << 6 | (is_unordered.d(xmm1, xmm0) ? 1 : 0) << 2
    | (xmm1 f< xmm0 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    sub_63b870(arg1, &data_801800, "fraction == ClampUnit(fraction)", "C:\x\ax2017\Engine\UI2.cpp", 
        0x12ad, "AddMapToMerge")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* eax_1 = *(arg6 + 8)
int32_t* edx_2
int32_t esi_2

if (eax_1 == 0 || *eax_1 == 0 || arg3 == 0)
    esi_2 = arg2
    edx_2 = arg5
else
    int32_t* eax_2 = sub_6dd1e0(eax_1, arg3, &data_8cae70, data_1724a80, 0x69)
    int32_t ebx_1
    int32_t edi_1
    
    if (eax_2 != 0)
        ebx_1 = eax_2[2]
        edi_1 = 0
    
    if (eax_2 == 0 || ebx_1 s<= 0)
    label_64fed6:
        xmm1 = arg7
        esi_2 = arg2
        edx_2 = arg5
    else
        int32_t* esi_1 = *eax_2
        
        while (true)
            char* ecx = *esi_1
            char* eax_3 = eax_1
            int32_t eax_5
            
            while (true)
                char edx_1 = *eax_3
                char temp0_1 = *ecx
                bool c_1 = edx_1 u< temp0_1
                
                if (edx_1 == temp0_1)
                    if (edx_1 == 0)
                        eax_5 = 0
                        break
                    
                    edx_1 = eax_3[1]
                    char temp1_1 = ecx[1]
                    c_1 = edx_1 u< temp1_1
                    
                    if (edx_1 == temp1_1)
                        eax_3 = &eax_3[2]
                        ecx = &ecx[2]
                        
                        if (edx_1 != 0)
                            continue
                        
                        eax_5 = 0
                        break
                
                eax_5 = sbb.d(eax_3, eax_3, c_1) | 1
                break
            
            if (eax_5 == 0)
                edx_2 = arg5
                esi_2 = arg2
                xmm1 = arg7
                
                if (esi_1 != 0xffffffe8)
                    int32_t eax_10 = *edx_2
                    *(esi_2 + (eax_10 << 2)) = &esi_1[6]
                    *edx_2 = eax_10 + 1
                    *(arg4 + ((eax_10 + 1) << 2) - 4) = xmm1
                
                break
            
            edi_1 += 1
            esi_1 = &esi_1[0xc]
            
            if (edi_1 s>= ebx_1)
                goto label_64fed6

int32_t ecx_1 = *edx_2
*(esi_2 + (ecx_1 << 2)) = arg6 + 0x18
*arg5 = ecx_1 + 1
*(arg4 + ((ecx_1 + 1) << 2) - 4) = xmm1
return arg4
