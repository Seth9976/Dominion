// 函数: sub_69e480
// 地址: 0x69e480
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_4 = arg1
void* edx = data_147ac28

switch (*arg1 - 0xd)
    case 0
        *(edx + 0x28) = 2
    case 1
        *(edx + 0x28) = 3
    case 5
        *(edx + 0x28) = 4
    case 7, 9
        *(edx + 0x28) = 6
    case 0xb
        *(edx + 0x28) = 7

if (*(data_147abe8 + 0x22) != 0 && *arg1 == 1)
    int32_t eax_5 = arg1[1]
    
    if (eax_5 == 0x74 || eax_5 == 0x79 || eax_5 == 0x7a)
        return sub_69e1f0(arg1)

return sub_69e9c0(edx + 0x10, arg1)
