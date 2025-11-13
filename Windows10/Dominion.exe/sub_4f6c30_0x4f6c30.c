// 函数: sub_4f6c30
// 地址: 0x4f6c30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg2
int32_t* edi = arg3
int32_t var_18 = ebx
void* i = (ebx - edi) & 0xfffffffc

if (i s> 0x80)
    void* ecx = arg5
    int32_t esi_1 = arg4
    
    do
        int32_t var_10
        
        if (esi_1 s<= 0)
            void* ebx_2 = ebx - edi
            i = ebx_2 s>> 2
            int32_t j = i s>> 1
            
            while (j s> 0)
                int32_t eax_14 = edi[j - 1]
                j -= 1
                void* var_2c_4 = ecx
                var_10 = eax_14
                sub_4f7240(&var_10, j, edi, i, &var_10)
                ecx = arg5
            
            if (i s< 2)
                goto label_4f6dc3
            
            void* j_1
            
            do
                var_10 = *(edi + ebx_2 - 4)
                *(edi + ebx_2 - 4) = *edi
                void* var_2c_5 = ecx
                int32_t eax_19 = (ebx_2 - 4) s>> 2
                sub_4f7240(eax_19, 0, edi, eax_19, &var_10)
                ecx = arg5
                ebx_2 -= 4
                j_1 = ebx_2 & 0xfffffffc
            while (j_1 s>= 8)
            
            return j_1
        
        sub_4f78c0(i, edi, &var_10, ebx, ecx)
        esi_1 = (esi_1 s>> 1) + (esi_1 s>> 2)
        int32_t* var_c
        
        if (((var_10 - edi) & 0xfffffffc) s>= ((ebx - var_c) & 0xfffffffc))
            sub_4f6c30(esi_1, arg5)
            ebx = var_10
            var_18 = ebx
        else
            sub_4f6c30(esi_1, arg5)
            edi = var_c
        
        ecx = arg5
        i = (ebx - edi) & 0xfffffffc
    while (i s> 0x80)

if (edi != ebx)
    int32_t* i_2 = &edi[1]
    
    if (i_2 != ebx)
        do
            int32_t ebx_1 = *i_2
            int32_t* i_1 = i_2
            
            if (ebx_1 s>= *edi)
                int32_t ecx_10 = i_2[-1]
                i = &i_2[-1]
                
                while (ebx_1 s< ecx_10)
                    *i_1 = ecx_10
                    i_1 = i
                    ecx_10 = *(i - 4)
                    i -= 4
                
                *i_1 = ebx_1
            else
                uint32_t count = i_2 - edi
                i = memmove(i_2 - count + 4, edi, count)
                *edi = ebx_1
            
            i_2 = &i_2[1]
        while (i_2 != var_18)

label_4f6dc3:
return i
