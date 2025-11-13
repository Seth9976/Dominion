// 函数: sub_518210
// 地址: 0x518210
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
sub_517e90()
int32_t ecx = data_cca790
void* ebx_2

if (ecx != 2)
    ebx_2 = data_cca780 + ((ecx + 0xa02) << 3)
else
    ebx_2 = data_cca780 + 0x540 + (data_cca784 << 0xb)

int32_t var_20[0x5]

for (int32_t i = 0; i s< 5; i += 1)
    int32_t var_54_1 = *(ebx_2 + 4)
    int32_t* var_58 = &std::_Func_impl_no_alloc<class <lambda_58a405897e0e71b2066f3f25da284cd9>,bool,enum DomCardEnum>::`vftable'{for `std::_Func_base<bool,enum DomCardEnum>'}
    int32_t** var_34_1 = &var_58
    int32_t eax_4
    int32_t edx_1
    eax_4, edx_1 = sub_50ad20(&var_58, 0, &data_cca794, var_58)
    sub_50a6a0(eax_4, edx_1, eax_4, 0, 1)
    var_20[i] = eax_4

int32_t edi_2 = data_cc8de4
int32_t ebx_4 = data_cc8de0
int32_t eax_5
int32_t edx_2
eax_5, edx_2 = __allmul(ebx_4, edi_2, 0x4c957f2d, 0x5851f42d)
bool c = eax_5 + data_cc8de8 u< eax_5
data_cc8de0 = eax_5 + data_cc8de8
data_cc8de4 = adc.d(edx_2, data_cc8dec, c)
uint32_t eax_9
int32_t edx_6
eax_9, edx_6 = sub_511a60(var_20[
    ror.d(edi_2 u>> 0xd ^ (ebx_4 u>> 0x1b | edi_2 << 5), (edi_2 u>> 0x1b).b) u% 5])
uint32_t result = sub_50a6a0(eax_9, edx_6, eax_9, 2, 0)
CookieCheckFunction(result)
return result
