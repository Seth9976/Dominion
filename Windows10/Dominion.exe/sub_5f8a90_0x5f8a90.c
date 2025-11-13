// 函数: sub_5f8a90
// 地址: 0x5f8a90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
int32_t edx
ecx, edx = __chkstk(0x3328)
int32_t result = 0
*(ecx + 0x28)
*(ecx + 0x30)
void var_3328
void var_1998
memcpy(&var_1998, sub_4deeb0(&var_3328), 0x1990)
void var_fc4
void* ecx_3 = &var_fc4

for (int32_t i = 0; i s< 0x20; )
    int32_t edi_1 = *(ecx_3 - 0xc)
    
    if (edi_1 == 0)
        break
    
    if (*(ecx_3 - 4) != *ecx_3)
        *(edx + (result << 2)) = edi_1
        result += 1
    
    i += 1
    ecx_3 += 0x10

return result
