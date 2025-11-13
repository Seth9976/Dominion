// 函数: sub_4ede20
// 地址: 0x4ede20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax
int32_t edx
eax, edx = sub_4ec8b0(arg1, arg2)
uint32_t ebx = zx.d(eax.w)
int32_t* i

for (i = *((ebx << 2) + &data_18f8e68); i != 0; i = i[4])
    if (*i == eax && i[1] == edx)
        return i

i = operator new(0x18)
int32_t edx_1 = data_18f8e60
i[3] = edx_1
*i = eax
data_18f8e60 = edx_1 + 1
i[4] = *((ebx << 2) + &data_18f8e68)
*((ebx << 2) + &data_18f8e68) = i
i[1] = edx
i[2] = 0
return i
