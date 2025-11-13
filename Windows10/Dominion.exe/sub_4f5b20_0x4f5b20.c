// 函数: sub_4f5b20
// 地址: 0x4f5b20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* j_3 = arg2
int64_t* edi = arg3
void* j_5 = j_3
int64_t* var_34 = edi
void* i = j_3 - edi
void* j_2
int64_t var_24

if (i s>= 0x18c)
    int32_t ebx_1 = arg4
    
    do
        if (ebx_1 s<= 0)
            void* j_1 = j_3 - edi
            j_2 = j_1
            int32_t ecx_10 = j_1 s/ 0xc
            int32_t var_38_1 = ecx_10
            i = ecx_10 s>> 1
            void* i_2 = i
            
            if (i s> 0)
                void* j = i
                void* ebx_5 = edi + j * 0xc
                
                do
                    int32_t eax_18 = *(ebx_5 - 4)
                    ebx_5 -= 0xc
                    int32_t var_5c_4 = arg5
                    j -= 1
                    int32_t var_1c_1 = eax_18
                    var_24 = *ebx_5
                    i = sub_4f7410(&var_24, j, edi, ecx_10, &var_24)
                    ecx_10 = var_38_1
                while (j s> 0)
                
                j_1 = j_2
                j_3 = j_5
            
            if (ecx_10 s< 2)
                goto label_4f5dd6
            
            void* j_4 = j_3 - 0xc
            uint32_t eax_23
            
            do
                j_2 = j_4
                eax_23 = j_1 s/ 0xc
                
                if (eax_23 s>= 2)
                    int32_t var_1c_2 = *(j_4 + 8)
                    var_24 = *j_4
                    *j_4 = *edi
                    *(j_4 + 8) = edi[1].d
                    int32_t var_5c_5 = arg5
                    int32_t eax_29 = (j_4 - edi) s/ 0xc
                    eax_23 = sub_4f7410(eax_29, 0, edi, eax_29, &var_24)
                
                j_4 -= 0xc
                j_1 = j_2 - edi
            while (j_1 s>= 0x18)
            
            CookieCheckFunction(eax_23)
            return eax_23
        
        sub_4f6540(i, edi, &j_2, j_3, arg5)
        ebx_1 = (ebx_1 s>> 1) + (ebx_1 s>> 2)
        int64_t* var_44
        
        if ((j_2 - edi) s/ 0xc s>= (j_3 - var_44) s/ 0xc)
            sub_4f5b20(ebx_1, arg5)
            j_3 = j_2
            j_5 = j_3
        else
            sub_4f5b20(ebx_1, arg5)
            edi = var_44
            j_3 = j_5
            var_34 = edi
        
        i = j_3 - edi
    while (i s>= 0x18c)

if (edi != j_3)
    int64_t* ebx_3 = edi + 0xc
    
    if (ebx_3 != j_3)
        do
            int64_t xmm1_1 = *ebx_3
            int64_t* edx_7 = ebx_3
            int64_t xmm0_1 = *edi
            int32_t esi_3 = xmm1_1.d
            j_2.q = xmm1_1
            void* i_1 = ebx_3[1].d
            int32_t temp0_1 = xmm0_1.d
            bool cond:0_1 = esi_3 s< temp0_1
            
            if (esi_3 == temp0_1)
                cond:0_1 = xmm1_1:4.d s< xmm0_1:4.d
            
            void* eax_11
            eax_11.b = cond:0_1
            int64_t* eax_12 = ebx_3
            
            if (eax_11.b == 0)
                while (true)
                    int64_t xmm0_6 = *(eax_12 - 0xc)
                    eax_12 -= 0xc
                    var_24 = xmm0_6
                    int32_t temp1_1 = var_24.d
                    bool cond:2_1 = esi_3 s< temp1_1
                    
                    if (esi_3 == temp1_1)
                        cond:2_1 = xmm1_1:4.d s< var_24:4.d
                    
                    arg3.b = cond:2_1
                    
                    if (arg3.b == 0)
                        break
                    
                    *edx_7 = *eax_12
                    edx_7[1].d = eax_12[1].d
                    edx_7 = eax_12
                
                i = i_1
                edi = var_34
                *edx_7 = xmm1_1
                edx_7[1].d = i
            else
                uint32_t count = ebx_3 - edi
                memmove(eax_12 - count + 0xc, edi, count)
                i = i_1
                *edi = j_2.q
                edi[1].d = i
            
            ebx_3 += 0xc
        while (ebx_3 != j_5)

label_4f5dd6:
CookieCheckFunction(i)
return i
