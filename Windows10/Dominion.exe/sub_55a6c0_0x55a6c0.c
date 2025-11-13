// 函数: sub_55a6c0
// 地址: 0x55a6c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_84 = ecx
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 != 0xffffffff)
    int32_t eax_3 = *(eax_2 + 4)
    int32_t ecx_3 = ecx_2 * 0x5a30
    *(ecx_3 + eax_3 + 0x17558) |= 2
    void* eax_4 = sub_573400()
    sub_590760(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 2, 1, 0, 0)
    eax_2 = sub_573400()
    int32_t ecx_5 = *(eax_2 + 0xc)
    
    if (ecx_5 != 0xffffffff)
        int32_t eax_5 = *(eax_2 + 4)
        int32_t ecx_6 = ecx_5 * 0x5a30
        int64_t var_6c
        __builtin_memset(&var_6c, 0, 0x2c)
        *(ecx_6 + eax_5 + 0x17558) |= 8
        int128_t var_40 = 0x128.o
        int32_t var_60
        int128_t var_30 = var_60.o
        int64_t var_50
        int128_t var_20 = var_50.o
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_24297ad124a2be0353a9d813d579608f>, void>::VTable
            * const var_a8 = &std::_Func_impl_no_alloc<class <lambda_24297ad124a2be0353a9d813d579608f>, void>::`vftable'{for `std::_Func_base<void>'}
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_24297ad124a2be0353a9d813d579608f>, void>::VTable
            * const* var_84_2 = &var_a8
        return sub_56a310(&var_a8, &var_40, 0xe2)

sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
