// 函数: sub_51b470
// 地址: 0x51b470
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
void* const i = &data_77fca8
int32_t var_c = arg1
int32_t result_1 = 0
void* const i_1 = &data_77fca8

do
    int32_t edi = *i
    
    if (edi != 2)
        char eax = sub_60eae0(arg1, edi)
        void* var_14
        uint32_t eax_1
        int32_t esi_1
        
        if (eax == 0)
            void* var_1c
            eax_1 = sub_4daf40(&var_14, &var_1c)
            esi_1 = 0
        
        if (eax != 0 || eax_1 s<= 0)
        label_51b4cb:
            result = result_1
        else
            while (true)
                if (sub_4db700(*(var_14 + (esi_1 << 2)), edi) != 0)
                    *(arg2 + (result_1 << 2)) = edi
                    result = result_1 + 1
                    result_1 = result
                    break
                
                esi_1 += 1
                
                if (esi_1 s>= eax_1)
                    goto label_51b4cb
        
        arg1 = var_c
    
    i = i_1 + 0x1c
    i_1 = i
while (i s< &data_77fea0)

return result
