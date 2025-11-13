// 函数: sub_6c3490
// 地址: 0x6c3490
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void** edi = arg3
void* var_8 = arg2
void* i = (arg2 - edi) & 0xfffffff8
void* i_2

if (i s> 0x100)
    int32_t esi_1 = arg4
    
    do
        if (esi_1 s<= 0)
            int32_t edx_3 = arg2 - edi
            i = edx_3 s>> 3
            int32_t j = i s>> 1
            
            while (j s> 0)
                void* i_3 = edi[j * 2 - 2]
                j -= 1
                i_2 = i_3
                int32_t var_14_2 = edi[j * 2 + 1]
                sub_6c38e0(&i_2, j, edi, i, &i_2, arg5)
            
            if (i s< 2)
                goto label_6c3675
            
            int32_t j_1
            
            do
                int32_t ecx_11 = *(edi + edx_3 - 4)
                i_2 = *(edi + edx_3 - 8)
                int32_t var_14_3 = ecx_11
                int32_t ecx_12 = edi[1]
                *(edi + edx_3 - 8) = *edi
                *(edi + edx_3 - 4) = ecx_12
                int32_t eax_19 = (edx_3 - 8) s>> 3
                sub_6c38e0(eax_19, 0, edi, eax_19, &i_2, arg5)
                edx_3 -= 8
                j_1 = edx_3 & 0xfffffff8
            while (j_1 s>= 0x10)
            
            return j_1
        
        sub_6c3680(i, edi, &i_2, arg2, arg5)
        esi_1 = (esi_1 s>> 1) + (esi_1 s>> 2)
        void** var_14
        
        if (((i_2 - edi) & 0xfffffff8) s>= ((var_8 - var_14) & 0xfffffff8))
            sub_6c3490(esi_1, arg5)
            arg2 = i_2
            var_8 = arg2
        else
            sub_6c3490(esi_1, arg5)
            edi = var_14
            arg2 = var_8
        
        i = (arg2 - edi) & 0xfffffff8
    while (i s> 0x100)

if (edi != arg2)
    int32_t* esi_3 = &edi[2]
    int32_t* var_10_1 = esi_3
    
    if (esi_3 != arg2)
        void** var_c_1 = edi
        
        do
            void** ebx_1 = esi_3
            int32_t ecx_6 = esi_3[1]
            i_2 = *esi_3
            
            if (arg5(&i_2, edi) == 0)
                void** esi_6 = var_c_1
                
                if (arg5(&i_2, var_c_1) != 0)
                    char i_1
                    
                    do
                        int32_t ecx_14 = esi_6[1]
                        *ebx_1 = *esi_6
                        ebx_1[1] = ecx_14
                        ebx_1 = esi_6
                        esi_6 -= 8
                        i_1 = arg5(&i_2, esi_6)
                    while (i_1 != 0)
                
                i = i_2
                esi_3 = var_10_1
                *ebx_1 = i
                ebx_1[1] = ecx_6
            else
                void* count = esi_3 - edi
                memmove(esi_3 - count + 8, edi, count)
                i = i_2
                *edi = i
                edi[1] = ecx_6
            
            var_c_1 = &var_c_1[2]
            esi_3 = &esi_3[2]
            var_10_1 = esi_3
        while (esi_3 != var_8)

label_6c3675:
return i
