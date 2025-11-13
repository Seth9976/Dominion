// 函数: sub_75f500
// 地址: 0x75f500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
int32_t var_c = arg2
int32_t var_8 = 0
sub_75ae50(arg1)
int32_t* eax = sub_761e10(arg1, arg2)
int32_t* esi_1 = &var_c

if (eax != 0)
    esi_1 = eax

int32_t i = *esi_1

while (i != 0)
    int32_t eax_1 = sub_75fa60(arg1, i)
    
    if (eax_1 != 0xffffffff)
        int32_t result_1 =
            (*(**(arg1 + (eax_1 << 2) + 0x50) + 0xc))(arg3, *(arg1 + 0x20), *(arg1 + 0x2c))
        
        if (result_1 != 0)
            result = result_1
    
    i = esi_1[1]
    esi_1 = &esi_1[1]

sub_75ec70(arg1)
return result
