// 函数: sub_54fd40
// 地址: 0x54fd40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax
sub_566140(eax, 0x474, *(arg1 + 4), 0x3ee, nullptr, 1, 0xb, nullptr, nullptr)
*(arg1 + 4)
int32_t var_64 = 0
int64_t var_6c = 0
int64_t var_5c
__builtin_memset(&var_5c, 0, 0x1c)
int128_t var_40 = 0x1c.o
int128_t var_30 = 1.o
int64_t var_50
int128_t var_20 = var_50.o
int32_t* eax_1 = sub_563c40(&var_40, 0xa, 0)
void* eax_2 = sub_573400()
int32_t eax_3 = *(eax_2 + 4)
uint32_t eax_4 = zx.d(eax_1.w)

if (eax_4 u>= 0x320)
    sub_591930()

sub_582d10(eax_3, *(eax_4 * 0x64 + eax_3 + 0x1a70), *(eax_2 + 4), eax_1, 0x3ee, 0xb, 0x3ea, 3, 
    *(eax_2 + 0x28), *(eax_2 + 0x2c), *(eax_2 + 0x30), 0, 0, nullptr, 0, nullptr, nullptr)
int32_t eax_6 = 0
void* edx_4 = *(arg1 + 4)
int32_t esi_2 = *(edx_4 + 0xc80)

if (esi_2 s> 0)
    do
        if (*(edx_4 + (eax_6 << 2)) == eax_1)
            *(edx_4 + 0xc80) = esi_2 - 1
            *(edx_4 + (eax_6 << 2)) = *(edx_4 + ((esi_2 - 1) << 2))
            break
        
        eax_6 += 1
    while (eax_6 s< esi_2)

int128_t* eax_9
int32_t ecx_4
eax_9, ecx_4 = sub_56b800()
int32_t var_94 = 1
return sub_5661e0(arg1, 0x3ee, *(arg1 + 4), eax_9, ecx_4)
