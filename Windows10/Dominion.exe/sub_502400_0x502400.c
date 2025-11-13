// 函数: sub_502400
// 地址: 0x502400
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax
sub_561af0(eax, 0, 2, 0)
uint32_t esi_1 = zx.d(sub_56b800())
int32_t edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t result = esi_1 * 0x64

if (*(result + edi + 0x1a50) != 0x3e9)
    return result

sub_56c1b0(result, sub_502490, 6, sub_502500, 0, 0x24)
int32_t var_c90 = 0
return sub_56bba0(&var_c90, 0, sub_502540, &var_c90, 0x25, 2)
