// 函数: sub_61dce0
// 地址: 0x61dce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* ecx_1 = data_cc8dc8
data_1723ff4 = 0
void* eax = sub_4d8f30(*(ecx_1 + 0x1e1a4))
char* ecx_3 = *(eax + 0x350c)

if (ecx_3 != 0 && *ecx_3 != 0)
    char eax_2
    int32_t ecx_4
    eax_2, ecx_4 = sub_4e6680(eax + 0x3510, eax + 0x350c, &data_171efd4, eax + 0x3510)
    
    if (eax_2 != 0)
        ecx_4.b = 1
        return sub_61dc40(ecx_4)

char* result = *(eax + 0x350c)

if (result != 0 && result != &data_801800)
    if (data_cf65bc != 0 && *result != 0)
        result = sub_63d4e0(eax + 0x350c)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
    
    *(eax + 0x350c) = &data_801800

data_8db660 = 0x7e1
return result
