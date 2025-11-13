// 函数: sub_6b18f0
// 地址: 0x6b18f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx_1 = arg2[0xd4]
int32_t eax = sub_6d8ed0(*ebx_1, 0)

if (eax != 0)
    uint32_t ecx_1 = zx.d(eax.w)
    
    if (ecx_1 u< *(arg1 + 0x3c))
        int32_t* esi_2 = ecx_1 * 0x24c + *(arg1 + 0x38)
        
        if (esi_2[0x92] == eax && esi_2 != 0)
            *(arg1 + 0x54) = *ebx_1
            int32_t* eax_2 = *(arg1 + 8)
            sub_6b17c0((*(*eax_2 + 0x2c))(eax_2, esi_2[0xa], 0, 0), ebx_1, ebx_1, esi_2, arg2)
            eax = sub_6d8ed0(ebx_1[0xfc], 1)
            
            if (eax != 0)
                uint32_t ecx_5 = zx.d(eax.w)
                
                if (ecx_5 u< *(arg1 + 0x3c))
                    int32_t* esi_4 = ecx_5 * 0x24c + *(arg1 + 0x38)
                    
                    if (esi_4[0x92] == eax && esi_4 != 0)
                        int32_t* eax_4 = *(arg1 + 8)
                        sub_6b17c0((*(*eax_4 + 0x24))(eax_4, esi_4[0xb], 0, 0), &ebx_1[0xfc], 
                            ebx_1, esi_4, arg2)
                        int32_t eax_6 = ebx_1[0x390]
                        void* edx_3 = data_147b078
                        int32_t* esi_5
                        
                        if (eax_6 != 0)
                            uint32_t ecx_8 = zx.d(eax_6.w)
                            
                            if (ecx_8 u< *(edx_3 + 0x3c))
                                esi_5 = ecx_8 * 0x24c + *(edx_3 + 0x38)
                                
                                if (esi_5[0x92] != eax_6)
                                    esi_5 = nullptr
                            else
                                esi_5 = nullptr
                        else
                            esi_5 = nullptr
                        
                        if (*esi_5 != 5)
                            sub_63b870(eax_6, &data_801800, 
                                "bufferDataMaterial->mBufferType == DX11BUFFER_MATERIAL", 
                                "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", 0x884, 
                                "Dx11GraphicsInterface::GraphicsMaterialSetup")
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        int32_t* eax_7 = *(arg1 + 8)
                        (*(*eax_7 + 0x8c))(eax_7, esi_5[0x80], 0, 0xffffffff)
                        int32_t* eax_8 = *(arg1 + 8)
                        (*(*eax_8 + 0x90))(eax_8, esi_5[0x7f], 0)
                        void* eax_9
                        eax_9.b = *(data_147b06c + 0x166)
                        bool ecx_11 = eax_9.b != 0
                        
                        if (data_147b074 == 1 && data_cf69dc == 0)
                            ecx_11 = eax_9.b == 0
                        
                        int32_t* edx_4 = *(arg1 + 8)
                        int32_t eax_10 = *edx_4
                        
                        if (ecx_11 == 0)
                            (*(eax_10 + 0xac))(edx_4, esi_5[0x7d])
                            int32_t eax_12
                            eax_12.b = 1
                            return eax_12
                        
                        (*(eax_10 + 0xac))(edx_4, esi_5[0x7e])
                        int32_t eax_11
                        eax_11.b = 1
                        return eax_11

eax.b = 0
return eax
