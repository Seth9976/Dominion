// 函数: sub_64e660
// 地址: 0x64e660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1

if (data_c23bb0 == data_c23bb8)
    sub_63b5f0("dump ui")
    void* i = data_c23ba8
    
    for (void* eax_2 = data_c23bac * 0x18d0 + i; i u< eax_2; i += 0x18d0)
        if ((*(i + 0x18c8) & 0xffff0000) != 0)
            while (i != 0xffffffff)
                char* eax_3 = *(i + 0x15e0)
                char* const ecx = &data_801800
                
                if (eax_3 != 0)
                    ecx = eax_3
                
                char* const var_10_1 = ecx
                int32_t var_14_1 = *(i + 8)
                sub_63b5f0("%s %s")
                i += 0x18d0
                int32_t eax_5 = data_c23bac * 0x18d0 + data_c23ba8
                
                if (i u>= eax_5)
                    break
                
                while ((*(i + 0x18c8) & 0xffff0000) == 0)
                    i += 0x18d0
                    
                    if (i u>= eax_5)
                        goto label_64e722
            
            break

label_64e722:
void* result = sub_67d6d0(&data_c23ba8)
int128_t xmm0 = data_7fefb0
*(result + 0x1350) = 0
*(result + 0x1358) = 1
*(result + 0x1354) = 2
*(result + 0x135c) = 3
*(result + 0x1718) = arg1
*(result + 0x1674) = xmm0

if (arg1 == 0)
    *(result + 0x1714) = result
    sub_65bf00(result)
    return result

*(result + 0x1714) = *(arg1 + 0x1714)
sub_65bf00(result)
return result
