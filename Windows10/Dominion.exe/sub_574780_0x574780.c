// 函数: sub_574780
// 地址: 0x574780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg4 == 0)
    return 

int32_t eax = sub_583fc0(arg1, arg2, arg3, 0xc00)

if (arg4 s> eax)
    sub_63b870(eax, &data_801800, "amount <= GetDebt(g, who)", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0xae1, "PayoffDebt")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t eax_2 = arg3[arg2 * 0x168c + 0x5d3d]

if (arg4 s< eax_2)
    eax_2 = arg4

int32_t ecx_1 = arg4 - eax_2
uint32_t var_c_1 = eax_2

if (arg4 - eax_2 s< 0)
    eax_2 = sub_591930()

uint32_t eax_3 = sub_583fc0(eax_2, arg2, arg3, 0xa00)
uint32_t var_28_1 = 0x29
uint32_t eax_4 = sub_576b30(eax_3, arg2, arg3, 0x29, 0, 0, 0)
uint32_t ecx_6

if (eax_4 s<= 0)
    ecx_6 = eax_3
else
    ecx_6 = eax_3 + sub_583fc0(eax_4, arg2, arg3, 0x601)

if (ecx_1 s> ecx_6)
    sub_591930()

if (var_c_1 != 0)
    int32_t eax_7 = neg.d(var_c_1)
    var_28_1 = 0
    sub_590760(eax_7, arg2, arg3, 0, eax_7, 0, 2)

int32_t eax_8 = ecx_1

if (eax_8 != 0)
    eax_8 = sub_586550(eax_8, arg2, arg3, eax_8, 0)

int32_t var_1c_1 = 0
int32_t var_20_2 = 0xffffffff
void var_2c
sub_571fa0(eax_8, arg2, arg3, 0xc00, neg.d(arg4), 0x476, nullptr, var_2c, var_28_1, 0)
