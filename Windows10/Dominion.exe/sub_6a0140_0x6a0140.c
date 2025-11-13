// 函数: sub_6a0140
// 地址: 0x6a0140
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t* esi = data_147ac2c
char* const ecx_1 = &data_801800
char* eax = *arg1

if (eax != 0)
    ecx_1 = eax

int32_t eax_1 = sub_69c4d0(ecx_1, 0)

for (int32_t* i = *(*esi + ((esi[1] & eax_1) << 2)); i != 0; i = i[2])
    if (sub_63d7f0(arg1, i) == 0)
        return &i[1]

return 0
