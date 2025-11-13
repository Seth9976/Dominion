// 函数: sub_586ae0
// 地址: 0x586ae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int128_t* eax = sub_583fc0(arg1, arg2, arg3, 0xc00)
int128_t* eax_1 = arg3[arg2 * 0x168c + 0x5d3d]
int32_t eax_2 = sub_583fc0(eax_1, arg2, arg3, 0xa00)
int32_t esi_1 = eax_2
uint32_t eax_3 = sub_576b30(eax_2, arg2, arg3, 0x29, 0, 0, 0)

if (eax_3 s> 0)
    esi_1 += sub_583fc0(eax_3, arg2, arg3, 0x601)

int128_t* ecx_4 = eax_1 + esi_1
int128_t* eax_6 = eax
int64_t var_44 = 0

if (eax s< ecx_4)
    ecx_4 = eax

int64_t var_20 = 0
int64_t var_28 = 0

if (eax_1 s< eax)
    eax_6 = eax_1

int32_t var_3c = 0
int32_t eax_8
int32_t edx_2
edx_2:eax_8 = sx.q(eax)
int32_t var_34 = 0
int32_t var_30 = eax_8
int32_t var_2c = edx_2
int32_t var_14 = 0
int32_t var_10_1 = 0
int128_t var_78 = arg4.o
int128_t var_68 = eax_6.o
int128_t var_58 = var_28.o

if (ecx_4 == 0)
    return 0

int32_t eax_10

if (arg2 != arg3[0x673])
    eax_10 = arg2
else
    eax_10 = arg3[0x674]

int32_t var_8c = 0
return sub_623940(eax_10, &var_14, arg3, arg2, eax_10, ecx_4, ecx_4, &var_78, 0x2d)
