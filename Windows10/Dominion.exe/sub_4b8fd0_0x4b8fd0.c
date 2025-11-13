// 函数: sub_4b8fd0
// 地址: 0x4b8fd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* var_38 = nullptr
void* eax = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t ecx
int32_t var_30 = ecx
int32_t edx = 0
void* esi_1 = eax + 0x58ec
void* var_28 = esi_1
int32_t ecx_3 = *(eax + 0x63dc)
int32_t var_20 = ecx_3
int32_t i_2 = ecx_3 << 2

if (i_2 != 0)
    int32_t i
    
    do
        char eax_1 = *esi_1
        esi_1 += 1
        edx = edx u>> 8 ^ *(((zx.d(eax_1) ^ zx.d(edx.b)) << 2) + &data_7ffd70)
        i = i_2
        i_2 -= 1
    while (i != 1)

void* esi_2 = eax + 0x56e8
int32_t var_1c = edx
void* var_18 = esi_2
void* result = nullptr
int32_t ecx_4 = *(eax + 0x58e8)
int32_t var_10 = ecx_4
int32_t i_3 = ecx_4 << 3

if (i_3 != 0)
    int32_t i_1
    
    do
        char ecx_5 = *esi_2
        esi_2 += 1
        result = result u>> 8 ^ *(((zx.d(ecx_5) ^ zx.d(result.b)) << 2) + &data_7ffd70)
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

void* ecx_8 = data_cc8d5c
void* result_1 = result

if (ecx_8 != 0)
    if (*(ecx_8 + 0x18) != 3)
        return result
    
    return sub_68b720(&var_38, 0xf42ab, *(ecx_8 + 0x14), data_1597d20, &var_38)

sub_63b870(result, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
