// 函数: sub_6a6fd0
// 地址: 0x6a6fd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_20 = arg2

if (arg3 == 0 || arg4 == 0)
    return 

int32_t* i = *(arg3 + 4)

while (i != 0)
    void* edi_1 = *i
    char* _Str1 = *(edi_1 + 8)
    int32_t* i_1 = i[1]
    
    if (_Str1 != 0 && *_Str1 != 0)
        int32_t esi_1 = 0
        
        if (arg4 s> 0)
            do
                if (_stricmp(_Str1, *(arg2 + (esi_1 << 2))) == 0)
                    void* ecx_1 = i[2]
                    int32_t eax_1 = i[1]
                    
                    if (ecx_1 == 0)
                        *(arg3 + 4) = eax_1
                    else
                        *(ecx_1 + 4) = eax_1
                    
                    void* ecx_2 = i[1]
                    int32_t eax_2 = i[2]
                    
                    if (ecx_2 == 0)
                        *(arg3 + 8) = eax_2
                    else
                        *(ecx_2 + 8) = eax_2
                    
                    *(arg3 + 0xc) -= 1
                    sub_64c080(i, 0xc)
                    break
                
                arg2 = var_20
                esi_1 += 1
            while (esi_1 s< arg4)
    
    *(edi_1 + 0xc)
    sub_6a6fd0(arg4)
    i = i_1
    arg2 = var_20
