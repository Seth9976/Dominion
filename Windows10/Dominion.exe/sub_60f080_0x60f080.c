// 函数: sub_60f080
// 地址: 0x60f080
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
int32_t result_1 = 0

for (void* const i = &data_77fca8; i s< &data_77fea0; i += 0x1c)
    int32_t eax_1 = *i
    
    if (eax_1 == 2)
    label_60f0e9:
        *(arg1 + (result << 2)) = *i
        result += 1
        result_1 = result
    else
        void* var_18
        void* var_10
        uint32_t eax_2 = sub_4daf40(&var_10, &var_18)
        int32_t esi_1 = 0
        
        if (eax_2 s> 0)
            while (true)
                if (sub_4db700(*(var_10 + (esi_1 << 2)), eax_1) != 0)
                    result = result_1
                    break
                
                esi_1 += 1
                
                if (esi_1 s>= eax_2)
                    goto label_60f0ca
            
            goto label_60f0e9
        
    label_60f0ca:
        result = result_1

return result
