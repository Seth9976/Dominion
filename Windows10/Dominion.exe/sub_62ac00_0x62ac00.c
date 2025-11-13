// 函数: sub_62ac00
// 地址: 0x62ac00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = sub_64e7a0(arg1)
void* i = data_cc8d78
void* result = i
int32_t ebx
ebx.b = i s> 1
*(eax + 0x18bc) = sub_62a910
int32_t eax_1 = i << 3
int32_t var_c = eax_1
int32_t edx = i << 2
int32_t var_8

if (i s> 1)
    var_c = eax_1
    var_8 = eax_1 - 8
else
    var_8 = edx

int32_t eax_2 = 0x18 - var_8
void* ecx_2

if ((ebx << 2) + 4 s>= eax_2)
    eax_2 = var_c - 8
    
    if (i s> 1)
        edx = eax_2
    
    ecx_2 = 0x18 - edx
else
    ecx_2 = (ebx << 2) + 4

int32_t var_20 = 0xffffffff
sub_666120(eax_2, &data_bf15a0, arg1, ecx_2)

if (i != 0)
    uint32_t eax_6 = sub_64e7a0(arg1)
    sub_665db0(eax_6, &data_bf15ac, eax_6, 0x3f800000, 0xffffffff, 0)
else
    do
        if (i s> *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42d0))
            uint32_t eax_5 = sub_64e7a0(arg1)
            sub_665db0(eax_5, &data_bf15b8, eax_5, 0x3f800000, i, 0)
        
        i += 1
    while (i s< (ebx << 2) + 4)

int32_t eax_7 = data_cc8d78
int32_t eax_8

if (eax_7 s> 1)
    eax_8 = (eax_7 << 3) + 0xfffffff8
else
    eax_8 = eax_7 << 2

int32_t esi = (&data_bf13d0)[eax_8 * 5]
uint32_t eax_10 = sub_64e7a0(arg1)
sub_665db0(eax_10, esi, eax_10, 0x3f800000, 0xffffffff, 0)
int32_t i_1 = 0

do
    int32_t eax_11 = data_cc8d78
    int32_t esi_1
    
    if (eax_11 s> 1)
        esi_1 = i_1 + ((eax_11 - 1) << 3)
    else
        esi_1 = i_1 + (eax_11 << 2)
    
    if (esi_1 s>= 0x18)
        break
    
    uint32_t eax_12 = sub_64e7a0(arg1)
    sub_665db0(eax_12, &(&data_bf13c4)[esi_1 * 5], eax_12, 0x3f800000, i_1, 0)
    i_1 += 1
while (i_1 s< (ebx << 2) + 4)

uint32_t eax_13
void** edx_3

if (result != 0)
    if (result != 3)
        return result
    
    eax_13 = sub_64e7a0(arg1)
    edx_3 = &data_be5d8c
else
    eax_13 = sub_64e7a0(arg1)
    edx_3 = &data_be5d80

return sub_665db0(eax_13, edx_3, eax_13, 0x3f800000, 0xffffffff, 0)
