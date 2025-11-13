// 函数: sub_7070e0
// 地址: 0x7070e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_2c = 0
FILE* _Stream_2
FILE* result

if (sub_69dec0(&_Stream_2).b != 0)
    FILE* _Stream_1 = _Stream_2
    fseek(_Stream_1, 0, 2)
    int32_t _ElementSize = ftell(_Stream_1)
    char* _Buffer = sub_687730(_ElementSize + 1)
    *arg1 = _Buffer
    int32_t _Offset
    int32_t eax_1 = fseek(_Stream_1, _Offset, 0)
    FILE* _Stream = _Stream_1
    uint32_t eax_2
    
    if (eax_1 == 0)
        eax_2 = fread(_Buffer, _ElementSize, 1, _Stream)
        _Stream = _Stream_1
    
    if (eax_1 == 0 && eax_2 == 1)
        fclose(_Stream)
        char* eax_3 = *arg1
        arg1[0x46] = 1
        char* const ecx_2 = &data_801800
        eax_3[_ElementSize] = 0
        arg1[2] = *arg1
        arg1[1] = 0
        char* eax_6 = *(arg2 + 4)
        
        if (eax_6 != 0)
            ecx_2 = eax_6
        
        int32_t edx_1 = arg1 - ecx_2
        
        do
            eax_6.b = *ecx_2
            ecx_2 = &ecx_2[1]
            ecx_2[edx_1 + 0x13] = eax_6.b
        while (eax_6.b != 0)
        
        sub_7072d0(arg1)
        result = arg1[1]
        
        if (result == 0 || result == 3)
            return sub_7074e0(arg1) != 0
        
        if (result == 4)
            int32_t* ecx_4 = arg1[0x48]
            void* eax_7 = ecx_4[3]
            arg1[0x48] = eax_7
            
            if (eax_7 == 0)
                arg1[0x47] = 0
            else
                *(eax_7 + 8) = 0
            
            arg1[0x49] -= 1
            
            if (ecx_4 != 0)
                sub_64c080(ecx_4, 0x10)
            
            return sub_7074e0(arg1) != 0
        
        if (result == 1)
            int32_t* eax_9 = sub_64bfd0(result + 0xf)
            eax_9[3] += 1
            
            if (*eax_9 == 0)
                sub_64be70(eax_9)
            
            int32_t* edx_2 = *eax_9
            *eax_9 = *edx_2
            *edx_2 = zx.o(0)
            int32_t ecx_8 = arg1[4]
            *edx_2 = arg1[3]
            edx_2[1] = ecx_8
            edx_2[3] = arg1[0x48]
            void* eax_13 = arg1[0x48]
            
            if (eax_13 == 0)
                arg1[0x47] = edx_2
            else
                *(eax_13 + 8) = edx_2
            
            arg1[0x49] = &arg1[0x49][1]
            arg1[0x48] = edx_2
            return sub_7075e0(arg1) != 0
        
        if (result == 2)
            return sub_7075e0(arg1) != 0
    else
        fclose(_Stream)
        result = *arg1
        
        if (result != 0)
            _aligned_free(result)
        
        *arg1 = nullptr

result.b = 0
return result
