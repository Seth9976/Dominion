// 函数: sub_4f5de0
// 地址: 0x4f5de0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* ebx = arg2
int32_t* edi = arg3
void* var_1c = ebx
void* i = ebx - edi
int64_t var_28
int64_t var_18

if (i s>= 0x18c)
    int32_t esi_1 = arg4
    
    do
        if (esi_1 s<= 0)
            void* j_1 = ebx - edi
            int32_t edx_8
            edx_8:i = muls.dp.d(0x2aaaaaab, j_1)
            var_28.d = j_1
            int32_t ecx_10 = j_1 s/ 0xc
            int32_t var_20_2 = ecx_10
            int32_t j = ecx_10 s>> 1
            
            if (j s> 0)
                void* ebx_1 = &edi[j * 3]
                
                do
                    int32_t eax_15 = *(ebx_1 - 4)
                    ebx_1 -= 0xc
                    int32_t var_3c_4 = arg5
                    j -= 1
                    int32_t var_10_1 = eax_15
                    var_18 = *ebx_1
                    i = sub_4f7550(&var_18, j, edi, ecx_10, &var_18)
                    ecx_10 = var_20_2
                while (j s> 0)
                
                j_1 = var_28.d
            
            if (ecx_10 s< 2)
                goto label_4f6048
            
            void* esi_10 = var_1c - 0xc
            int32_t eax_20
            
            do
                var_28.d = esi_10
                eax_20 = j_1 s/ 0xc
                
                if (eax_20 s>= 2)
                    int32_t var_10_2 = *(esi_10 + 8)
                    var_18 = *esi_10
                    *esi_10 = *edi
                    *(esi_10 + 8) = edi[2]
                    int32_t var_3c_5 = arg5
                    int32_t eax_26 = (esi_10 - edi) s/ 0xc
                    eax_20 = sub_4f7550(eax_26, 0, edi, eax_26, &var_18)
                
                esi_10 -= 0xc
                j_1 = var_28.d - edi
            while (j_1 s>= 0x18)
            
            CookieCheckFunction(eax_20)
            return eax_20
        
        sub_4f69d0(i, edi, &var_28, ebx, arg5)
        esi_1 = (esi_1 s>> 1) + (esi_1 s>> 2)
        
        if ((var_28.d - edi) s/ 0xc s>= (ebx - var_28:4.d) s/ 0xc)
            sub_4f5de0(esi_1, arg5)
            ebx = var_28.d
            var_1c = ebx
        else
            sub_4f5de0(esi_1, arg5)
            edi = var_28:4.d
        
        i = ebx - edi
    while (i s>= 0x18c)

if (edi != ebx)
    int64_t* esi_7 = &edi[3]
    
    if (esi_7 != ebx)
        do
            int64_t xmm1_1 = *esi_7
            int64_t* edx_7 = esi_7
            void* i_2 = esi_7[1].d
            var_18 = xmm1_1
            int32_t i_1 = var_18.d
            var_28 = xmm1_1
            
            if (i_1 s>= *edi)
                void* eax_27 = esi_7 - 0xc
                
                if (i_1 s< *(esi_7 - 0xc))
                    do
                        *edx_7 = *eax_27
                        edx_7[1].d = *(eax_27 + 8)
                        edx_7 = eax_27
                        eax_27 -= 0xc
                    while (i_1 s< *eax_27)
                
                i = i_2
                *edx_7 = xmm1_1
                edx_7[1].d = i
            else
                uint32_t count = esi_7 - edi
                memmove(esi_7 - count + 0xc, edi, count)
                i = i_2
                *edi = var_28
                edi[2] = i
            
            esi_7 += 0xc
        while (esi_7 != var_1c)

label_4f6048:
CookieCheckFunction(i)
return i
