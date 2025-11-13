// 函数: sub_501e80
// 地址: 0x501e80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_74 = ecx
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_3 = *(eax_2 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
int64_t var_6c
__builtin_memset(&var_6c, 0, 0x2c)
*(ecx_3 + eax_3 + 0x17558) |= 2
int128_t var_40 = 0xe8.o
int32_t var_60
int128_t var_30 = var_60.o
int64_t var_50
int128_t var_20 = var_50.o
int32_t edi

if (sub_5663b0(edi) != 0)
    uint32_t eax_5
    int32_t ecx_4
    eax_5, ecx_4 = sub_56e9c0(1)
    int32_t var_74_1 = ecx_4
    sub_561e00(eax_5, 0, 1, 0)

return sub_4fe9d0()
