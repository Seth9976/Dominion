// 函数: sub_571b30
// 地址: 0x571b30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t temp1 = mods.dp.d(sx.q((arg2 << 0x10) + arg1), 0x3e5)

for (int32_t* i = *((temp1 << 2) + &data_19e1790); i != 0; i = i[3])
    if (*i == arg1 && i[1] == arg2)
        return i[2]

sub_571a30(arg1, arg2)
int32_t* eax_5 = malloc(0x10)
*eax_5 = arg1
eax_5[3] = *((temp1 << 2) + &data_19e1790)
eax_5[1] = arg2
*((temp1 << 2) + &data_19e1790) = eax_5
void* result = sub_571a30(arg1, arg2)
eax_5[2] = result
return result
