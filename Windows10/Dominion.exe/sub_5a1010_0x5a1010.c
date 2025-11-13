// 函数: sub_5a1010
// 地址: 0x5a1010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = sub_5a0eb0(arg3, *arg2 - arg4)
int32_t var_18 = ebx
int32_t eax_1 = sub_5a0eb0(arg3, arg4 f+ *arg2)
int32_t result_1 = sub_5a0f60(arg3, arg2[1] f- arg4)
int32_t eax_3 = sub_5a0f60(arg3, arg4 f+ arg2[1])
int32_t result = result_1

if (result s<= eax_3)
    int32_t ecx_4 = eax_1
    int32_t edx = eax_3
    
    while (true)
        if (var_18 s<= ecx_4)
            float xmm0_1 = arg4
            
            while (true)
                char const* const var_3c
                int32_t var_38
                char const* const var_34
                char* ecx_9
                
                if (ebx s< 0)
                    var_34 = "BinGetHeadW"
                    var_38 = 0x4a
                    ecx_9 = "coord.x >= 0"
                    var_3c = "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp"
                else if (result s< 0)
                    var_34 = "BinGetHeadW"
                    var_38 = 0x4b
                    ecx_9 = "coord.y >= 0"
                    var_3c = "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp"
                else
                    int32_t edi_1 = arg3[0xd]
                    
                    if (ebx s>= edi_1)
                        var_34 = "BinGetHeadW"
                        var_38 = 0x4c
                        ecx_9 = "coord.x < bin.dims.x"
                        var_3c = "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp"
                    else if (result s>= arg3[0xe])
                        var_34 = "BinGetHeadW"
                        var_38 = 0x4d
                        ecx_9 = "coord.y < bin.dims.y"
                        var_3c = "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp"
                    else
                        int32_t edi_2 = edi_1 * result
                        int32_t edi_3 = edi_2 + ebx
                        
                        if (edi_2 + ebx s>= 0 && edi_3 s< arg3[5])
                            int32_t eax_4 = arg3[4]
                            arg3[3] += 1
                            
                            if (*arg3 == 0)
                                sub_5ac970(arg3)
                                xmm0_1 = arg4
                            
                            int32_t* edx_1 = *arg3
                            ebx += 1
                            *arg3 = *edx_1
                            int32_t eax_6 = *arg2
                            edx_1[2] = arg2[1]
                            edx_1[1] = eax_6
                            *edx_1 = *(eax_4 + (edi_3 << 2))
                            edx_1[4] = arg5
                            result = result_1
                            edx_1[3] = xmm0_1
                            *(eax_4 + (edi_3 << 2)) = edx_1
                            
                            if (ebx s<= eax_1)
                                continue
                            
                            ecx_4 = eax_1
                            edx = eax_3
                            break
                        
                        var_34 = "XArray<struct Bin2DNode *>::operator []"
                        var_38 = 0xb5
                        var_3c = "C:\x\ax2017\Engine\xArray.h"
                        ecx_9 = "index >= 0 && index < mSize"
                
                sub_63b870(result, &data_801800, ecx_9, var_3c, var_38, var_34)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
        
        result += 1
        result_1 = result
        
        if (result s> edx)
            break
        
        ebx = var_18

return result
