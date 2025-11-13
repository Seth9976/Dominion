// 函数: sub_4f5990
// 地址: 0x4f5990
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx = arg2
int32_t* edi = arg3
void* var_18 = ebx
void* i = (ebx - edi) & 0xfffffffc

if (i s> 0x80)
    int32_t esi_1 = arg4
    
    do
        int32_t var_10
        
        if (esi_1 s<= 0)
            int32_t ebx_2 = ebx - edi
            i = ebx_2 s>> 2
            int32_t j = i s>> 1
            
            while (j s> 0)
                int32_t eax_13 = edi[j - 1]
                j -= 1
                void* var_2c_4 = arg5
                var_10 = eax_13
                sub_4f7240(&var_10, j, edi, i, &var_10)
            
            if (i s< 2)
                goto label_4f5b1a
            
            int32_t j_1
            
            do
                var_10 = *(edi + ebx_2 - 4)
                *(edi + ebx_2 - 4) = *edi
                void* var_2c_5 = arg5
                int32_t eax_18 = (ebx_2 - 4) s>> 2
                sub_4f7240(eax_18, 0, edi, eax_18, &var_10)
                ebx_2 -= 4
                j_1 = ebx_2 & 0xfffffffc
            while (j_1 s>= 8)
            
            return j_1
        
        sub_4f63c0(i, edi, &var_10, ebx, arg5)
        esi_1 = (esi_1 s>> 1) + (esi_1 s>> 2)
        int32_t* var_c
        
        if (((var_10 - edi) & 0xfffffffc) s>= ((ebx - var_c) & 0xfffffffc))
            sub_4f5990(esi_1, arg5)
            ebx = var_10
            var_18 = ebx
        else
            sub_4f5990(esi_1, arg5)
            edi = var_c
        
        i = (ebx - edi) & 0xfffffffc
    while (i s> 0x80)

if (edi != ebx)
    int32_t* i_2 = &edi[1]
    
    if (i_2 != ebx)
        do
            int32_t ebx_1 = *i_2
            void* i_1 = i_2
            
            if (ebx_1 s>= *edi)
                int32_t ecx_9 = i_2[-1]
                i = &i_2[-1]
                
                while (ebx_1 s< ecx_9)
                    *i_1 = ecx_9
                    i_1 = i
                    ecx_9 = *(i - 4)
                    i -= 4
                
                *i_1 = ebx_1
            else
                uint32_t count = i_2 - edi
                i = memmove(i_2 - count + 4, edi, count)
                *edi = ebx_1
            
            i_2 = &i_2[1]
        while (i_2 != var_18)

label_4f5b1a:
return i
