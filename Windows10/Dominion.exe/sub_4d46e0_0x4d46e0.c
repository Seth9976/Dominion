// 函数: sub_4d46e0
// 地址: 0x4d46e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg1
int32_t esi = arg1 * 5
int32_t ebx
ebx.b = arg2

if ((&data_8db59c)[esi * 2] == 0)
    return 

int32_t ecx = (&data_8db5ac)[esi * 2]

if (ecx != 0)
    int32_t eax_2 = *(sub_4d3b00(ecx) + 0x18)
    
    if (eax_2 != 0)
        eax_2((&data_8db5b0)[esi * 2])

sub_64e810(&(&data_8db5b0)[esi * 2])
void* ecx_2 = *((esi << 3) + &data_8db5bc)
int128_t xmm0_1 = *((esi << 3) + &data_8db59c)
(&data_8db5a0)[esi * 2] = 0
(&data_8db59c)[esi * 2] = 0
*((esi << 3) + &data_8db5a4) = ecx_2
*((esi << 3) + &data_8db5bc) = ecx_2 + 1
*((esi << 3) + &data_8db5ac) = xmm0_1

if (ebx.b != 0)
    int32_t ecx_3 = (&data_8db5ac)[esi * 2]
    
    if (ecx_3 != 0)
        int32_t eax_4 = *(sub_4d3b00(ecx_3) + 0x18)
        
        if (eax_4 != 0)
            eax_4((&data_8db5b0)[esi * 2])
    
    sub_64e810(&(&data_8db5b0)[esi * 2])
    *((esi << 3) + &data_8db5ac) = *((esi << 3) + &data_8db59c)

(&data_8db598)[esi * 2] = 0
