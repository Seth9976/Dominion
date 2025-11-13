// 函数: sub_700c30
// 地址: 0x700c30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t var_8_1 = arg1
void* esi = nullptr
int32_t result

while (true)
    void* edx_1 = data_147ded4
    
    if (esi != 0)
        esi += 0x14c
    else
        esi = *(edx_1 + 0x424c)
    
    result = *(edx_1 + 0x4250) * 0x14c + *(edx_1 + 0x424c)
    
    if (esi u>= result)
        break
    
    while ((*(esi + 0x148) & 0xffff0000) == 0)
        esi += 0x14c
        
        if (esi u>= result)
            return result
    
    if (*(esi + 4) == 0)
        void* edi_1 = esi + 0x14
        int32_t i_1 = 0x10
        int32_t i
        
        do
            if (*edi_1 != 0 && *(edi_1 + 4) == arg1)
                (*__glewDeleteVertexArrays)(1, edi_1)
                arg1 = var_8_1
                *edi_1 = 0
                *(edi_1 + 4) = 0
                *(edi_1 + 8) = 0
            
            edi_1 += 0xc
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
