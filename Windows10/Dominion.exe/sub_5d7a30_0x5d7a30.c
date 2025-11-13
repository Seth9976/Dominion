// 函数: sub_5d7a30
// 地址: 0x5d7a30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
void* result

if (*(arg1 + 0x1a18) s<= 0)
    result = data_b7d424
    
    if (result u> 4)
        sub_63b870(result, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0x2d27, "IsPlaceholderVisible")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    bool cond:1_1
    
    switch (result)
        case nullptr
            result.b = 0
            return result
        case 1
            if (*(arg1 + 0x1c28) != data_b7d434)
                if (*(arg1 + 0x2c) == 2)
                    result = sub_5d79d0(arg1)
                
                if (*(arg1 + 0x2c) != 2 || result s>= 0xe)
                    if (sub_5d7940(arg1, &var_8).b == 0)
                        result.b = 0
                        return result
                    
                    cond:1_1 = var_8 s>= 3
                    goto label_5d7a87
        case 2
            int32_t esi_1 = data_b7f4c4
            
            if (*(arg1 + 0x2c) != 2)
                result.b = 0
                return result
            
            result = sub_5d79d0(arg1)
            int32_t ecx_3 = esi_1 * 0x3f
            
            if (result s< ecx_3)
                result.b = 0
                return result
            
            cond:1_1 = result s>= ecx_3 + 0x3f
        label_5d7a87:
            
            if (cond:1_1)
                result.b = 0
                return result
        case 3
            if (sub_5d7940(arg1, &var_8).b == 0)
                result.b = 0
                return result
            
            void* ecx_5 = var_8
            result = data_b7f4c8 * 0xc
            
            if (ecx_5 s< result || ecx_5 s>= result + 0xc)
                result.b = 0
                return result
        case 4
            void* i
            
            if (*(arg1 + 0x2c) == 1)
                i = &data_b7d438
                
                if (data_b7f4b8 == 0)
                    i = nullptr
                
                while (i != 0)
                    int32_t esi_2 = *i
                    int32_t ecx_6 = 0
                    
                    if (esi_2 s> 0)
                        result = i + 0xc
                        
                        do
                            if (*result == *(arg1 + 0x1c28))
                                goto label_5d7b43
                            
                            ecx_6 += 1
                            result += 0xc
                        while (ecx_6 s< esi_2)
                    
                    i = i + esi_2 * 0xc + 8
                    
                    if (i == data_b7f4b8 + &data_b7d438)
                        break
            
            i = nullptr
        label_5d7b43:
            result.b = i == data_b7f4c0
            return result

result.b = 1
return result
