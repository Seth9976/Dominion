// 函数: sub_5621a0
// 地址: 0x5621a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_c = arg1
void* eax = sub_573400()
uint32_t eax_1 = 0

if ((arg2.b & 1) != 0)
    eax_1 = sub_56b780()

int32_t var_1c = arg2
int32_t var_20 = 0xffffffff
uint32_t var_24 = eax_1
sub_571fa0(eax_1, *(eax + 0xc), *(eax + 4), 0xa00, arg1, 0x476, nullptr)
void* eax_2 = sub_573400()
int32_t ecx_1 = *(eax_2 + 0xc)

if (ecx_1 != 0xffffffff)
    int32_t result = *(eax_2 + 4)
    int32_t ecx_2 = ecx_1 * 0x5a30
    *(ecx_2 + result + 0x17558) |= 0x20
    return result

sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
