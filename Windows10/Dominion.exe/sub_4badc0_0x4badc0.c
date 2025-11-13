// 函数: sub_4badc0
// 地址: 0x4badc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg2[1]
int32_t esi = *arg2
int32_t* eax_1 = arg2[2]

for (int32_t* i = *(*arg1 + ((((zx.d(ebx.b) | esi << 8) << 8 | zx.d(eax_1.b)) & arg1[1]) << 2)); 
        i != 0; i = i[7])
    if (eax_1 == i[2] && ebx == i[1] && esi == *i)
        return &i[3]

return 0
