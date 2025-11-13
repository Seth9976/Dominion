// 函数: sub_720e90
// 地址: 0x720e90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg3[0x11f0] s< 0x10)
    sub_720ca0(arg3)
    
    if (arg3[0x11f0] s< 0x10)
        sub_720ca0(arg3)

int32_t edi = arg3[0x11ef]
uint32_t eax_2 = zx.d(*((edi u>> 0x17) + arg4))
uint32_t ebx_1

if (eax_2 u>= 0xff)
    int32_t* eax_5 = arg4 + 0x62c
    int32_t edx_1 = 0xa
    
    while (edi u>> 0x10 u>= *eax_5)
        eax_5 = &eax_5[1]
        edx_1 += 1
    
    int32_t ebx_2 = arg3[0x11f0]
    
    if (edx_1 == 0x11)
        arg3[0x11f0] = ebx_2 - 0x10
        return 0
    
    if (edx_1 s<= ebx_2)
        int32_t eax_11 = (edi u>> (0x20 - edx_1.b) & *((edx_1 << 2) + &data_801050))
            + *(arg4 + (edx_1 << 2) + 0x64c)
        arg3[0x11f0] = ebx_2 - edx_1
        arg3[0x11ef] = edi << edx_1.b
        ebx_1 = zx.d(*(eax_11 + arg4 + 0x400))
        goto label_720f90
else
    uint32_t ecx_1 = zx.d(*(eax_2 + arg4 + 0x500))
    int32_t eax_3 = arg3[0x11f0]
    
    if (ecx_1 s<= eax_3)
        arg3[0x11ef] = edi << ecx_1.b
        arg3[0x11f0] = eax_3 - ecx_1
        ebx_1 = zx.d(*(eax_2 + arg4 + 0x400))
    label_720f90:
        memset(arg2, 0, 0x80)
        int32_t edi_7
        
        if (ebx_1 == 0)
            edi_7 = 0
        else
            if (arg3[0x11f0] s< ebx_1)
                sub_720ca0(arg3)
            
            int32_t edi_3 = arg3[0x11ef]
            arg3[0x11f0] -= ebx_1
            int32_t edx_3 = rol.d(edi_3, ebx_1.b)
            int32_t ecx_10 = *((ebx_1 << 2) + &data_801050)
            int32_t edi_6 = not.d(edi_3 s>> 0x1f) & *((ebx_1 << 2) + &data_801010)
            arg3[0x11ef] = not.d(ecx_10) & edx_3
            edi_7 = edi_6 + (ecx_10 & edx_3)
        
        void* ebx_4 = 1
        int32_t eax_16 = arg7 * 9
        int32_t ecx_13 = arg3[eax_16 * 2 + 0x11ad] + edi_7
        arg3[eax_16 * 2 + 0x11ad] = ecx_13
        *arg2 = ecx_13.w * *arg8
        
        while (true)
            if (arg3[0x11f0] s< 0x10)
                sub_720ca0(arg3)
            
            int32_t edx_4 = arg3[0x11f0]
            int32_t edi_8 = sx.d(*(arg6 + (arg3[0x11ef] u>> 0x17 << 1)))
            
            if (edi_8 == 0)
                if (edx_4 s< 0x10)
                    sub_720ca0(arg3)
                
                int32_t edx_7 = arg3[0x11ef]
                uint32_t eax_32 = zx.d(*((edx_7 u>> 0x17) + arg5))
                int32_t edx_8
                int32_t edi_12
                
                if (eax_32 u>= 0xff)
                    int32_t* eax_33 = arg5 + 0x62c
                    int32_t edx_9 = 0xa
                    
                    while (edx_7 u>> 0x10 u>= *eax_33)
                        eax_33 = &eax_33[1]
                        edx_9 += 1
                    
                    int32_t edi_13 = arg3[0x11f0]
                    
                    if (edx_9 == 0x11)
                        arg3[0x11f0] = edi_13 - 0x10
                        break
                    
                    if (edx_9 s> edi_13)
                        break
                    
                    edi_12 = edi_13 - edx_9
                    eax_32 = (arg3[0x11ef] u>> (0x20 - edx_9.b) & *((edx_9 << 2) + &data_801050))
                        + *(arg5 + (edx_9 << 2) + 0x64c)
                    edx_8 = arg3[0x11ef] << edx_9.b
                else
                    uint32_t ecx_24 = zx.d(*(eax_32 + arg5 + 0x500))
                    int32_t edi_11 = arg3[0x11f0]
                    
                    if (ecx_24 s> edi_11)
                        break
                    
                    edx_8 = edx_7 << ecx_24.b
                    edi_12 = edi_11 - ecx_24
                
                arg3[0x11f0] = edi_12
                arg3[0x11ef] = edx_8
                uint32_t eax_37 = zx.d(*(eax_32 + arg5 + 0x400))
                void* ecx_32 = eax_37 & 0xf
                arg4 = ecx_32
                
                if (ecx_32 != 0)
                    void* ebx_6 = ebx_4 + (eax_37 u>> 4)
                    uint32_t eax_39 = zx.d(*(ebx_6 + 0x801098))
                    ebx_4 = ebx_6 + 1
                    
                    if (edi_12 s< ecx_32)
                        sub_720ca0(arg3)
                        ecx_32 = arg4
                    
                    int32_t edi_14 = arg3[0x11ef]
                    int32_t edx_12 = rol.d(edi_14, ecx_32.b)
                    int32_t ecx_34 = *((ecx_32 << 2) + &data_801050)
                    arg3[0x11ef] = not.d(ecx_34) & edx_12
                    arg3[0x11f0] -= arg4
                    arg2[eax_39] = (((not.d(edi_14 s>> 0x1f)).w & *((arg4 << 2) + &data_801010))
                        + (ecx_34.w & edx_12.w)) * arg8[eax_39]
                    goto label_7211c5
                
                if (eax_37 == 0xf0)
                    ebx_4 += 0x10
                    goto label_7211c5
            else
                int32_t ecx_19 = edi_8 & 0xf
                void* ebx_5 = ebx_4 + (edi_8 s>> 4 & 0xf)
                arg3[0x11ef] <<= ecx_19.b
                uint32_t eax_27 = zx.d(*(ebx_5 + 0x801098))
                ebx_4 = ebx_5 + 1
                arg3[0x11f0] = edx_4 - ecx_19
                int16_t* edx_6 = eax_27 * 2
                *(edx_6 + arg2) = *(edx_6 + arg8) * (edi_8 s>> 8).w
            label_7211c5:
                
                if (ebx_4 s< 0x40)
                    continue
            
            return 1
return 0
