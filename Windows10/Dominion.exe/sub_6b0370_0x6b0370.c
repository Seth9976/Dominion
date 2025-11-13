// 函数: sub_6b0370
// 地址: 0x6b0370
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
uint32_t result = arg2

if (result != 0)
    uint32_t edx_1 = zx.d(result.w)
    
    if (edx_1 u< *(arg1 + 0x3c))
        void* edi_2 = edx_1 * 0x24c + *(arg1 + 0x38)
        
        if (*(edi_2 + 0x248) == result && edi_2 != 0)
            int32_t* ecx = *(edi_2 + 0x200)
            
            if (ecx != 0)
                (*(*ecx + 8))(ecx)
            
            int32_t* ecx_1 = *(edi_2 + 0x1fc)
            
            if (ecx_1 != 0)
                (*(*ecx_1 + 8))(ecx_1)
            
            int32_t* ecx_2 = *(edi_2 + 0x1f4)
            
            if (ecx_2 != 0)
                (*(*ecx_2 + 8))(ecx_2)
            
            int32_t* ecx_3 = *(edi_2 + 0x1f8)
            
            if (ecx_3 != 0)
                (*(*ecx_3 + 8))(ecx_3)
            
            void* esi_1 = edi_2 + 0x34
            int32_t i_1 = 8
            int32_t i
            
            do
                int32_t* ecx_4 = *esi_1
                
                if (ecx_4 != 0)
                    (*(*ecx_4 + 8))(ecx_4)
                
                esi_1 += 4
                i = i_1
                i_1 -= 1
            while (i != 1)
            result = zx.d(*(edi_2 + 0x248))
            int32_t ecx_5 = *(arg1 + 0x44)
            *(arg1 + 0x44) = result
            *(edi_2 + 0x248) = ecx_5
            *(arg1 + 0x48) -= 1

return result
