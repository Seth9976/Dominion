// 函数: sub_562240
// 地址: 0x562240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t var_c4 = 0
int32_t var_c8 = 0xffffffff
int32_t var_d4
uint32_t var_d0
sub_571fa0(eax, *(eax + 0xc), *(eax + 4), 0xc00, arg1, 0x476, nullptr, var_d4, var_d0, 0)
int32_t var_b0
memset(&var_b0, 0, 0x48)
*(eax + 0xc)
*(eax + 4)
var_b0 = 4
int32_t* var_a8 = arg1
int128_t var_60 = var_b0.o
int128_t var_a0
int128_t var_50 = var_a0
int128_t var_90
int128_t var_40 = var_90
int128_t var_80
int128_t var_30 = var_80
int64_t var_70
int64_t var_20 = var_70
uint32_t var_b4 = 0x14
sub_580700(arg1, &var_b4, 1, &var_60, 0, nullptr, 0, nullptr)
void* eax_1 = sub_573400()
int32_t ecx_2 = *(eax_1 + 0xc)

if (ecx_2 != 0xffffffff)
    int32_t result = *(eax_1 + 4)
    int32_t ecx_3 = ecx_2 * 0x5a30
    *(ecx_3 + result + 0x17558) |= 0x200
    return result

sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
