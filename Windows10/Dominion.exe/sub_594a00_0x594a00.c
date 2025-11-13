// 函数: sub_594a00
// 地址: 0x594a00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int128_t* esi = arg2
int128_t* ebx = arg3
int128_t* var_8 = esi
int128_t var_34
void* i

for (i = esi - ebx; i s>= 0x39c; i = esi - ebx)
    if (arg4 s<= 0)
        void* j_1 = esi - ebx
        int32_t ecx_13 = j_1 s/ 0x1c
        int32_t var_c_2 = ecx_13
        i = ecx_13 s>> 1
        void* i_2 = i
        
        if (i s> 0)
            int32_t j = i
            i = ebx + j * 0x1c
            
            do
                j -= 1
                var_34 = *(i - 0x1c)
                int32_t var_1c_2 = *(i - 4)
                int64_t var_24_2 = *(i - 0xc)
                sub_596d90(&var_34, j, ebx, ecx_13, &var_34, arg5)
                i -= 0x1c
                ecx_13 = var_c_2
            while (j s> 0)
        
        if (ecx_13 s< 2)
            goto label_594cb1
        
        void* ecx_16 = var_8 - 0x1c
        void* var_c_3 = ecx_16
        int32_t eax_23
        
        do
            void* var_14_2 = ecx_16
            eax_23 = j_1 s/ 0x1c
            
            if (eax_23 s>= 2)
                int32_t var_1c_3 = *(ecx_16 + 0x18)
                var_34 = *ecx_16
                int64_t var_24_3 = *(ecx_16 + 0x10)
                *ecx_16 = *ebx
                *(ecx_16 + 0x10) = ebx[1].q
                *(ecx_16 + 0x18) = *(ebx + 0x18)
                int32_t eax_29 = (ecx_16 - ebx) s/ 0x1c
                eax_23 = sub_596d90(eax_29, 0, ebx, eax_29, &var_34, arg5)
                ecx_16 = var_c_3
            
            ecx_16 -= 0x1c
            j_1 = var_14_2 - ebx
            var_c_3 = ecx_16
        while (j_1 s>= 0x38)
        
        return eax_23
    
    int128_t* var_18
    sub_595ce0(i, ebx, &var_18, esi, arg5)
    arg4 = (arg4 s>> 1) + (arg4 s>> 2)
    int128_t* var_14
    
    if ((var_18 - ebx) s/ 0x1c s>= (esi - var_14) s/ 0x1c)
        sub_594a00(arg4, arg5)
        esi = var_18
        var_8 = esi
    else
        sub_594a00(arg4, arg5)
        ebx = var_14
        esi = var_8

if (ebx != esi)
    int128_t* esi_4 = ebx + 0x1c
    int128_t* var_10_1 = esi_4
    
    if (esi_4 != var_8)
        int128_t* var_c_1 = ebx
        
        do
            void* i_3 = *(esi_4 + 0x18)
            int128_t* edi_1 = esi_4
            var_34 = *esi_4
            int64_t xmm0_2 = esi_4[1].q
            
            if (arg5(&var_34, ebx) == 0)
                int128_t* esi_6 = var_c_1
                
                if (arg5(&var_34, var_c_1) != 0)
                    char i_1
                    
                    do
                        *edi_1 = *esi_6
                        edi_1[1].q = esi_6[1].q
                        *(edi_1 + 0x18) = *(esi_6 + 0x18)
                        edi_1 = esi_6
                        esi_6 -= 0x1c
                        i_1 = arg5(&var_34, esi_6)
                    while (i_1 != 0)
                
                i = i_3
                esi_4 = var_10_1
                *edi_1 = var_34
                edi_1[1].q = xmm0_2
                *(edi_1 + 0x18) = i
            else
                void* count = esi_4 - ebx
                memmove(esi_4 - count + 0x1c, ebx, count)
                i = i_3
                *ebx = var_34
                ebx[1].q = xmm0_2
                *(ebx + 0x18) = i
            
            var_c_1 += 0x1c
            esi_4 += 0x1c
            var_10_1 = esi_4
        while (esi_4 != var_8)

label_594cb1:
return i
