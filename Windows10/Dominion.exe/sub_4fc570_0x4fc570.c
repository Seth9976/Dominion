// 函数: sub_4fc570
// 地址: 0x4fc570
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_f5847447f78ee6cf3f7dc793aff190b7>, void>::VTable
    * const var_cc8 = &std::_Func_impl_no_alloc<class <lambda_f5847447f78ee6cf3f7dc793aff190b7>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_f5847447f78ee6cf3f7dc793aff190b7>, void>::VTable
    * const* var_ca4 = &var_cc8
sub_5699b0(var_cc8)
int32_t esi = 0
int32_t ebx = *(*(sub_573400() + 4) + 0x19e4)
void* eax_2 = sub_573400()

if (*eax_2 == 2)
    uint32_t esi_2 = zx.d((*(eax_2 + 0x10)).w)
    int32_t eax_4 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    esi = *(esi_2 * 0x64 + eax_4 + 0x1a4c)

int32_t eax_6
int32_t edx

if (ebx == 0)
    eax_6 = *(eax_2 + 0x28)
    edx = *(eax_2 + 0x2c)
else
    edx:eax_6 = sx.q(ebx)

sub_5911e0(eax_6, *(eax_2 + 0xc), *(eax_2 + 4), 2, 1, 8, eax_6, edx, 3, 0xffffffff, 0, esi)
sub_4f9990()
int32_t var_ca4_2 = 2
int32_t var_c90 = 0
return sub_56bba0(&var_c90, 0, sub_4f9990, &var_c90, 1, var_ca4_2)
