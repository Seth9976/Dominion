// 函数: sub_583350
// 地址: 0x583350
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* edi = arg1
void* var_88 = edi
void* result = *(edi + 0x1504)

if (result != 3 && result != 5 && result != 6)
    int32_t var_20[0x6]
    sub_58bc10(arg1, &var_20)
    int32_t ebx_1 = *(edi + 0xd38)
    int32_t esi_1 = 0
    void var_84
    
    if (ebx_1 s> 0)
        void* edi_1 = &var_84
        int32_t eax_4
        int32_t edx_2
        edx_2:eax_4 = sx.q(*(edi + 0x19e0) - 1)
        int32_t temp0_1 = divs.dp.d(edx_2:eax_4, ebx_1)
        
        do
            edi_1 += 0x10
            int32_t eax_6 = temp0_1
            *(edi_1 - 0x10) = var_20[esi_1]
            
            if (esi_1 s<= mods.dp.d(edx_2:eax_4, ebx_1))
                eax_6 = temp0_1 + 1
            
            *(edi_1 - 0xc) = esi_1
            esi_1 += 1
            *(edi_1 - 8) = eax_6
        while (esi_1 s< ebx_1)
        
        edi = var_88
    
    int32_t ebx_2 = ebx_1 << 4
    int32_t eax_8 = ebx_2 s>> 4
    sub_594410(eax_8, &var_84 + ebx_2, &var_84, eax_8, sub_583320)
    result = *(edi + 0xd38)
    void* result_2 = nullptr
    void* result_1 = result
    int32_t* ecx_3
    
    if (result s> 0)
        void var_90
        ecx_3 = &var_90
        
        do
            int32_t eax_13
            int32_t esi_2
            
            if (result_2 s> 0 && ecx_3[3] == ecx_3[-1])
                int32_t eax_12
                int32_t edx_6
                edx_6:eax_12 = sx.q(*(edi + 0x19e0) - 1)
                int32_t temp1_2 = mods.dp.d(edx_6:eax_12, *(edi + 0xd38))
                eax_13 = divs.dp.d(edx_6:eax_12, *(edi + 0xd38))
                esi_2 = eax_13
                
                if (ecx_3[4] s<= temp1_2)
                    esi_2 = eax_13 + 1
                
                if (*ecx_3 s<= temp1_2)
                    eax_13 += 1
            
            if (result_2 s<= 0 || ecx_3[3] != ecx_3[-1] || esi_2 != eax_13)
                result = result_2
            else
                result = ecx_3[2]
            
            edi = var_88
            result_2 += 1
            ecx_3[6] = result
            ecx_3 = &ecx_3[4]
        while (result_2 s< result_1)
    
    int32_t i = 0
    
    if (*(edi + 0xd38) s> 0)
        void var_78
        void* esi_3 = &var_78
        
        do
            result = *(edi + 0x1504)
            
            if (result != 3 && result != 5 && result != 4 && result != 6)
                ecx_3.b = result == 2
                result, ecx_3 = sub_61b1b0(result, 0x20, ecx_3.b, *(esi_3 - 8), 0, *(esi_3 - 0xc), 
                    *esi_3, *(esi_3 - 4), nullptr, 0, 0, 0, 0, 0)
            
            i += 1
            esi_3 += 0x10
        while (i s< *(edi + 0xd38))

CookieCheckFunction(result)
return result
