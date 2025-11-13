// 函数: sub_5ca690
// 地址: 0x5ca690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = arg2 * 0x40cd0
int32_t* i_1 = *(eax + 0x15d7e78)

if (i_1 != 0)
    int32_t* i
    
    do
        free(*i_1)
        int32_t* esi_1 = i_1[4]
        
        if (esi_1 != 0)
            void* eax_1 = *esi_1
            
            if (eax_1 != 0)
                free(*(eax_1 - 4))
            
            int32_t var_1c_3 = 0xc
            operator new(esi_1)
        
        int32_t* esi_2 = i_1[3]
        
        if (esi_2 != 0)
            void* eax_2 = *esi_2
            
            if (eax_2 != 0)
                free(*(eax_2 - 4))
            
            int32_t var_1c_5 = 8
            operator new(esi_2)
        
        i = i_1[2]
        _aligned_free(i_1)
        i_1 = i
    while (i != 0)

*(eax + 0x15d7e78) = 0
__builtin_memset(eax + 0x1597e78, 0, 0x40000)
return 0
