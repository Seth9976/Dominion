// 函数: sub_5a11b0
// 地址: 0x5a11b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = sub_5a0eb0(arg3, *arg2 - arg4)
int32_t var_14 = esi
int32_t eax_1 = sub_5a0eb0(arg3, arg4 f+ *arg2)
int32_t var_10 = sub_5a0f60(arg3, arg2[1] f- arg4)
int32_t eax_3 = sub_5a0f60(arg3, arg4 f+ arg2[1])
int32_t eax_4 = var_10

if (eax_4 s<= eax_3)
    int32_t ecx_4 = eax_1
    
    while (true)
        if (var_14 s<= ecx_4)
            while (true)
                char const* const var_34
                int32_t var_30
                char const* const var_2c
                char* ecx_8
                
                if (esi s< 0)
                    var_2c = "BinGetHead"
                    var_30 = 0x55
                    ecx_8 = "coord.x >= 0"
                    var_34 = "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp"
                else if (eax_4 s< 0)
                    var_2c = "BinGetHead"
                    var_30 = 0x56
                    ecx_8 = "coord.y >= 0"
                    var_34 = "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp"
                else
                    int32_t ecx_5 = *(arg3 + 0x34)
                    
                    if (esi s>= ecx_5)
                        var_2c = "BinGetHead"
                        var_30 = 0x57
                        ecx_8 = "coord.x < bin.dims.x"
                        var_34 = "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp"
                    else if (eax_4 s>= *(arg3 + 0x38))
                        var_2c = "BinGetHead"
                        var_30 = 0x58
                        ecx_8 = "coord.y < bin.dims.y"
                        var_34 = "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp"
                    else
                        int32_t ecx_6 = ecx_5 * eax_4
                        int32_t ecx_7 = ecx_6 + esi
                        
                        if (ecx_6 + esi s>= 0 && ecx_7 s< *(arg3 + 0x14))
                            for (void** i = *(*(arg3 + 0x10) + (ecx_7 << 2)); i != 0; i = *i)
                                if (arg5 == 0 || i[4] == arg5)
                                    float xmm2_1 = i[2] f- arg2[1]
                                    float xmm1_9 = i[1] f- *arg2
                                    float xmm0_2 = arg4 f+ i[3]
                                    
                                    if (xmm0_2 * xmm0_2 >= xmm2_1 * xmm2_1 + xmm1_9 * xmm1_9)
                                        i.b = 1
                                        return i
                            
                            eax_4 = var_10
                            esi += 1
                            
                            if (esi s<= eax_1)
                                continue
                            
                            ecx_4 = eax_1
                            break
                        
                        var_2c = "XArray<struct Bin2DNode *>::operator []"
                        var_30 = 0xc3
                        var_34 = "C:\x\ax2017\Engine\xArray.h"
                        ecx_8 = "index >= 0 && index < mSize"
                
                sub_63b870(eax_4, &data_801800, ecx_8, var_34, var_30, var_2c)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
        
        eax_4 += 1
        var_10 = eax_4
        
        if (eax_4 s> eax_3)
            break
        
        esi = var_14

eax_4.b = 0
return eax_4
