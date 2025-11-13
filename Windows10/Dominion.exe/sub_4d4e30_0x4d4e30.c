// 函数: sub_4d4e30
// 地址: 0x4d4e30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* i_6 = arg2
int32_t* edi = arg3
int32_t* i_7 = i_6
int32_t* var_14 = edi
int32_t* i_2
void* i

for (i = (i_6 - edi) & 0xfffffffc; i s> 0x80; i = (i_6 - edi) & 0xfffffffc)
    if (arg4 s<= 0)
        int32_t esi = i_6 - edi
        int32_t var_20 = esi
        int32_t ecx_8 = esi s>> 2
        int32_t var_18_1 = ecx_8
        i = ecx_8 s>> 1
        i_2 = i
        
        if (i s> 0)
            int32_t j = i
            
            do
                int32_t* i_4 = edi[j - 1]
                j -= 1
                i_2 = i_4
                i = sub_4d5a00(&i_2, j, edi, ecx_8, &i_2, arg5)
                ecx_8 = var_18_1
            while (j s> 0)
            
            esi = var_20
        
        if (ecx_8 s< 2)
            goto label_4d5019
        
        int32_t j_1
        
        do
            esi -= 4
            i_2 = *(edi + var_20 - 4)
            *(edi + var_20 - 4) = *edi
            int32_t eax_18 = esi s>> 2
            sub_4d5a00(eax_18, 0, edi, eax_18, &i_2, arg5)
            var_20 = esi
            j_1 = esi & 0xfffffffc
        while (j_1 s>= 8)
        
        return j_1
    
    sub_4d53c0(i, edi, &i_2, i_6, arg5)
    int32_t edx_3 = (arg4 s>> 1) + (arg4 s>> 2)
    arg4 = edx_3
    int32_t* var_c
    
    if (((i_2 - edi) & 0xfffffffc) s>= ((i_6 - var_c) & 0xfffffffc))
        sub_4d4e30(edx_3, arg5)
        i_6 = i_2
        i_7 = i_6
    else
        sub_4d4e30(edx_3, arg5)
        edi = var_c
        var_14 = edi

if (edi != i_6)
    int32_t* i_5 = &edi[1]
    i_2 = i_5
    
    if (i_5 != i_6)
        do
            void* i_3 = *i_5
            void** i_8 = i_5
            
            if (arg5(i_3, *edi) == 0)
                void** i_10 = &i_5[-1]
                
                if (arg5(i_3, i_5[-1]) != 0)
                    void** i_9 = i_8
                    char i_1
                    
                    do
                        *i_9 = *i_10
                        i_9 = i_10
                        int32_t var_34_8 = i_10[-1]
                        i_10 -= 4
                        i_1 = arg5(i_3, var_34_8)
                    while (i_1 != 0)
                    edi = var_14
                    i_8 = i_9
                    i_5 = i_2
                
                i = i_3
                *i_8 = i
            else
                uint32_t count = i_5 - edi
                i = memmove(i_5 - count + 4, edi, count)
                *edi = i_3
            
            i_5 = &i_5[1]
            i_2 = i_5
        while (i_5 != i_7)

label_4d5019:
return i
