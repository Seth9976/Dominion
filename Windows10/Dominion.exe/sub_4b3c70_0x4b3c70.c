// 函数: sub_4b3c70
// 地址: 0x4b3c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4 = ebp
int32_t* ecx = __chkstk(0x11e4)
__security_cookie
uint32_t eax_2
int32_t ecx_2
eax_2, ecx_2 = sub_4daf40(&var_4, &__return_addr)
int32_t var_10 = ecx_2
sub_4dbef0(eax_2)
char* arg_4
memset(&arg_4, 0, 0x11d0)
sub_4b3b80(ecx)
memcpy(&arg_4, &data_19e2790, 0x11b0)
int32_t arg_28 = 0x17
void* eax_3 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
void* esi_1 = eax_3 + 0x56e8
void* arg_11c4 = esi_1
int32_t ecx_7 = *(eax_3 + 0x58e8)
uint32_t result = 0
int32_t arg_11cc = ecx_7
int32_t i_1 = ecx_7 << 3

if (i_1 != 0)
    int32_t i
    
    do
        char ecx_8 = *esi_1
        esi_1 += 1
        result = result u>> 8 ^ *(((zx.d(ecx_8) ^ zx.d(result.b)) << 2) + &data_7ffd70)
        i = i_1
        i_1 -= 1
    while (i != 1)

void* ecx_11 = data_cc8d5c
uint32_t result_1 = result

if (ecx_11 != 0)
    if (*(ecx_11 + 0x18) == 3)
        result = sub_68b720(&arg_4, 0xf42c9, *(ecx_11 + 0x14), data_1597d18, &arg_4)
    
    CookieCheckFunction(result)
    return result

sub_63b870(result, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
