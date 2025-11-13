// 函数: sub_4afee0
// 地址: 0x4afee0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c
void var_8

if (sub_4adda0(&var_c, &var_8) != 0)
    return 0x40

int32_t eax_2 = *(arg1 + 4)

if (eax_2 == 3)
    return 0xc6

if (data_8db664 != 0 && (eax_2 != 2 || *(arg1 + 0x20) != 1))
    return 0xc0

return sub_61c920(arg1)
