// 函数: sub_624450
// 地址: 0x624450
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1 - 0x12c u<= 0x3d)
    for (void* i = &data_bf01d0; i != &data_bf0740; i += 0x18)
        if (*i == arg1)
            int32_t ecx_4 = *(i + 0x10)
            
            if (ecx_4 != 0)
                void* eax_4 = sub_571b30(ecx_4, 0x18)
                void* eax_5 = sub_571b30(*(i + 0x10), 0x18)
                char var_c_2 = 0
                
                if (((*(eax_5 + 0x98) & 0x7f000400) | (*(eax_5 + 0x9c) & 0x940)) != 0)
                    var_c_2 = 1
                
                sub_618270(eax_5, **(eax_4 + 0x60), &data_be15bc, var_c_2)
            
            return i + 4
else if (arg1 - 0x1f4 u<= 0x46)
    for (void* i_1 = &data_bf0740; i_1 != &data_bf0dd0; i_1 += 0x18)
        if (*i_1 == arg1)
            int32_t eax_8 = *(i_1 + 0x10)
            
            if (eax_8 != 0)
                void* eax_9 = sub_571b30(eax_8, 0x18)
                void* eax_10 = sub_571b30(*(i_1 + 0x10), 0x18)
                char var_c_3 = 0
                
                if (((*(eax_10 + 0x98) & 0x7f000400) | (*(eax_10 + 0x9c) & 0x940)) != 0)
                    var_c_3 = 1
                
                sub_618270(eax_10, **(eax_9 + 0x60), &data_be15bc, var_c_3)
                return i_1 + 4

void* eax_1 = sub_571b30(data_bf01e0, 0x18)
void* eax_2 = sub_571b30(data_bf01e0, 0x18)
char var_c_1 = 0

if (((*(eax_2 + 0x98) & 0x7f000400) | (*(eax_2 + 0x9c) & 0x940)) != 0)
    var_c_1 = 1

sub_618270(eax_2, **(eax_1 + 0x60), &data_be15bc, var_c_1)
return &data_bf01d4
