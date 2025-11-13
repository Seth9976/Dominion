// 函数: sub_73ad90
// 地址: 0x73ad90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void** edi = arg3
int32_t* var_24 = arg2
void** var_14 = edi
void* i = (arg2 - edi) & 0xfffffffc
int32_t* var_10

if (i s> 0x80)
    int32_t esi_1 = arg4
    
    do
        if (esi_1 s<= 0)
            int32_t edx_3 = arg2 - edi
            int32_t ecx_8 = edx_3 s>> 2
            int32_t var_18_2 = ecx_8
            int32_t j = ecx_8 s>> 1
            
            while (j s> 0)
                int32_t* eax_14 = edi[j - 1]
                j -= 1
                var_10 = eax_14
                i = sub_73b150(&var_10, j, edi, ecx_8, &var_10, arg5)
                ecx_8 = var_18_2
            
            if (ecx_8 s< 2)
                goto label_73af80
            
            int32_t j_1
            
            do
                var_10 = *(edi + edx_3 - 4)
                *(edi + edx_3 - 4) = *edi
                int32_t eax_19 = (edx_3 - 4) s>> 2
                sub_73b150(eax_19, 0, edi, eax_19, &var_10, arg5)
                edx_3 -= 4
                j_1 = edx_3 & 0xfffffffc
            while (j_1 s>= 8)
            
            return j_1
        
        sub_73af90(i, edi, &var_10, arg2, arg5)
        esi_1 = (esi_1 s>> 1) + (esi_1 s>> 2)
        void** var_c
        
        if (((var_10 - edi) & 0xfffffffc) s>= ((var_24 - var_c) & 0xfffffffc))
            sub_73ad90(esi_1, arg5)
            arg2 = var_10
            var_24 = arg2
        else
            sub_73ad90(esi_1, arg5)
            edi = var_c
            arg2 = var_24
            var_14 = edi
        
        i = (arg2 - edi) & 0xfffffffc
    while (i s> 0x80)

if (edi != arg2)
    int32_t* esi_3 = &edi[1]
    var_10 = esi_3
    
    if (esi_3 != arg2)
        void** var_18_1 = edi
        
        do
            void* i_2 = *esi_3
            void** var_1c_1 = esi_3
            
            if (arg5(&i_2, edi) == 0)
                void** esi_6 = var_18_1
                
                if (arg5(&i_2, var_18_1) != 0)
                    void** edi_1 = var_1c_1
                    char i_1
                    
                    do
                        *edi_1 = *esi_6
                        edi_1 = esi_6
                        esi_6 -= 4
                        i_1 = arg5(&i_2, esi_6)
                    while (i_1 != 0)
                    var_1c_1 = edi_1
                    edi = var_14
                
                i = i_2
                esi_3 = var_10
                *var_1c_1 = i
            else
                void* count = esi_3 - edi
                memmove(esi_3 - count + 4, edi, count)
                i = i_2
                *edi = i
            
            var_18_1 = &var_18_1[1]
            esi_3 = &esi_3[1]
            var_10 = esi_3
        while (esi_3 != var_24)

label_73af80:
return i
