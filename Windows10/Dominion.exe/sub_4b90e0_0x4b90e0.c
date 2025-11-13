// 函数: sub_4b90e0
// 地址: 0x4b90e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = arg1
void* ecx = data_cc8d5c
int32_t ebx
ebx.b = arg2

if (ecx != 0)
    int32_t* eax = sub_4bb050(ecx + 0x507c, result)
    eax[0x4bf] = 1
    int16_t var_2b_1 = 0
    char var_29_1 = 0
    int32_t var_24_1 = 0
    int32_t var_14_1 = 0
    void* ecx_2 = data_cc8dc8
    char* var_30 = *eax
    char var_2c_1 = ebx.b
    void* eax_2 = sub_4d8f30(*(ecx_2 + 0x1e1a4))
    int32_t edx = 0
    void* esi_1 = eax_2 + 0x58ec
    void* var_28_1 = esi_1
    int32_t ecx_4 = *(eax_2 + 0x63dc)
    int32_t var_20_1 = ecx_4
    int32_t i_2 = ecx_4 << 2
    
    if (i_2 != 0)
        int32_t i
        
        do
            char eax_3 = *esi_1
            esi_1 += 1
            edx = edx u>> 8 ^ *(((zx.d(eax_3) ^ zx.d(edx.b)) << 2) + &data_7ffd70)
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    void* esi_2 = eax_2 + 0x56e8
    int32_t var_1c_1 = edx
    void* var_18_1 = esi_2
    result = nullptr
    int32_t ecx_5 = *(eax_2 + 0x58e8)
    int32_t var_10_1 = ecx_5
    int32_t i_3 = ecx_5 << 3
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            char ecx_6 = *esi_2
            esi_2 += 1
            result = result u>> 8 ^ *(((zx.d(ecx_6) ^ zx.d(result.b)) << 2) + &data_7ffd70)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    void* ecx_9 = data_cc8d5c
    void* result_1 = result
    
    if (ecx_9 != 0)
        if (*(ecx_9 + 0x18) != 3)
            return result
        
        return sub_68b720(&var_30, 0xf42ae, *(ecx_9 + 0x14), data_1597d68, &var_30)

sub_63b870(result, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
