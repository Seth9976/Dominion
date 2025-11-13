// 函数: sub_7050e0
// 地址: 0x7050e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 != 0)
    uint32_t edx_1 = zx.d(arg2.w)
    
    if (edx_1 u< *(arg1 + 0x4250))
        int32_t* edi_2 = edx_1 * 0x14c + *(arg1 + 0x424c)
        
        if (edi_2[0x52] == arg2 && edi_2 != 0)
            if (edi_2[0x4f].b != 0)
                int32_t eax_1 = edi_2[0x37]
                
                if (eax_1 u> 0x10)
                    sub_63b870(eax_1, &data_801800, 
                        "vertexBufferData->mBufferFormat >= 0 && vertexBufferData->mBufferFormat < 
                            VERTEX_FORMAT_COUNT", 
                        "C:\x\ax2017\Engine\OpenGLGraphics.cpp", 0x13fc, 
                        "OpenGLInterface::GetSortVertexBuffer")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                void* esi_3 = data_147ded4 + 0x4378 + eax_1 * 0xc0
                int32_t eax_2 = sub_6d8ed0(*arg3, 0)
                
                for (int32_t i = 0; i s< 0x10; )
                    if (*(esi_3 + 4) == eax_2)
                        return *esi_3
                    
                    i += 1
                    esi_3 += 0xc
            
            return *edi_2

return 0
