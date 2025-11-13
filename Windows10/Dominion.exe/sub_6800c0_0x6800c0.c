// 函数: sub_6800c0
// 地址: 0x6800c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int64_t* j_3 = arg2
int64_t* edi = arg3
int64_t* j_5 = j_3
void* i = j_3 - edi
int64_t* j_2

if (i s>= 0x18c)
    int32_t ecx = arg5
    int32_t esi_1 = arg4
    
    do
        if (esi_1 s<= 0)
            void* j_1 = j_3 - edi
            j_2 = j_1
            i = j_1 s/ 0xc
            int32_t j = i s>> 1
            int64_t var_14
            
            if (j s> 0)
                void* ebx = edi + j * 0xc
                
                do
                    int32_t eax_17 = *(ebx - 4)
                    ebx -= 0xc
                    j -= 1
                    int32_t var_3c_4 = ecx
                    int32_t var_c_1 = eax_17
                    var_14 = *ebx
                    sub_6811e0(&var_14, j, edi, i, &var_14)
                    ecx = arg5
                while (j s> 0)
                
                j_1 = j_2
            
            if (i s< 2)
                goto label_68031f
            
            void* j_4 = j_5 - 0xc
            int32_t eax_22
            
            do
                j_2 = j_4
                eax_22 = j_1 s/ 0xc
                
                if (eax_22 s>= 2)
                    int32_t var_c_2 = *(j_4 + 8)
                    var_14 = *j_4
                    *j_4 = *edi
                    *(j_4 + 8) = edi[1].d
                    int32_t var_3c_5 = ecx
                    int32_t eax_28 = (j_4 - edi) s/ 0xc
                    eax_22 = sub_6811e0(eax_28, 0, edi, eax_28, &var_14)
                
                j_4 -= 0xc
                ecx = arg5
                j_1 = j_2 - edi
            while (j_1 s>= 0x18)
            
            return eax_22
        
        sub_680850(i, edi, &j_2, j_3, ecx)
        esi_1 = (esi_1 s>> 1) + (esi_1 s>> 2)
        int64_t* var_1c
        
        if ((j_2 - edi) s/ 0xc s>= (j_3 - var_1c) s/ 0xc)
            sub_6800c0(esi_1, arg5)
            j_3 = j_2
            j_5 = j_3
        else
            sub_6800c0(esi_1, arg5)
            edi = var_1c
        
        ecx = arg5
        i = j_3 - edi
    while (i s>= 0x18c)

if (edi != j_3)
    void* i_3 = edi + 0xc
    
    if (i_3 != j_5)
        uint32_t count = 0xc
        uint32_t count_1 = 0xc
        
        do
            int64_t xmm1_1 = *i_3
            void* i_2 = i_3
            int32_t i_1 = *(i_3 + 8)
            j_2.q = xmm1_1
            
            if (i_1 s>= edi[1].d)
                i = count - 0xc + edi
                
                if (i_1 s< *(edi + count - 4))
                    do
                        *i_2 = *i
                        *(i_2 + 8) = *(i + 8)
                        i_2 = i
                        i -= 0xc
                    while (i_1 s< *(i + 8))
                    
                    count = count_1
                
                *i_2 = xmm1_1
                *(i_2 + 8) = i_1
            else
                i = memmove(i_3 - count + 0xc, edi, count)
                count = count_1
                *edi = j_2.q
                edi[1].d = i_1
            
            i_3 += 0xc
            count += 0xc
            count_1 = count
        while (i_3 != j_5)

label_68031f:
return i
