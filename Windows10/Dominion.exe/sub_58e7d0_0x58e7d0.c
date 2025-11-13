// 函数: sub_58e7d0
// 地址: 0x58e7d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
int32_t* esi = nullptr
uint32_t result

while (true)
    void* ecx_4 = data_cce9c4
    result = *(esi + ecx_4)
    
    if (result != 0)
        void* eax = sub_571b30(result, data_cce9b0)
        
        if (((arg4 & *(eax + 0x98)) | (*(eax + 0x9c) & arg5)) != 0)
            break
        
        esi = &esi[1]
        
        if (esi s< 0x28)
            continue
        else
            ecx_4 = data_cce9c4
    
    int32_t edi_1 = 0
    int32_t* esi_1 = 0x118
    
    while (true)
        if (*(esi_1 + ecx_4) != 0)
            result = sub_58e590(ecx_4, edi_1)
            
            if ((arg3 & 0x20000) != 0)
                if (result.b != 0)
                label_58e851:
                    void* eax_3 = sub_571b30(*(esi_1 + data_cce9c4), data_cce9b0)
                    
                    if (((arg4 & *(eax_3 + 0x98)) | (*(eax_3 + 0x9c) & arg5)) != 0)
                        break
            else if (result.b == 0)
                goto label_58e851
            
            ecx_4 = data_cce9c4
        
        esi_1 = &esi_1[1]
        edi_1 += 1
        
        if (esi_1 s>= 0x198)
            result.b = 0
            return result
    
    break

result.b = 1
return result
