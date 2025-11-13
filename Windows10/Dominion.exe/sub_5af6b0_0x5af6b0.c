// 函数: sub_5af6b0
// 地址: 0x5af6b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int64_t* esi = arg1

while (esi != arg2)
    arg2 -= 0xc
    
    if (esi == arg2)
        break
    
    int64_t xmm1_1 = *esi
    int32_t ecx = esi[1].d
    *esi = *arg2
    esi[1].d = arg2[1].d
    esi += 0xc
    *arg2 = xmm1_1
    arg2[1].d = ecx
