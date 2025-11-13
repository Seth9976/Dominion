// 函数: sub_6afc20
// 地址: 0x6afc20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
uint32_t result = arg2

if (result != 0)
    uint32_t edx_1 = zx.d(result.w)
    
    if (edx_1 u< *(arg1 + 0x3c))
        int32_t* edi_2 = edx_1 * 0x24c + *(arg1 + 0x38)
        
        if (edi_2[0x92] == result && edi_2 != 0)
            int32_t* ecx = edi_2[6]
            
            if (ecx != 0)
                (*(*ecx + 8))(ecx)
            
            void* esi_1 = &edi_2[0x81]
            int32_t i_1 = 0x11
            int32_t i
            
            do
                int32_t* ecx_1 = *esi_1
                
                if (ecx_1 != 0)
                    (*(*ecx_1 + 8))(ecx_1)
                
                esi_1 += 4
                i = i_1
                i_1 -= 1
            while (i != 1)
            int32_t eax_2 = *edi_2
            int32_t* ecx_2
            
            if (eax_2 == 3)
                ecx_2 = edi_2[0xa]
            else
                if (eax_2 != 4)
                    sub_63b870(eax_2 - 4, &data_801800, "Halt", 
                        "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", 0x424, 
                        "Dx11GraphicsInterface::ReleaseShaderBuffer")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                ecx_2 = edi_2[0xb]
            
            if (ecx_2 != 0)
                (*(*ecx_2 + 8))(ecx_2)
            
            result = zx.d(edi_2[0x92].w)
            int32_t ecx_3 = *(arg1 + 0x44)
            *(arg1 + 0x44) = result
            edi_2[0x92] = ecx_3
            *(arg1 + 0x48) -= 1

return result
