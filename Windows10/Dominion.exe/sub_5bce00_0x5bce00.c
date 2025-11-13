// 函数: sub_5bce00
// 地址: 0x5bce00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg4
int32_t edx = esi[5]
int32_t ecx = esi[4]

if (edx - ecx u< 0xb)
    int32_t __saved_edi_1 = 0xb
    esi = sub_5bfe30(esi, 0xb, 0)
else
    esi[4] = ecx + 0xb
    int32_t* edi_1 = esi
    
    if (edx u> 0xf)
        edi_1 = *esi
    
    uint32_t count
    
    if (edi_1 u>= &data_82838c[0xb] || edi_1 + ecx u< "card_encode")
        count = 0xb
    else if (edi_1 u> "card_encode")
        count = edi_1 - "card_encode"
    else
        count = 0
    
    memmove(edi_1 + 0xb, edi_1, ecx + 1)
    memcpy(edi_1, "card_encode", count)
    memcpy(edi_1 + count, &data_82838c[0xb][count], 0xb - count)

__builtin_memset(arg3, 0, 0x18)
*arg3 = *esi
arg3[1].q = *(esi + 0x10)
esi[4] = 0
esi[5] = 0xf
*esi = 0
return arg3
