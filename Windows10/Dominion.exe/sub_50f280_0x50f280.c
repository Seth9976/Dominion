// 函数: sub_50f280
// 地址: 0x50f280
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = data_cc8de0
int32_t edi = data_cc8de4
int32_t eax
int32_t edx
eax, edx = __allmul(ebx, edi, 0x4c957f2d, 0x5851f42d)
bool c = eax + data_cc8de8 u< eax
data_cc8de0 = eax + data_cc8de8
uint32_t ecx_1 = edi u>> 0x1b
data_cc8de4 = adc.d(edx, data_cc8dec, c)
int32_t esi_3 = ror.d(edi u>> 0xd ^ (ebx u>> 0x1b | edi << 5), ecx_1.b)
int32_t var_10 = 0
return sub_50ac80(esi_3 u/ 6 * 6, *(((esi_3 u% 6) << 2) + &data_8177b0), 0xdb1, ecx_1, 0)
