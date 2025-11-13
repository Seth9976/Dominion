// 函数: sub_6ae950
// 地址: 0x6ae950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result = arg2

if (result != 0)
    uint32_t ecx = zx.d(result.w)
    
    if (ecx u< *(arg1 + 0x3c))
        int32_t* esi_2 = ecx * 0x24c + *(arg1 + 0x38)
        
        if (esi_2[0x92] == result && esi_2 != 0)
            if (*esi_2 != 1)
                sub_63b870(result, &data_801800, "bufferData->mBufferType == DX11BUFFER_INDEX", 
                    "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", 0x1d8, 
                    "Dx11GraphicsInterface::ReleaseIndexBuffer")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            int32_t* eax = esi_2[6]
            (*(*eax + 8))(eax)
            result = zx.d(esi_2[0x92].w)
            int32_t ecx_2 = *(arg1 + 0x44)
            *(arg1 + 0x44) = result
            esi_2[0x92] = ecx_2
            *(arg1 + 0x48) -= 1

return result
