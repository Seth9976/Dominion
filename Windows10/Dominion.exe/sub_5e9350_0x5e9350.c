// 函数: sub_5e9350
// 地址: 0x5e9350
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* i = data_b809e0
void* result

for (result = data_b809e4 * 0x1c30 + i; i u< result; i += 0x1c30)
    if ((*(i + 0x1c28) & 0xffff0000) != 0)
        if (i != 0xffffffff)
            while (true)
                if (*(i + 0x1ba0) != 0)
                    int32_t edi_1 = 2
                    void* ebx_1 = i + 0x1bac
                    int32_t temp0_1
                    
                    do
                        int32_t ecx_1 = *ebx_1
                        
                        if (ecx_1 != 0)
                            sub_664d00(sub_64e7a0(ecx_1))
                        
                        ebx_1 -= 4
                        temp0_1 = edi_1
                        edi_1 -= 1
                    while (temp0_1 - 1 s>= 0)
                    int32_t ecx_3 = *(i + 0x1ba0)
                    
                    if (ecx_3 != 0)
                        sub_664d00(sub_64e7a0(ecx_3))
                    
                    uint32_t eax_3 = data_147abe8
                    char const* const var_24
                    int32_t var_20
                    char const* const var_1c
                    char* ecx_8
                    
                    if (eax_3 == 0)
                        var_1c = "GetGameData"
                        var_20 = 0x45
                        var_24 = "C:\x\ax2017\Engine\Game.h"
                        ecx_8 = "gpGameData"
                    label_5e94b9:
                        sub_63b870(eax_3, &data_801800, ecx_8, var_24, var_20, var_1c)
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    void* edx_1 = *(eax_3 + 0x10)
                    eax_3 = *(i + 0x1bdc)
                    
                    if (eax_3 != 0)
                        uint32_t ecx_5 = zx.d(eax_3.w)
                        
                        if (ecx_5 u< *(edx_1 + 4))
                            void* ecx_7 = ecx_5 * 0x7c + *edx_1
                            
                            if (*(ecx_7 + 0x78) == eax_3 && ecx_7 != 0)
                                int32_t edi_2
                                
                                if (data_147aba1 != 0)
                                    edi_2 = data_cf6b14
                                    data_cf6b14 = 0x2de60000
                                    eax_3 = sub_6c24d0(ecx_7, &data_bf21e8)
                                
                                if (data_147aba1 == 0 || data_147aba1 == 0)
                                    var_1c = "Draw3DLayer"
                                    var_20 = 0x32c
                                    var_24 = "C:\x\ax2017\Engine\Draw3d.cpp"
                                    ecx_8 = "gDraw3DData.submittingRenderItems"
                                    goto label_5e94b9
                                
                                data_cf6b14 = edi_2
                
                i += 0x1c30
                result = data_b809e4 * 0x1c30 + data_b809e0
                
                if (i u>= result)
                    break
                
                while ((*(i + 0x1c28) & 0xffff0000) == 0)
                    i += 0x1c30
                    
                    if (i u>= result)
                        return result
                
                if (i == 0xffffffff)
                    return result
        
        break

return result
