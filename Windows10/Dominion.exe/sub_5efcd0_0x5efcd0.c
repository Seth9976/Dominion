// 函数: sub_5efcd0
// 地址: 0x5efcd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
uint32_t esi_1 = zx.d((*(arg1 + 0x98)).w)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t ecx = data_b8097c
int32_t esi_2 = 0
int32_t var_8_1 = *(esi_1 * 0x64 + &data_b82524)
int32_t result

if (ecx s> 0)
    do
        result = *((esi_2 << 2) + &data_b7fcfc)
        
        if (result != *(arg1 + 0x98))
            uint32_t edi_1 = zx.d(result.w)
            
            if (edi_1 u>= 0x320)
                sub_591930()
                ecx = data_b8097c
            
            if (*(edi_1 * 0x64 + &data_b82524) == var_8_1)
                result.b = 0
                return result
        
        esi_2 += 1
    while (esi_2 s< ecx)

result.b = 1
return result
