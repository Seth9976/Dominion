// 函数: sub_558350
// 地址: 0x558350
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
void* result = sub_5887c0(eax, *(eax + 0xc), *(eax + 4), 0)

if (result == 0)
    return result

uint32_t esi_1 = zx.d(result.w)
void* ebx_1 = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_2 = esi_1 * 0x64
int32_t var_24 = eax_2
ebx_1.b = sub_5754f0(eax_2, *(eax_2 + ebx_1 + 0x1a4c), ebx_1, 4, 0)
sub_566890(zx.d(ebx_1.b) ^ 1)

if (ebx_1.b == 0)
    return sub_56e9c0(nullptr)

sub_56e9c0(1)
void* eax_4 = sub_573400()
int32_t* ebx_2 = *(eax_4 + 4)
uint32_t eax_5 = *(eax_4 + 0xc)

if (esi_1 u>= 0x320)
    sub_591930()

var_24.q = 0
int32_t var_14 = *(var_24 + ebx_2 + 0x1a54)
void* result_1 = result
int64_t var_10 = 0
return sub_586320(&result_1, eax_5, ebx_2, &result_1, &var_10, &var_24, 0x10)
