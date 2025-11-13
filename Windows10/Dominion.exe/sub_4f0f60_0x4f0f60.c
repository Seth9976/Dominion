// 函数: sub_4f0f60
// 地址: 0x4f0f60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = arg2
uint32_t ebx = arg3
uint32_t edx = arg4
arg3.b = 0
int32_t edi = 0
uint32_t var_d80 = eax_2
uint32_t var_d70 = edx
uint32_t var_d6c = arg3
uint32_t var_d78 = 0

if (*(eax_2 + 0xd4) s< 0x1f4)
    int128_t var_50 = *arg6
    int128_t var_40_1 = arg6[1]
    int128_t var_30_1 = arg6[2]
    int128_t var_20_1 = arg6[3]
    
    if (arg5 != *(edx + 0x6c))
        int32_t edi_1 = arg5
        int32_t esi_2 = 0
        
        if (edi_1 s> 0)
            int32_t* edi_3 = edx + 0x70
            
            do
                int32_t ecx_7 = 0
                int32_t eax_13 = esi_2 & 0x3f
                int32_t edx_6 = 1 << (eax_13 u% 0x20)
                
                if (eax_13 u>= 0x20)
                    ecx_7 = edx_6
                
                int32_t edx_7 = edx_6 ^ ecx_7
                
                if (eax_13 u>= 0x40)
                    ecx_7 = edx_7
                
                uint32_t eax_15 = esi_2 u>> 6
                
                if (((edx_7 & *(&var_50 + (eax_15 << 3))) | (ecx_7 & *(&var_50:4 + (eax_15 << 3))))
                        == 0)
                    int32_t ecx_15 = *edi_3 * 0x64
                    int32_t edx_14 = *(edx + ((edi_1 + 0x1c) << 2)) * 0x64
                    
                    if (*(ecx_15 + ebx + 0x1a4c) != *(edx_14 + ebx + 0x1a4c)
                            || *(ecx_15 + ebx + 0x1a70) != *(edx_14 + ebx + 0x1a70))
                        arg3 = var_d6c
                    else
                        arg3 = zx.d(var_d6c.b)
                        
                        if (*(ecx_15 + ebx + 0x1a50) == *(edx_14 + ebx + 0x1a50))
                            arg3 = 1
                        
                        var_d6c = arg3
                else
                    var_d78 += 1
                    arg3 = var_d6c
                
                esi_2 += 1
                edi_3 = &edi_3[1]
            while (esi_2 s< arg5)
            
            edx = var_d70
            edi_1 = arg5
        
        eax_2 = var_d78
        
        if (eax_2 s<= *(edx + 0x5c) && *(edx + 0x6c) - edi_1 + eax_2 s>= *(edx + 0x60))
            if (arg3.b == 0)
                int32_t eax_17
                int32_t edx_10
                edx_10:eax_17 = sx.q(edi_1)
                int32_t temp1_1 = mods.dp.d(edx_10:eax_17, 0x40)
                void* esi_6 = &var_50 + (divs.dp.d(edx_10:eax_17, 0x40) << 3)
                int32_t edi_4 = 1 << (temp1_1 u% 0x20)
                int32_t ebx_2 = 0
                
                if (temp1_1 u>= 0x20)
                    ebx_2 = edi_4
                
                int32_t edi_5 = edi_4 ^ ebx_2
                
                if (temp1_1 u>= 0x40)
                    ebx_2 = edi_5
                
                int32_t eax_20 = *(esi_6 + 4) | ebx_2
                *esi_6 |= edi_5
                *(esi_6 + 4) = eax_20
                sub_4f0f60(var_d70, arg5 + 1, &var_50)
                edx = var_d70
                *esi_6 &= not.d(edi_5)
                edi_1 = arg5
                *(esi_6 + 4) &= not.d(ebx_2)
            
            eax_2 = sub_4f0f60(edx, edi_1 + 1, &var_50)
    else
        void var_d68
        sub_5939a0(&var_d68, edx)
        eax_2 = var_d70
        int32_t esi_1 = 0
        int32_t ecx_1 = *(eax_2 + 0x6c)
        
        if (ecx_1 s> 0)
            void* ebx_1 = eax_2 + 0x70
            
            do
                int32_t ecx_2 = 0
                int32_t eax_5 = esi_1 & 0x3f
                int32_t edx_1 = 1 << (eax_5 u% 0x20)
                
                if (eax_5 u>= 0x20)
                    ecx_2 = edx_1
                
                int32_t edx_2 = edx_1 ^ ecx_2
                
                if (eax_5 u>= 0x40)
                    ecx_2 = edx_2
                
                uint32_t eax_7 = esi_1 u>> 6
                
                if (((edx_2 & *(&var_50 + (eax_7 << 3))) | (ecx_2 & *(&var_50:4 + (eax_7 << 3))))
                        != 0)
                    int32_t var_cf8[0x32a]
                    var_cf8[edi] = *ebx_1
                    edi += 1
                
                esi_1 += 1
                ebx_1 += 4
            while (esi_1 s< ecx_1)
            
            eax_2 = var_d70
        
        int32_t var_cfc_1 = edi
        
        if (edi s>= *(eax_2 + 0x60) && edi s<= *(eax_2 + 0x5c))
            uint32_t eax_10 = sub_4efcf0(&var_d68, var_d80, ebx, &var_d68)
            CookieCheckFunction(eax_10)
            return eax_10

CookieCheckFunction(eax_2)
return eax_2
