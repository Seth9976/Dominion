// 函数: sub_5cbf20
// 地址: 0x5cbf20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_b7fcf4
int32_t ebx
ebx.b = 0

if (eax != 0)
    uint32_t ecx_1 = zx.d(eax.w)
    
    if (ecx_1 u< data_b809e4)
        void* ecx_3 = ecx_1 * 0x1c30 + data_b809e0
        
        if (*(ecx_3 + 0x1c28) == eax && ecx_3 != 0)
            sub_5cbbf0(ecx_3)
            ebx.b = 1

int32_t ecx_4 = data_8db5c4
int32_t edx = data_8db5d4
void* result = data_8db5c8
void* result_1

if (ecx_4 == 0x27)
    result_1 = result
label_5cbf7d:
    
    if (result_1 != 0)
        if (ecx_4 != 0x27)
            result = nullptr
            
            if (edx == 0x27)
                result = data_8db5d8
        
        uint32_t eax_2 = sub_64e7a0(sub_4bb9f0(0x1a8a0f0, result, "tbl_player_reveal_slide"))
        *(eax_2 + 0x138c) = 0
        *(eax_2 + 0x1390) = 0
        sub_67a770(eax_2, nullptr)
        sub_65bf00(eax_2)
else if (edx == 0x27)
    result_1 = data_8db5d8
    goto label_5cbf7d
result.b = ebx.b
return result
