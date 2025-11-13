// 函数: sub_6931d0
// 地址: 0x6931d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* const ecx = &data_801800
char* eax = *arg2

if (eax != 0)
    ecx = eax

int32_t eax_1 = sub_69c4d0(ecx, 0)

for (int32_t* i = *(*arg1 + ((arg1[1] & eax_1) << 2)); i != 0; i = i[8])
    if (sub_63d7f0(arg2, i) == 0)
        return &i[1]

return 0
