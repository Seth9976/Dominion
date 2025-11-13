// 函数: sub_5748b0
// 地址: 0x5748b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_c = arg1
int32_t eax
uint32_t eax_1 = sub_576b30(eax, arg2, arg1, 0x32, 0, 0, 0)

if (eax_1 s> 0 && arg1[arg2 * 0x168c + 0x5d3f] != 0)
    return sub_590760(eax_1, arg2, arg1, 2, 0xffffffff, 0, 2)

if (arg1[arg2 * 0x168c + 0x5d3e] != 0)
    return sub_590760(eax_1, arg2, arg1, 1, 0xffffffff, 0, 2)

int32_t eax_3 = sub_576dd0(eax_1, arg2, arg1, 0x34, 0)

if (eax_3 s> 0)
    sub_5911e0(eax_3, arg2, arg1, 0x34, 0xffffffff, 1, 0, 0, 0, 0xffffffff, 0, 0)
    return sub_5749d0(arg1, arg2)

uint32_t eax_5 = sub_576b30(eax_3, arg2, arg1, 0x12, 0, 0, 0)

if (eax_5 s> 0)
    eax_5 = sub_591930()

if (arg2 == 0xffffffff)
    eax_5 = sub_591930()

int32_t eax_6 = sub_571f30(eax_5, arg2, arg1, 0xe00, 0x3f1, 0)
int32_t edi_1 = eax_6

if (edi_1 == 0xffffffff)
    eax_6 = sub_591930()

return sub_571cb0(eax_6, edi_1, arg1, 0xffffffff, 0, 0)
