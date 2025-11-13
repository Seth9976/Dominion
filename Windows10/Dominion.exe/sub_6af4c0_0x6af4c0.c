// 函数: sub_6af4c0
// 地址: 0x6af4c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result = arg2

if (result != 0)
    uint32_t ecx = zx.d(result.w)
    
    if (ecx u< *(arg1 + 0x3c))
        int32_t* esi_2 = ecx * 0x24c + *(arg1 + 0x38)
        
        if (esi_2[0x92] == result && esi_2 != 0)
            int32_t var_14
            char const* const ecx_1
            
            if (*esi_2 != 2)
                char const* const var_10_1 = "Dx11GraphicsInterface::ReleaseTextureBuffer"
                var_14 = 0x335
                ecx_1 = "bufferData->mBufferType == DX11BUFFER_TEXTURE"
            label_6af574:
                sub_63b870(result, &data_801800, ecx_1, 
                    "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", var_14, 
                    "Dx11GraphicsInterface::ReleaseTextureBuffer")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            if (esi_2[2] != 0)
                char const* const var_10_6 = "Dx11GraphicsInterface::ReleaseTextureBuffer"
                var_14 = 0x336
                ecx_1 = "bufferData->mBufferPtr == NULL"
                goto label_6af574
            
            int32_t* ecx_2 = esi_2[8]
            
            if (ecx_2 != 0)
                (*(*ecx_2 + 8))(ecx_2)
            
            int32_t* ecx_3 = esi_2[0xc]
            
            if (ecx_3 != 0)
                (*(*ecx_3 + 8))(ecx_3)
            
            int32_t* ecx_4 = esi_2[9]
            
            if (ecx_4 != 0)
                (*(*ecx_4 + 8))(ecx_4)
            
            int32_t* ecx_5 = esi_2[7]
            
            if (ecx_5 != 0)
                (*(*ecx_5 + 8))(ecx_5)
            
            result = zx.d(esi_2[0x92].w)
            int32_t ecx_6 = *(arg1 + 0x44)
            *(arg1 + 0x44) = result
            esi_2[0x92] = ecx_6
            *(arg1 + 0x48) -= 1

return result
