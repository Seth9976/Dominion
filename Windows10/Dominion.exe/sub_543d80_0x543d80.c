// 函数: sub_543d80
// 地址: 0x543d80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t eax
sub_561e00(eax, 0, 3, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 2, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

int32_t eax_4 = *(eax_2 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
int32_t var_c_1 = ecx_3
int32_t var_10 = 0
*(ecx_3 + eax_4 + 0x17558) |= 8
uint32_t result = sub_568960(eax_4, 0, 0x3ea, 0)

if (result s< 8)
    return result

sub_56e9c0(1)
uint32_t eax_5
int32_t ecx_4
eax_5, ecx_4 = sub_56b800()
int32_t var_c_2 = ecx_4
sub_5624a0(eax_5, 0x3e9)
return sub_5636e0(2, 0)
