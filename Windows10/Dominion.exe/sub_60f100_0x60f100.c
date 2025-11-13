// 函数: sub_60f100
// 地址: 0x60f100
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0

for (void* const i = &data_77fca8; i s< &data_77fea0; i += 0x1c)
    if (*(i + 4) != 0)
        int32_t eax_1 = *i
        
        if (eax_1 == 2)
        label_60f160:
            *(arg1 + (result << 2)) = *(i + 4)
            result += 1
        else
            void* var_1c
            void* var_10
            uint32_t eax_2 = sub_4daf40(&var_10, &var_1c)
            int32_t esi_1 = 0
            
            if (eax_2 s> 0)
                do
                    if (sub_4db700(*(var_10 + (esi_1 << 2)), eax_1) != 0)
                        goto label_60f160
                    
                    esi_1 += 1
                while (esi_1 s< eax_2)
        
        if (*(i + 8) != 0)
            int32_t eax_6 = *i
            void* var_20
            void* var_18
            uint32_t eax_7 = sub_4daf40(&var_18, &var_20)
            int32_t esi_2 = 0
            
            if (eax_7 s> 0)
                do
                    if (sub_4db650(*(var_18 + (esi_2 << 2)), eax_6) != 0)
                        *(arg1 + (result << 2)) = *(i + 8)
                        result += 1
                        break
                    
                    esi_2 += 1
                while (esi_2 s< eax_7)

return result
