// 函数: sub_594220
// 地址: 0x594220
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* i_13 = arg2
int32_t* i_6 = arg3
int32_t* i_14 = i_13
int32_t* i_4 = i_6
void* i = (i_13 - i_6) & 0xfffffffc
int32_t edi = arg5
int32_t* i_8

for (; i s> 0x80; i = (i_13 - i_6) & 0xfffffffc)
    if (arg4 s<= 0)
        int32_t esi_1 = i_13 - i_6
        int32_t var_20 = esi_1
        int32_t i_12 = esi_1 s>> 2
        i_8 = i_12
        i = i_12 s>> 1
        i_4 = i
        
        if (i s> 0)
            int32_t j = i
            
            do
                int32_t* i_5 = i_6[j - 1]
                j -= 1
                i_4 = i_5
                i = sub_4d5a00(&i_4, j, i_6, i_12, &i_4, edi)
                i_12 = i_8
            while (j s> 0)
            
            esi_1 = var_20
        
        if (i_12 s< 2)
            goto label_594409
        
        int32_t j_1
        
        do
            esi_1 -= 4
            i_4 = *(i_6 + var_20 - 4)
            *(i_6 + var_20 - 4) = *i_6
            int32_t eax_18 = esi_1 s>> 2
            sub_4d5a00(eax_18, 0, i_6, eax_18, &i_4, edi)
            var_20 = esi_1
            j_1 = esi_1 & 0xfffffffc
        while (j_1 s>= 8)
        
        return j_1
    
    sub_595280(i, i_6, &i_8, i_13, edi)
    int32_t edx_3 = (arg4 s>> 1) + (arg4 s>> 2)
    arg4 = edx_3
    int32_t* i_9
    
    if (((i_8 - i_6) & 0xfffffffc) s>= ((i_13 - i_9) & 0xfffffffc))
        sub_594220(edx_3, edi)
        i_13 = i_8
        i_14 = i_13
    else
        sub_594220(edx_3, edi)
        i_6 = i_9
        i_4 = i_6

if (i_6 != i_13)
    i = &i_6[1]
    void* i_3 = i
    
    if (i != i_13)
        i_8 = i_6
        
        do
            int32_t esi = *i
            void* i_2 = i
            
            if (edi(esi, *i_6) == 0)
                void* i_11 = i_8
                void* i_10 = i_11
                
                if (arg5(esi, *i_11) != 0)
                    void* i_7 = i_2
                    char i_1
                    
                    do
                        *i_7 = *i_10
                        i_7 = i_10
                        int32_t var_34_8 = *(i_10 - 4)
                        i_10 -= 4
                        i_1 = arg5(esi, var_34_8)
                    while (i_1 != 0)
                    i_2 = i_7
                    i_6 = i_4
                
                edi = arg5
                *i_2 = esi
            else
                uint32_t count = i_3 - i_6
                memmove(i_3 - count + 4, i_6, count)
                *i_6 = esi
            
            i_8 = &i_8[1]
            i = i_3 + 4
            i_3 = i
        while (i != i_14)

label_594409:
return i
