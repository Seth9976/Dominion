// 函数: sub_724580
// 地址: 0x724580
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

arg1[0x11f9] = 0
arg1[0x11fa] = 0xffffffff
arg1[0x11f1].b = 0xff

if (sub_722720(arg1) != 0xd8)
    return 0

if (arg2 == 1)
    return 1

uint32_t i = zx.d(sub_722720(arg1))

if (i != 0xc0)
    while (i != 0xc1)
        if (i == 0xc2)
            break
        
        if (sub_7232b0(arg1, i) == 0)
            return 0
        
        for (i = zx.d(sub_722720(arg1)); i == 0xff; i = zx.d(sub_722720(arg1)))
            void* esi_1 = *arg1
            
            if (*(esi_1 + 0x10) == 0)
            label_724626:
                
                if (*(esi_1 + 0xa8) u>= *(esi_1 + 0xac))
                    return 0
            else if ((*(esi_1 + 0x18))(*(esi_1 + 0x1c)) != 0)
                if (*(esi_1 + 0x20) == 0)
                    return 0
                
                goto label_724626
        
        if (i == 0xc0)
            break

int32_t eax_8
eax_8.b = i == 0xc2
arg1[0x11f3] = eax_8
int32_t eax_9 = sub_723fc0(arg1, arg2)
int32_t eax_10 = neg.d(eax_9)
return neg.d(sbb.d(eax_10, eax_10, eax_9 != 0))
