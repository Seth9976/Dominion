// 函数: sub_6437e0
// 地址: 0x6437e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*(arg1 + 0x48)
void* edi = *(arg1 + 4)
int32_t eax_1 = sub_643790()
int32_t ebx = 0
int32_t esi = *(edi + 0x14)
int32_t var_c = *(edi + 0x10)
int32_t ecx_2 = *(edi + 0x28)
int32_t var_8 = esi
int32_t var_14_1
int32_t ecx_6
int32_t edx_4

if (eax_1 != 1)
    if ((*(*data_147b070 + 0x2c))(*(edi + 0x38)) == 0)
        *(edi + 0x38) = (*(*data_147b070 + 0x28))(*(edi + 0x20), *(edi + 0x18), *(edi + 0x10), 0)
    
    if (*(edi + 0x2c) s> 0 && (*(*data_147b070 + 0x38))(*(edi + 0x3c)) == 0)
        int32_t edx_5 = *(edi + 0x2c)
        int32_t eax_13
        eax_13.b = edx_5 != *(edi + 0x28) * 2
        esi = var_8
        *(edi + 0x3c) =
            (*(*data_147b070 + 0x34))(*(edi + 0x30), edx_5, zx.d(eax_13.b), 0, *(edi + 0x38))
    
    ecx_6 = *(edi + 0x3c)
    
    if (eax_1 == 2)
        ebx = data_147ab9c
    
    edx_4 = ecx_2
    var_14_1 = *(edi + 0x38)
else
    void* eax_3 = sub_6d77d0(sub_6d7690(*(arg1 + 0x48)))
    sub_643560(*(arg1 + 4), *eax_3)
    esi = *(edi + 0x14) * data_147ab9c
    ecx_6 = *(edi + 0x44)
    var_14_1 = *(edi + 0x40)
    edx_4 = *(edi + 0x28) * data_147ab9c
    var_c = 0xc
    var_8 = esi

int32_t edx_6
int32_t eax_18
int32_t eax_17

if (ecx_6 == 0)
    edx_6:eax_18 = muls.dp.d(0x55555556, esi)
else
    edx_6:eax_17 = muls.dp.d(0x55555556, edx_4)
(*(*data_147b070 + 0x40))(4, var_14_1, ecx_6, var_c, (edx_6 u>> 0x1f) + edx_6, var_8, 0, ebx)
int32_t ecx_12 = data_147ab9c
void* result = data_147b06c

if (ecx_12 s<= 0)
    *(result + 0x18) += 1
    *(result + 0x1c) += 1
    return result

*(result + 0x18) += ecx_12
*(result + 0x1c) += 1
return result
