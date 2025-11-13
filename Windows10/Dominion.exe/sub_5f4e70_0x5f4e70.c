// 函数: sub_5f4e70
// 地址: 0x5f4e70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx
ebx.b = arg1 != 0
void* var_c
int32_t var_8
int32_t** result = sub_4adda0(&var_c, &var_8)

if (result.b == 0)
    if (data_b7d424 == 1)
        int32_t ecx_2 = data_b7d434
        
        if (ecx_2 != 0)
            result = zx.d(ecx_2.w)
            
            if (result u< data_b809e4)
                result = result * 0x1c30 + data_b809e0
                
                if (result[0x70a] == ecx_2 && result != 0)
                    int32_t ecx_3 = result[0x5e]
                    
                    if (ecx_3 != 0)
                        result = sub_5ee900(ecx_3, arg1)
                        
                        if (result != 0)
                            sub_614ca0()
                            result = sub_5cba00(result)
                            int32_t ecx_5 = result[0xb]
                            
                            if (ecx_5 == 0)
                                return sub_5d0ab0(result, 0)
                            
                            if (ecx_5 == 3)
                                return sub_5d09f0(result, 1)
else if ((var_8 & ((ebx << 1) + 2)) != 0)
    return sub_4acf60(var_c, (ebx << 1) + 2)

return result
