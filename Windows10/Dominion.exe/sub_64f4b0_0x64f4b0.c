// 函数: sub_64f4b0
// 地址: 0x64f4b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* edx = arg4

if (edx != 0 && *edx != 0)
    goto label_64f4fd

if (arg8 == 0)
    int32_t eax = *(arg3 + 0x15f8)
    
    if (eax == 3)
        edx = "Text"
    label_64f4f3:
        arg8 = 1
    label_64f4fd:
        int32_t* result = sub_64f3f0(data_c23bf0, edx)
        
        if (result != 0)
            sub_64f4b0(sub_6dd140(result, result, &data_8cae70, 0x67), arg5, arg6, arg7, arg8.d)
            void* eax_4 = arg6
            void* var_2c_1 = eax_4
            int32_t* var_34_1
            
            if (arg7.b == 0)
                var_34_1 = arg5
            else
                void var_1c
                eax_4 = &var_1c
                int32_t var_18_1 = 0
                var_34_1 = &var_1c
            
            sub_6530a0(eax_4, nullptr, arg3, arg2, arg3 + 0x13f8, result, var_34_1, 1, var_2c_1)
            return result
    else if (eax == 5)
        edx = "Button"
        goto label_64f4f3

return 0
